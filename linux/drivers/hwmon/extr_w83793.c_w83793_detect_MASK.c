
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {unsigned short addr; struct i2c_adapter* adapter; } ;
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
 unsigned short FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_7,
    struct i2c_board_info *VAR_8)
{
 u8 VAR_9, VAR_10, VAR_11;
 struct i2c_adapter *VAR_12 = VAR_7->adapter;
 unsigned short VAR_13 = VAR_7->addr;

 if (!FUNC_0(VAR_12, VAR_1))
  return -VAR_0;

 VAR_10 = FUNC_1(VAR_7, VAR_3);

 VAR_9 = VAR_10 & 0x80 ? 0x5c : 0xa3;

 if (VAR_9 != FUNC_1(VAR_7, VAR_6)) {
  FUNC_2("w83793: Detection failed at check vendor id\n");
  return -VAR_0;
 }





 if ((VAR_10 & 0x07) == 0
  && FUNC_1(VAR_7, VAR_5) !=
     (VAR_13 << 1)) {
  FUNC_2("w83793: Detection failed at check i2c addr\n");
  return -VAR_0;
 }


 VAR_11 = FUNC_1(VAR_7, VAR_4);
 if (VAR_11 != 0x7b)
  return -VAR_0;

 FUNC_3(VAR_8->type, "w83793", VAR_2);

 return 0;
}
