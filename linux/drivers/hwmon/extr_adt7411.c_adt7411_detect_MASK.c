
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; int adapter; } ;
struct i2c_board_info {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_7,
     struct i2c_board_info *VAR_8)
{
 int VAR_9;

 if (!FUNC_1(VAR_7->adapter, VAR_5))
  return -VAR_4;

 VAR_9 = FUNC_2(VAR_7, VAR_3);
 if (VAR_9 < 0 || VAR_9 != VAR_1) {
  FUNC_0(&VAR_7->dev,
   "Wrong manufacturer ID. Got %d, expected %d\n",
   VAR_9, VAR_1);
  return -VAR_4;
 }

 VAR_9 = FUNC_2(VAR_7, VAR_2);
 if (VAR_9 < 0 || VAR_9 != VAR_0) {
  FUNC_0(&VAR_7->dev,
   "Wrong device ID. Got %d, expected %d\n",
   VAR_9, VAR_0);
  return -VAR_4;
 }

 FUNC_3(VAR_8->type, "adt7411", VAR_6);

 return 0;
}
