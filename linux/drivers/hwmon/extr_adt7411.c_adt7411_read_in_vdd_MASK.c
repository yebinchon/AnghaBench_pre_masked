
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
 int VAR_4 ;
 int FUNC_0 (struct i2c_client*,int ,int ,int) ;
 int FUNC_1 (struct device*,int ,long*) ;
 struct adt7411_data* FUNC_2 (struct device*) ;




 int FUNC_3 (struct i2c_client*,int ) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_5, u32 VAR_6, long *VAR_7)
{
 struct adt7411_data *VAR_8 = FUNC_2(VAR_5);
 struct i2c_client *VAR_9 = VAR_8->client;
 int VAR_10;

 switch (VAR_6) {
 case 130:
  VAR_10 = FUNC_0(VAR_9, VAR_0,
       VAR_3, 2);
  if (VAR_10 < 0)
   return VAR_10;
  *VAR_7 = VAR_10 * 7000 / 1024;
  return 0;
 case 128:
  VAR_10 = FUNC_3(VAR_9, VAR_2);
  if (VAR_10 < 0)
   return VAR_10;
  *VAR_7 = VAR_10 * 7000 / 256;
  return 0;
 case 129:
  VAR_10 = FUNC_3(VAR_9, VAR_1);
  if (VAR_10 < 0)
   return VAR_10;
  *VAR_7 = VAR_10 * 7000 / 256;
  return 0;
 case 131:
  return FUNC_1(VAR_5, 0, VAR_7);
 default:
  return -VAR_4;
 }
}
