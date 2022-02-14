
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
 int FUNC_0 (struct i2c_adapter*,int ) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (int ,char const*,int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_6,
     struct i2c_board_info *VAR_7)
{
 struct i2c_adapter *VAR_8 = VAR_6->adapter;
 const char *VAR_9;
 int VAR_10, VAR_11;

 if (!FUNC_0(VAR_8, VAR_1))
  return -VAR_0;

 VAR_10 = FUNC_1(VAR_6, VAR_4);
 if (VAR_10 != VAR_5)
  return -VAR_0;

 VAR_11 = FUNC_1(VAR_6, VAR_3);
 switch (VAR_11) {
 case 129:
  VAR_9 = "lm95231";
  break;
 case 128:
  VAR_9 = "lm95241";
  break;
 default:
  return -VAR_0;
 }


 FUNC_2(VAR_7->type, VAR_9, VAR_2);
 return 0;
}
