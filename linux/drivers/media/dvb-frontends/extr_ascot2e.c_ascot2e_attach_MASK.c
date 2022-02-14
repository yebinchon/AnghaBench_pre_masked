
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct i2c_adapter {int dev; } ;
struct dvb_tuner_ops {int dummy; } ;
struct TYPE_2__ {int tuner_ops; int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;} ;
struct dvb_frontend {struct ascot2e_priv* tuner_priv; TYPE_1__ ops; } ;
struct ascot2e_priv {int i2c_address; struct i2c_adapter* i2c; int state; int set_tuner; int set_tuner_data; } ;
struct ascot2e_config {int i2c_address; int set_tuner_callback; int set_tuner_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ascot2e_priv*,int,int) ;
 int FUNC_1 (struct ascot2e_priv*,int,int*,int) ;
 int FUNC_2 (int *,char*,int,struct i2c_adapter*) ;
 struct ascot2e_priv* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct dvb_frontend*,int) ;
 int FUNC_7 (struct dvb_frontend*,int) ;

struct dvb_frontend *FUNC_8(struct dvb_frontend *VAR_3,
        const struct ascot2e_config *VAR_4,
        struct i2c_adapter *VAR_5)
{
 u8 VAR_6[4];
 struct ascot2e_priv *VAR_7 = ((void*)0);

 VAR_7 = FUNC_3(sizeof(struct ascot2e_priv), VAR_0);
 if (VAR_7 == ((void*)0))
  return ((void*)0);
 VAR_7->i2c_address = (VAR_4->i2c_address >> 1);
 VAR_7->i2c = VAR_5;
 VAR_7->set_tuner_data = VAR_4->set_tuner_priv;
 VAR_7->set_tuner = VAR_4->set_tuner_callback;

 if (VAR_3->ops.i2c_gate_ctrl)
  VAR_3->ops.i2c_gate_ctrl(VAR_3, 1);


 VAR_6[0] = 16;

 VAR_6[1] = 0x06;

 VAR_6[2] = 0xC4;
 VAR_6[3] = 0x40;
 FUNC_1(VAR_7, 0x01, VAR_6, 4);

 VAR_6[0] = 0x10;
 VAR_6[1] = 0x3F;
 VAR_6[2] = 0x25;
 FUNC_1(VAR_7, 0x22, VAR_6, 3);

 FUNC_0(VAR_7, 0x28, 0x1e);

 FUNC_0(VAR_7, 0x59, 0x04);

 FUNC_5(80);

 FUNC_0(VAR_7, 0x4c, 0x01);

 FUNC_0(VAR_7, 0x07, 0x04);

 FUNC_0(VAR_7, 0x04, 0x00);

 FUNC_0(VAR_7, 0x03, 0xc0);

 VAR_6[0] = 0x00;
 VAR_6[1] = 0x04;
 FUNC_1(VAR_7, 0x14, VAR_6, 2);
 FUNC_0(VAR_7, 0x50, 0x01);
 VAR_7->state = VAR_1;

 if (VAR_3->ops.i2c_gate_ctrl)
  VAR_3->ops.i2c_gate_ctrl(VAR_3, 0);

 FUNC_4(&VAR_3->ops.tuner_ops, &VAR_2,
    sizeof(struct dvb_tuner_ops));
 VAR_3->tuner_priv = VAR_7;
 FUNC_2(&VAR_7->i2c->dev,
  "Sony ASCOT2E attached on addr=%x at I2C adapter %p\n",
  VAR_7->i2c_address, VAR_7->i2c);
 return VAR_3;
}
