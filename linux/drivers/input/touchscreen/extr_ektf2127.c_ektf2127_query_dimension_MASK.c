
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct device {int dummy; } ;
struct i2c_client {struct device dev; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*,char const*,int,...) ;
 int FUNC_1 (struct i2c_client*,int*,int) ;
 int FUNC_2 (struct i2c_client*,int*,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_5, bool VAR_6)
{
 struct device *VAR_7 = &VAR_5->dev;
 const char *VAR_8 = VAR_6 ? "width" : "height";
 u8 VAR_9 = VAR_6 ? VAR_4 : VAR_1;
 u8 VAR_10[4];
 int VAR_11;
 int VAR_12;


 VAR_10[0] = VAR_2;
 VAR_10[1] = VAR_6 ? VAR_4 : VAR_1;
 VAR_10[2] = 0x00;
 VAR_10[3] = 0x00;
 VAR_11 = FUNC_2(VAR_5, VAR_10, sizeof(VAR_10));
 if (VAR_11 != sizeof(VAR_10)) {
  VAR_12 = VAR_11 < 0 ? VAR_11 : -VAR_0;
  FUNC_0(VAR_7, "Failed to request %s: %d\n", VAR_8, VAR_12);
  return VAR_12;
 }

 FUNC_3(20);


 VAR_11 = FUNC_1(VAR_5, VAR_10, sizeof(VAR_10));
 if (VAR_11 != sizeof(VAR_10)) {
  VAR_12 = VAR_11 < 0 ? VAR_11 : -VAR_0;
  FUNC_0(VAR_7, "Failed to receive %s data: %d\n", VAR_8, VAR_12);
  return VAR_12;
 }

 if (VAR_10[0] != VAR_3 || VAR_10[1] != VAR_9) {
  FUNC_0(VAR_7, "Unexpected %s data: %#02x %#02x\n",
   VAR_8, VAR_10[0], VAR_10[1]);
  return -VAR_0;
 }

 return (((VAR_10[3] & 0xf0) << 4) | VAR_10[2]) - 1;
}
