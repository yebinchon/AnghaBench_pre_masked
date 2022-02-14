
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;
struct adt7411_data {struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (struct i2c_client*,int,int,int ) ;
 int FUNC_3 (struct device*,int,int,long*) ;
 struct adt7411_data* FUNC_4 (struct device*) ;






 int FUNC_5 (struct i2c_client*,int) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_5, u32 VAR_6, int VAR_7,
        long *VAR_8)
{
 struct adt7411_data *VAR_9 = FUNC_4(VAR_5);
 struct i2c_client *VAR_10 = VAR_9->client;
 int VAR_11, VAR_12, VAR_13, VAR_14;

 switch (VAR_6) {
 case 132:
  VAR_13 = VAR_7 ? VAR_0 :
     VAR_3;
  VAR_14 = VAR_7 ? VAR_1 :
     VAR_2;
  VAR_11 = FUNC_2(VAR_10, VAR_13, VAR_14, 0);
  if (VAR_11 < 0)
   return VAR_11;
  VAR_11 = VAR_11 & 0x200 ? VAR_11 - 0x400 : VAR_11;
  *VAR_8 = VAR_11 * 250;
  return 0;
 case 129:
 case 131:
  VAR_12 = (VAR_6 == 129)
   ? FUNC_1(VAR_7)
   : FUNC_0(VAR_7);
  VAR_11 = FUNC_5(VAR_10, VAR_12);
  if (VAR_11 < 0)
   return VAR_11;
  VAR_11 = VAR_11 & 0x80 ? VAR_11 - 0x100 : VAR_11;
  *VAR_8 = VAR_11 * 1000;
  return 0;
 case 128:
 case 130:
 case 133:
  return FUNC_3(VAR_5, VAR_6, VAR_7, VAR_8);
 default:
  return -VAR_4;
 }
}
