
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int addr; struct i2c_adapter* adapter; } ;
struct i2c_board_info {int type; } ;
struct i2c_adapter {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,unsigned int) ;
 int FUNC_2 (struct i2c_adapter*,int ) ;
 int FUNC_3 (int ,char const*,int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_6,
     struct i2c_board_info *VAR_7)
{
 struct i2c_adapter *VAR_8 = VAR_6->adapter;
 int VAR_9, VAR_10, VAR_11;
 const char *VAR_12;

 if (!FUNC_2(VAR_8, VAR_1))
  return -VAR_0;

 VAR_9 = FUNC_0(VAR_5);
 VAR_11 = FUNC_0(VAR_4);
 if (VAR_9 != 0x41 ||
     (VAR_11 & 0xf8) != 0x68)
  return -VAR_0;

 VAR_10 = FUNC_0(VAR_3);
 if (VAR_10 == 0x73)
  VAR_12 = "adt7473";
 else if (VAR_10 == 0x75 && VAR_6->addr == 0x2e)
  VAR_12 = "adt7475";
 else if (VAR_10 == 0x76)
  VAR_12 = "adt7476";
 else if ((VAR_11 & 0xfc) == 0x6c)
  VAR_12 = "adt7490";
 else {
  FUNC_1(&VAR_8->dev,
   "Couldn't detect an ADT7473/75/76/90 part at "
   "0x%02x\n", (unsigned int)VAR_6->addr);
  return -VAR_0;
 }

 FUNC_3(VAR_7->type, VAR_12, VAR_2);

 return 0;
}
