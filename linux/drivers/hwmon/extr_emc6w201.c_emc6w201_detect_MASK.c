
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; struct i2c_adapter* adapter; } ;
struct i2c_board_info {int type; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct i2c_adapter*,int ) ;
 int FUNC_3 (struct i2c_client*,int ) ;
 int FUNC_4 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_6,
      struct i2c_board_info *VAR_7)
{
 struct i2c_adapter *VAR_8 = VAR_6->adapter;
 int VAR_9, VAR_10, VAR_11;

 if (!FUNC_2(VAR_8, VAR_4))
  return -VAR_3;


 VAR_9 = FUNC_3(VAR_6, VAR_0);
 if (VAR_9 != 0x5C)
  return -VAR_3;
 VAR_10 = FUNC_3(VAR_6, VAR_2);
 if (VAR_10 < 0 || (VAR_10 & 0xF0) != 0xB0)
  return -VAR_3;
 if ((VAR_10 & 0x0F) > 2) {
  FUNC_0(&VAR_6->dev, "Unknown EMC6W201 stepping %d\n",
   VAR_10 & 0x0F);
  return -VAR_3;
 }


 VAR_11 = FUNC_3(VAR_6, VAR_1);
 if (VAR_11 < 0 || (VAR_11 & 0xF4) != 0x04)
  return -VAR_3;
 if (!(VAR_11 & 0x01)) {
  FUNC_1(&VAR_6->dev, "Monitoring not enabled\n");
  return -VAR_3;
 }

 FUNC_4(VAR_7->type, "emc6w201", VAR_5);

 return 0;
}
