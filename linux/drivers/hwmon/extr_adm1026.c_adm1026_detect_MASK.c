
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
 int VAR_7 ;
 int FUNC_0 (struct i2c_client*,int ) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (struct i2c_adapter*) ;
 int FUNC_4 (struct i2c_adapter*,int ) ;
 int FUNC_5 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_8,
     struct i2c_board_info *VAR_9)
{
 struct i2c_adapter *VAR_10 = VAR_8->adapter;
 int VAR_11 = VAR_8->addr;
 int VAR_12, VAR_13;

 if (!FUNC_4(VAR_10, VAR_6)) {

  return -VAR_5;
 }



 VAR_12 = FUNC_0(VAR_8, VAR_1);
 VAR_13 = FUNC_0(VAR_8, VAR_2);

 FUNC_1(&VAR_10->dev,
  "Detecting device at %d,0x%02x with COMPANY: 0x%02x and VERSTEP: 0x%02x\n",
  FUNC_3(VAR_8->adapter), VAR_8->addr,
  VAR_12, VAR_13);


 FUNC_1(&VAR_10->dev, "Autodetecting device at %d,0x%02x...\n",
  FUNC_3(VAR_10), VAR_11);
 if (VAR_12 == VAR_0
     && VAR_13 == VAR_3) {

 } else if (VAR_12 == VAR_0
  && (VAR_13 & 0xf0) == VAR_4) {
  FUNC_2(&VAR_10->dev,
   "Unrecognized stepping 0x%02x. Defaulting to ADM1026.\n",
   VAR_13);
 } else if ((VAR_13 & 0xf0) == VAR_4) {
  FUNC_2(&VAR_10->dev,
   "Found version/stepping 0x%02x. Assuming generic ADM1026.\n",
   VAR_13);
 } else {
  FUNC_1(&VAR_10->dev, "Autodetection failed\n");

  return -VAR_5;
 }

 FUNC_5(VAR_9->type, "adm1026", VAR_7);

 return 0;
}
