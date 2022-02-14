
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct i2c_msg {int len; int * buf; int flags; int addr; } ;
struct dvb_pll_priv {int frequency; int bandwidth; int * i2c; int pll_i2c_address; } ;
struct TYPE_2__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;} ;
struct dtv_frontend_properties {int bandwidth_hz; int frequency; } ;
struct dvb_frontend {TYPE_1__ ops; struct dvb_pll_priv* tuner_priv; struct dtv_frontend_properties dtv_property_cache; } ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (struct dvb_frontend*,int *,int ) ;
 int FUNC_1 (int *,struct i2c_msg*,int) ;
 int FUNC_2 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_1)
{
 struct dtv_frontend_properties *VAR_2 = &VAR_1->dtv_property_cache;
 struct dvb_pll_priv *VAR_3 = VAR_1->tuner_priv;
 u8 VAR_4[4];
 struct i2c_msg VAR_5 =
  { .addr = VAR_3->pll_i2c_address, .flags = 0,
    .buf = VAR_4, .len = sizeof(VAR_4) };
 int VAR_6;
 u32 VAR_7 = 0;

 if (VAR_3->i2c == ((void*)0))
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_1, VAR_4, VAR_2->frequency);
 if (VAR_6 < 0)
  return VAR_6;
 else
  VAR_7 = VAR_6;

 if (VAR_1->ops.i2c_gate_ctrl)
  VAR_1->ops.i2c_gate_ctrl(VAR_1, 1);
 if ((VAR_6 = FUNC_1(VAR_3->i2c, &VAR_5, 1)) != 1) {
  return VAR_6;
 }

 VAR_3->frequency = VAR_7;
 VAR_3->bandwidth = VAR_2->bandwidth_hz;

 return 0;
}
