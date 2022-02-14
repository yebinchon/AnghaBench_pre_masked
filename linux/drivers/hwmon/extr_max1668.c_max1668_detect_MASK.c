
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
 int VAR_8 ;
 int FUNC_0 (struct i2c_adapter*,int ) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (int ,char const*,int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_9,
     struct i2c_board_info *VAR_10)
{
 struct i2c_adapter *VAR_11 = VAR_9->adapter;
 const char *VAR_12;
 int VAR_13, VAR_14;

 if (!FUNC_0(VAR_11, VAR_4))
  return -VAR_3;


 VAR_13 = FUNC_1(VAR_9, VAR_8);
 if (VAR_13 != VAR_6)
  return -VAR_3;

 VAR_14 = FUNC_1(VAR_9, VAR_7);
 if (VAR_14 < 0)
  return -VAR_3;

 VAR_12 = ((void*)0);
 if (VAR_14 == VAR_0)
  VAR_12 = "max1668";
 else if (VAR_14 == VAR_1)
  VAR_12 = "max1805";
 else if (VAR_14 == VAR_2)
  VAR_12 = "max1989";

 if (!VAR_12)
  return -VAR_3;

 FUNC_2(VAR_10->type, VAR_12, VAR_5);

 return 0;
}
