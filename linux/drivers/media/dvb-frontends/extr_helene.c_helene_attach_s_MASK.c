
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_adapter {int dev; } ;
struct helene_priv {int i2c_address; struct i2c_adapter* i2c; int xtal; int set_tuner; int set_tuner_data; } ;
struct helene_config {int i2c_address; int xtal; int set_tuner_callback; int set_tuner_priv; } ;
struct dvb_tuner_ops {int dummy; } ;
struct TYPE_2__ {int tuner_ops; int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;} ;
struct dvb_frontend {struct helene_priv* tuner_priv; TYPE_1__ ops; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,struct i2c_adapter*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct helene_priv*) ;
 int FUNC_2 (struct helene_priv*) ;
 struct helene_priv* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (struct dvb_frontend*,int) ;
 int FUNC_6 (struct dvb_frontend*,int) ;

struct dvb_frontend *FUNC_7(struct dvb_frontend *VAR_2,
  const struct helene_config *VAR_3,
  struct i2c_adapter *VAR_4)
{
 struct helene_priv *VAR_5 = ((void*)0);

 VAR_5 = FUNC_3(sizeof(struct helene_priv), VAR_0);
 if (VAR_5 == ((void*)0))
  return ((void*)0);
 VAR_5->i2c_address = (VAR_3->i2c_address >> 1);
 VAR_5->i2c = VAR_4;
 VAR_5->set_tuner_data = VAR_3->set_tuner_priv;
 VAR_5->set_tuner = VAR_3->set_tuner_callback;
 VAR_5->xtal = VAR_3->xtal;

 if (VAR_2->ops.i2c_gate_ctrl)
  VAR_2->ops.i2c_gate_ctrl(VAR_2, 1);

 if (FUNC_1(VAR_5) != 0) {
  FUNC_2(VAR_5);
  return ((void*)0);
 }

 if (VAR_2->ops.i2c_gate_ctrl)
  VAR_2->ops.i2c_gate_ctrl(VAR_2, 0);

 FUNC_4(&VAR_2->ops.tuner_ops, &VAR_1,
   sizeof(struct dvb_tuner_ops));
 VAR_2->tuner_priv = VAR_5;
 FUNC_0(&VAR_5->i2c->dev,
   "Sony HELENE Sat attached on addr=%x at I2C adapter %p\n",
   VAR_5->i2c_address, VAR_5->i2c);
 return VAR_2;
}
