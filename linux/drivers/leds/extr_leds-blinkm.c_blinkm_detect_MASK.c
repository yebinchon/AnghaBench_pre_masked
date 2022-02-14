
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dev; struct i2c_adapter* adapter; } ;
struct i2c_board_info {int type; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct i2c_client*,int ,int*) ;
 int FUNC_1 (struct i2c_client*,int ,int *) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (struct i2c_adapter*,int) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_6, struct i2c_board_info *VAR_7)
{
 struct i2c_adapter *VAR_8 = VAR_6->adapter;
 int VAR_9;
 int VAR_10 = 99;
 u8 VAR_11[7];

 if (!FUNC_3(VAR_8, VAR_2
         | VAR_3
         | VAR_4))
  return -VAR_1;





 while (VAR_10 > 0) {
  VAR_9 = FUNC_1(VAR_6, VAR_0, ((void*)0));
  if (VAR_9)
   return VAR_9;
  FUNC_5(5000, 10000);
  VAR_9 = FUNC_0(VAR_6, VAR_0, VAR_11);
  if (VAR_9)
   return VAR_9;
  FUNC_5(5000, 10000);
  if (VAR_11[0] == 0x09)
   VAR_10 = 0;
  VAR_10--;
 }


 VAR_9 = FUNC_1(VAR_6, VAR_0, ((void*)0));
 if (VAR_9 < 0)
  return VAR_9;
 FUNC_5(20000, 30000);
 VAR_9 = FUNC_0(VAR_6, VAR_0, VAR_11);
 if (VAR_9 < 0)
  return VAR_9;

 if (VAR_11[0] != 0x09) {
  FUNC_2(&VAR_6->dev, "enodev DEV ADDR = 0x%02X\n", VAR_11[0]);
  return -VAR_1;
 }

 FUNC_4(VAR_7->type, "blinkm", VAR_5);
 return 0;
}
