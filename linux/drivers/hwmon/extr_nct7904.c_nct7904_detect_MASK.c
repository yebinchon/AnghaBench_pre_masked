
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
 int VAR_9 ;
 int FUNC_0 (struct i2c_adapter*,int) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_10,
     struct i2c_board_info *VAR_11)
{
 struct i2c_adapter *VAR_12 = VAR_10->adapter;

 if (!FUNC_0(VAR_12,
         VAR_4 |
         VAR_5))
  return -VAR_3;


 if (FUNC_1(VAR_10, VAR_9) != VAR_8 ||
     FUNC_1(VAR_10, VAR_1) != VAR_7 ||
     (FUNC_1(VAR_10, VAR_2) & 0xf0) != 0x50 ||
     (FUNC_1(VAR_10, VAR_0) & 0xf8) != 0x00)
  return -VAR_3;

 FUNC_2(VAR_11->type, "nct7904", VAR_6);

 return 0;
}
