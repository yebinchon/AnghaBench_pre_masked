
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct device {int dummy; } ;
struct i2c_client {struct device dev; } ;
typedef int page_store ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct device*,char*,int,...) ;
 int FUNC_1 (struct i2c_client*,int ,int *) ;
 int FUNC_2 (struct i2c_client*,int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int const*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int *) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_7,
       const u8 *VAR_8, u16 VAR_9, int VAR_10)
{
 struct device *VAR_11 = &VAR_7->dev;
 u8 VAR_12[VAR_3 + 4];
 u8 VAR_13[3];
 u16 VAR_14;
 int VAR_15, VAR_16;

 VAR_12[0] = VAR_6;
 VAR_12[1] = VAR_5;
 FUNC_4(&VAR_12[2], VAR_8, VAR_3);

 FUNC_6(VAR_9, &VAR_12[VAR_3 + 2]);

 VAR_15 = FUNC_2(VAR_7, VAR_12, sizeof(VAR_12));
 if (VAR_15 != sizeof(VAR_12)) {
  VAR_16 = VAR_15 < 0 ? VAR_15 : -VAR_0;
  FUNC_0(VAR_11, "Failed to write page %d: %d\n", VAR_10, VAR_16);
  return VAR_16;
 }


 FUNC_5(35);

 VAR_16 = FUNC_1(VAR_7, VAR_4, VAR_13);
 if (VAR_16) {
  FUNC_0(VAR_11, "Failed to read IAP write result: %d\n", VAR_16);
  return VAR_16;
 }

 VAR_14 = FUNC_3((__le16 *)VAR_13);
 if (VAR_14 & (VAR_2 | VAR_1)) {
  FUNC_0(VAR_11, "IAP reports failed write: %04hx\n",
   VAR_14);
  return -VAR_0;
 }

 return 0;
}
