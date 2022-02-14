
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmac_i2c_bus {int dummy; } ;
struct i2c_msg {int flags; int len; int buf; } ;
struct i2c_adapter {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,char*,int,int) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (struct i2c_msg*) ;
 struct pmac_i2c_bus* FUNC_3 (struct i2c_adapter*) ;
 int FUNC_4 (struct pmac_i2c_bus*) ;
 int VAR_3 ;
 int FUNC_5 (struct pmac_i2c_bus*,int ) ;
 int FUNC_6 (struct pmac_i2c_bus*,int ) ;
 int FUNC_7 (struct pmac_i2c_bus*,int,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_8( struct i2c_adapter *VAR_4,
     struct i2c_msg *VAR_5,
     int VAR_6)
{
 struct pmac_i2c_bus *VAR_7 = FUNC_3(VAR_4);
 int VAR_8 = 0;
 int VAR_9;

 if (VAR_5->flags & VAR_2)
  return -VAR_0;
 VAR_9 = FUNC_2(VAR_5);

 VAR_8 = FUNC_5(VAR_7, 0);
 if (VAR_8) {
  FUNC_1(&VAR_4->dev, "Failed to open I2C, err %d\n", VAR_8);
  return VAR_8;
 }
 VAR_8 = FUNC_6(VAR_7, VAR_3);
 if (VAR_8) {
  FUNC_1(&VAR_4->dev, "Failed to set I2C mode %d, err %d\n",
   VAR_3, VAR_8);
  goto bail;
 }
 VAR_8 = FUNC_7(VAR_7, VAR_9, 0, 0, VAR_5->buf, VAR_5->len);
 if (VAR_8 < 0) {
  if (VAR_8 == -VAR_1)
   FUNC_0(&VAR_4->dev, "I2C %s 0x%02x failed, err %d\n",
    VAR_9 & 1 ? "read from" : "write to",
    VAR_9 >> 1, VAR_8);
  else
   FUNC_1(&VAR_4->dev, "I2C %s 0x%02x failed, err %d\n",
    VAR_9 & 1 ? "read from" : "write to",
    VAR_9 >> 1, VAR_8);
 }
 bail:
 FUNC_4(VAR_7);
 return VAR_8 < 0 ? VAR_8 : 1;
}
