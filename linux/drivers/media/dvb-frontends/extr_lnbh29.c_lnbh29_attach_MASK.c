
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lnbh29_priv {int i2c_address; int* config; struct i2c_adapter* i2c; } ;
struct lnbh29_config {int i2c_address; int data_config; } ;
struct i2c_adapter {int dev; } ;
struct TYPE_2__ {scalar_t__ (* set_voltage ) (struct dvb_frontend*,int ) ;int release_sec; } ;
struct dvb_frontend {TYPE_1__ ops; struct lnbh29_priv* sec_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct lnbh29_priv*) ;
 struct lnbh29_priv* FUNC_3 (int,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (struct dvb_frontend*,int ) ;

struct dvb_frontend *FUNC_5(struct dvb_frontend *VAR_3,
       struct lnbh29_config *VAR_4,
       struct i2c_adapter *VAR_5)
{
 struct lnbh29_priv *VAR_6;

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  return ((void*)0);

 VAR_6->i2c_address = (VAR_4->i2c_address >> 1);
 VAR_6->i2c = VAR_5;
 VAR_6->config[0] = 0x01;
 VAR_6->config[1] = VAR_4->data_config;
 VAR_3->sec_priv = VAR_6;

 if (FUNC_4(VAR_3, VAR_1)) {
  FUNC_0(&VAR_5->dev, "no LNBH29 found at I2C addr 0x%02x\n",
   VAR_6->i2c_address);
  FUNC_2(VAR_6);
  VAR_3->sec_priv = ((void*)0);
  return ((void*)0);
 }

 VAR_3->ops.release_sec = VAR_2;
 VAR_3->ops.set_voltage = FUNC_4;

 FUNC_1(&VAR_5->dev, "LNBH29 attached at I2C addr 0x%02x\n",
   VAR_6->i2c_address);

 return VAR_3;
}
