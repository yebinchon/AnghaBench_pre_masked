
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct i2c_adapter {int dev; } ;
struct horus3a_priv {int i2c_address; struct i2c_adapter* i2c; int set_tuner; int set_tuner_data; } ;
struct horus3a_config {int i2c_address; int xtal_freq_mhz; int set_tuner_callback; int set_tuner_priv; } ;
struct dvb_tuner_ops {int dummy; } ;
struct TYPE_2__ {int tuner_ops; int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;} ;
struct dvb_frontend {struct horus3a_priv* tuner_priv; TYPE_1__ ops; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,struct i2c_adapter*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct horus3a_priv*) ;
 int VAR_1 ;
 int FUNC_3 (struct horus3a_priv*,int,int) ;
 int FUNC_4 (struct horus3a_priv*,int,int*,int) ;
 struct horus3a_priv* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (struct dvb_frontend*,int) ;
 int FUNC_8 (struct dvb_frontend*,int) ;
 int FUNC_9 (int,int) ;

struct dvb_frontend *FUNC_10(struct dvb_frontend *VAR_2,
        const struct horus3a_config *VAR_3,
        struct i2c_adapter *VAR_4)
{
 u8 VAR_5[3], VAR_6;
 struct horus3a_priv *VAR_7 = ((void*)0);

 VAR_7 = FUNC_5(sizeof(struct horus3a_priv), VAR_0);
 if (VAR_7 == ((void*)0))
  return ((void*)0);
 VAR_7->i2c_address = (VAR_3->i2c_address >> 1);
 VAR_7->i2c = VAR_4;
 VAR_7->set_tuner_data = VAR_3->set_tuner_priv;
 VAR_7->set_tuner = VAR_3->set_tuner_callback;

 if (VAR_2->ops.i2c_gate_ctrl)
  VAR_2->ops.i2c_gate_ctrl(VAR_2, 1);


 FUNC_9(4000, 6000);

 FUNC_3(VAR_7, 0x2a, 0x79);

 VAR_5[0] = VAR_3->xtal_freq_mhz;
 VAR_5[1] = VAR_3->xtal_freq_mhz;
 VAR_5[2] = 0;

 FUNC_4(VAR_7, 0x6, VAR_5, 3);

 FUNC_3(VAR_7, 0x0a, 0x40);
 switch (VAR_3->xtal_freq_mhz) {
 case 27:
  VAR_6 = 0x1f;
  break;
 case 24:
  VAR_6 = 0x10;
  break;
 case 16:
  VAR_6 = 0xc;
  break;
 default:
  VAR_6 = 0;
  FUNC_1(&VAR_7->i2c->dev,
   "horus3a: invalid xtal frequency %dMHz\n",
   VAR_3->xtal_freq_mhz);
  break;
 }
 VAR_6 <<= 2;
 FUNC_3(VAR_7, 0x0e, VAR_6);
 FUNC_2(VAR_7);
 FUNC_9(3000, 5000);

 if (VAR_2->ops.i2c_gate_ctrl)
  VAR_2->ops.i2c_gate_ctrl(VAR_2, 0);

 FUNC_6(&VAR_2->ops.tuner_ops, &VAR_1,
    sizeof(struct dvb_tuner_ops));
 VAR_2->tuner_priv = VAR_7;
 FUNC_0(&VAR_7->i2c->dev,
  "Sony HORUS3A attached on addr=%x at I2C adapter %p\n",
  VAR_7->i2c_address, VAR_7->i2c);
 return VAR_2;
}
