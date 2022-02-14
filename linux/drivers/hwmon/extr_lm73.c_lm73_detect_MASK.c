
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {struct i2c_adapter* adapter; } ;
struct i2c_board_info {int type; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct i2c_adapter*,int) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_8,
   struct i2c_board_info *VAR_9)
{
 struct i2c_adapter *VAR_10 = VAR_8->adapter;
 int VAR_11, VAR_12, VAR_13;

 if (!FUNC_0(VAR_10, VAR_1 |
     VAR_2))
  return -VAR_0;





 VAR_12 = FUNC_1(VAR_8, VAR_6);
 if (VAR_12 < 0 || (VAR_12 & 0x10))
  return -VAR_0;

 VAR_13 = FUNC_1(VAR_8, VAR_5);
 if (VAR_13 < 0 || (VAR_13 & 0x0c))
  return -VAR_0;

 VAR_11 = FUNC_1(VAR_8, VAR_7);
 if (VAR_11 < 0 || VAR_11 != (VAR_4 & 0xff))
  return -VAR_0;


 VAR_11 = FUNC_2(VAR_8, VAR_7);
 if (VAR_11 < 0 || VAR_11 != VAR_4)
  return -VAR_0;

 FUNC_3(VAR_9->type, "lm73", VAR_3);

 return 0;
}
