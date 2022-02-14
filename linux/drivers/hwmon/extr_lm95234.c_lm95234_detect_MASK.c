
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int addr; struct i2c_adapter* adapter; } ;
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
 int VAR_10 ;
 int FUNC_0 (struct i2c_adapter*,int ) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (int ,char const*,int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_11,
     struct i2c_board_info *VAR_12)
{
 struct i2c_adapter *VAR_13 = VAR_11->adapter;
 int VAR_14 = VAR_11->addr;
 u8 VAR_15, VAR_16;
 int VAR_17, VAR_18, VAR_19;
 const char *VAR_20;

 if (!FUNC_0(VAR_13, VAR_1))
  return -VAR_0;

 VAR_17 = FUNC_1(VAR_11, VAR_6);
 if (VAR_17 != VAR_10)
  return -VAR_0;

 VAR_18 = FUNC_1(VAR_11, VAR_3);
 switch (VAR_18) {
 case 129:
  if (VAR_14 != 0x18 && VAR_14 != 0x2a && VAR_14 != 0x2b)
   return -VAR_0;
  VAR_15 = 0xbf;
  VAR_16 = 0xf9;
  VAR_20 = "lm95233";
  break;
 case 128:
  if (VAR_14 != 0x18 && VAR_14 != 0x4d && VAR_14 != 0x4e)
   return -VAR_0;
  VAR_15 = 0xbc;
  VAR_16 = 0xe1;
  VAR_20 = "lm95234";
  break;
 default:
  return -VAR_0;
 }

 VAR_19 = FUNC_1(VAR_11, VAR_9);
 if (VAR_19 & 0x30)
  return -VAR_0;

 VAR_19 = FUNC_1(VAR_11, VAR_4);
 if (VAR_19 & VAR_15)
  return -VAR_0;

 VAR_19 = FUNC_1(VAR_11, VAR_5);
 if (VAR_19 & 0xfc)
  return -VAR_0;

 VAR_19 = FUNC_1(VAR_11, VAR_7);
 if (VAR_19 & VAR_16)
  return -VAR_0;

 VAR_19 = FUNC_1(VAR_11, VAR_8);
 if (VAR_19 & VAR_16)
  return -VAR_0;

 FUNC_2(VAR_12->type, VAR_20, VAR_2);
 return 0;
}
