
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct tua6100_priv {int frequency; int i2c; int i2c_address; } ;
struct i2c_msg {int* buf; int len; int flags; int addr; } ;
struct TYPE_2__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;} ;
struct dtv_frontend_properties {int frequency; } ;
struct dvb_frontend {TYPE_1__ ops; struct tua6100_priv* tuner_priv; struct dtv_frontend_properties dtv_property_cache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;
 int FUNC_1 (struct dvb_frontend*,int) ;
 int FUNC_2 (struct dvb_frontend*,int) ;
 int FUNC_3 (struct dvb_frontend*,int) ;
 int FUNC_4 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_4)
{
 struct dtv_frontend_properties *VAR_5 = &VAR_4->dtv_property_cache;
 struct tua6100_priv *VAR_6 = VAR_4->tuner_priv;
 u32 VAR_7;
 u32 VAR_8;
 u8 VAR_9[] = { 0x00, 0x00 };
 u8 VAR_10[] = { 0x01, 0x00, 0x00, 0x00 };
 u8 VAR_11[] = { 0x02, 0x00, 0x00 };
 struct i2c_msg VAR_12 = { .addr = VAR_6->i2c_address, .flags = 0, .buf = VAR_9, .len = 2 };
 struct i2c_msg VAR_13 = { .addr = VAR_6->i2c_address, .flags = 0, .buf = VAR_10, .len = 4 };
 struct i2c_msg VAR_14 = { .addr = VAR_6->i2c_address, .flags = 0, .buf = VAR_11, .len = 3 };






 if (VAR_5->frequency < 2000000)
  VAR_9[1] = 0x03;
 else
  VAR_9[1] = 0x07;


 if (VAR_5->frequency < 1630000)
  VAR_10[1] = 0x2c;
 else
  VAR_10[1] = 0x0c;

 if (32 == 64)
  VAR_10[1] |= 0x40;
 if (VAR_5->frequency >= 1525000)
  VAR_10[1] |= 0x80;


 VAR_11[1] = (4 >> 8) & 0x03;
 VAR_11[2] = 4;
 if (VAR_5->frequency < 1455000)
  VAR_11[1] |= 0x1c;
 else if (VAR_5->frequency < 1630000)
  VAR_11[1] |= 0x0c;
 else
  VAR_11[1] |= 0x1c;





 VAR_8 = (VAR_5->frequency * 4) / (4000000 / 1000);
 VAR_7 = VAR_8 / 32;
 VAR_10[1] |= (VAR_7 >> 9) & 0x03;
 VAR_10[2] = VAR_7 >> 1;
 VAR_10[3] = (VAR_7 << 7);
 VAR_6->frequency = ((VAR_7 * 32) * (4000000 / 1000)) / 4;


 VAR_10[3] |= (VAR_8 - (VAR_7*32)) & 0x7f;





 if (VAR_4->ops.i2c_gate_ctrl)
  VAR_4->ops.i2c_gate_ctrl(VAR_4, 1);
 if (FUNC_0(VAR_6->i2c, &VAR_12, 1) != 1)
  return -VAR_0;

 if (VAR_4->ops.i2c_gate_ctrl)
  VAR_4->ops.i2c_gate_ctrl(VAR_4, 1);
 if (FUNC_0(VAR_6->i2c, &VAR_14, 1) != 1)
  return -VAR_0;

 if (VAR_4->ops.i2c_gate_ctrl)
  VAR_4->ops.i2c_gate_ctrl(VAR_4, 1);
 if (FUNC_0(VAR_6->i2c, &VAR_13, 1) != 1)
  return -VAR_0;

 if (VAR_4->ops.i2c_gate_ctrl)
  VAR_4->ops.i2c_gate_ctrl(VAR_4, 0);

 return 0;
}
