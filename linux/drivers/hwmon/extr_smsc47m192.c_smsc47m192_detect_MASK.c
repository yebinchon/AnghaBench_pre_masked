
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
 int VAR_6 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct i2c_adapter*,int ) ;
 int FUNC_3 (struct i2c_client*,int ) ;
 int FUNC_4 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_7,
        struct i2c_board_info *VAR_8)
{
 struct i2c_adapter *VAR_9 = VAR_7->adapter;
 int VAR_10;

 if (!FUNC_2(VAR_9, VAR_1))
  return -VAR_0;


 VAR_10 = FUNC_3(VAR_7, VAR_4);
 if (FUNC_3(VAR_7,
    VAR_3) == 0x55
  && (VAR_10 & 0xf0) == 0x20
  && (FUNC_3(VAR_7,
    VAR_5) & 0x70) == 0x00
  && (FUNC_3(VAR_7,
    VAR_6) & 0xfe) == 0x80) {
  FUNC_1(&VAR_9->dev,
    "found SMSC47M192 or compatible, "
    "version 2, stepping A%d\n", VAR_10 & 0x0f);
 } else {
  FUNC_0(&VAR_9->dev,
   "SMSC47M192 detection failed at 0x%02x\n",
   VAR_7->addr);
  return -VAR_0;
 }

 FUNC_4(VAR_8->type, "smsc47m192", VAR_2);

 return 0;
}
