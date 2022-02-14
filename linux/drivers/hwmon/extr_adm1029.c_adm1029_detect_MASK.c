
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
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
 int FUNC_0 (struct i2c_adapter*,int ) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_7,
     struct i2c_board_info *VAR_8)
{
 struct i2c_adapter *VAR_9 = VAR_7->adapter;
 u8 VAR_10, VAR_11, VAR_12, VAR_13;

 if (!FUNC_0(VAR_9, VAR_5))
  return -VAR_4;
 VAR_10 = FUNC_1(VAR_7, VAR_1);
 VAR_11 = FUNC_1(VAR_7, VAR_0);
 VAR_12 = FUNC_1(VAR_7,
     VAR_3);
 VAR_13 = FUNC_1(VAR_7,
        VAR_2);

 if (VAR_10 != 0x41 || (VAR_12 & 0xf9) != 0x01 ||
     VAR_13 != 0x03)
  return -VAR_4;

 if ((VAR_11 & 0xF0) != 0x00) {




  FUNC_2("Unknown major revision %x, please let us know\n",
   VAR_11);
  return -VAR_4;
 }

 FUNC_3(VAR_8->type, "adm1029", VAR_6);

 return 0;
}
