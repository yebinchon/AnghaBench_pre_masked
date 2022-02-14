
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_device_id {int dummy; } ;
struct device {struct helene_config* platform_data; } ;
struct i2c_client {int adapter; int addr; struct device dev; } ;
struct helene_priv {int i2c; int i2c_address; int xtal; int set_tuner; int set_tuner_data; } ;
struct helene_config {int xtal; int set_tuner_callback; int set_tuner_priv; struct dvb_frontend* fe; } ;
struct dvb_tuner_ops {int dummy; } ;
struct TYPE_2__ {int tuner_ops; int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;} ;
struct dvb_frontend {struct helene_priv* tuner_priv; TYPE_1__ ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,int ,int ) ;
 struct helene_priv* FUNC_1 (struct device*,int,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct helene_priv*) ;
 int FUNC_3 (struct i2c_client*,struct helene_priv*) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (struct dvb_frontend*,int) ;
 int FUNC_6 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_4,
   const struct i2c_device_id *VAR_5)
{
 struct helene_config *VAR_6 = VAR_4->dev.platform_data;
 struct dvb_frontend *VAR_7 = VAR_6->fe;
 struct device *VAR_8 = &VAR_4->dev;
 struct helene_priv *VAR_9;

 VAR_9 = FUNC_1(VAR_8, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->i2c_address = VAR_4->addr;
 VAR_9->i2c = VAR_4->adapter;
 VAR_9->set_tuner_data = VAR_6->set_tuner_priv;
 VAR_9->set_tuner = VAR_6->set_tuner_callback;
 VAR_9->xtal = VAR_6->xtal;

 if (VAR_7->ops.i2c_gate_ctrl)
  VAR_7->ops.i2c_gate_ctrl(VAR_7, 1);

 if (FUNC_2(VAR_9) != 0)
  return -VAR_0;

 if (VAR_7->ops.i2c_gate_ctrl)
  VAR_7->ops.i2c_gate_ctrl(VAR_7, 0);

 FUNC_4(&VAR_7->ops.tuner_ops, &VAR_3,
        sizeof(struct dvb_tuner_ops));
 VAR_7->tuner_priv = VAR_9;
 FUNC_3(VAR_4, VAR_9);

 FUNC_0(VAR_8, "Sony HELENE attached on addr=%x at I2C adapter %p\n",
   VAR_9->i2c_address, VAR_9->i2c);

 return 0;
}
