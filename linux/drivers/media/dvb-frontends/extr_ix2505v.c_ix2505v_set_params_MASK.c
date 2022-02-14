
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ix2505v_state {int frequency; TYPE_3__* config; } ;
struct TYPE_4__ {int frequency_min_hz; int frequency_max_hz; } ;
struct TYPE_5__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;TYPE_1__ info; } ;
struct dtv_frontend_properties {int frequency; int symbol_rate; } ;
struct dvb_frontend {TYPE_2__ ops; struct ix2505v_state* tuner_priv; struct dtv_frontend_properties dtv_property_cache; } ;
typedef int data ;
struct TYPE_6__ {int tuner_gain; int tuner_chargepump; int min_delay_ms; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct ix2505v_state*,int*,int) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct dvb_frontend*,int) ;
 int FUNC_4 (struct dvb_frontend*,int) ;
 int FUNC_5 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_6(struct dvb_frontend *VAR_2)
{
 struct dtv_frontend_properties *VAR_3 = &VAR_2->dtv_property_cache;
 struct ix2505v_state *VAR_4 = VAR_2->tuner_priv;
 u32 VAR_5 = VAR_3->frequency;
 u32 VAR_6 = (VAR_3->symbol_rate * 27) / 32000;
 u32 VAR_7, VAR_8 , VAR_9, VAR_10;
 int VAR_11 = 0, VAR_12;
 u8 VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 u8 VAR_19[4] = {0};

 if ((VAR_5 < VAR_2->ops.info.frequency_min_hz / VAR_1)
 || (VAR_5 > VAR_2->ops.info.frequency_max_hz / VAR_1))
  return -VAR_0;

 if (VAR_4->config->tuner_gain)
  VAR_13 = (VAR_4->config->tuner_gain < 4)
   ? VAR_4->config->tuner_gain : 0;
 else
  VAR_13 = 0x0;

 if (VAR_4->config->tuner_chargepump)
  VAR_14 = VAR_4->config->tuner_chargepump;
 else
  VAR_14 = 0x3;

 VAR_15 = 8;
 VAR_16 = 32;

 VAR_7 = (VAR_5 * VAR_15) / 40;
 VAR_10 = VAR_7 / VAR_16;
 VAR_8 = VAR_10/100;
 VAR_9 = ((VAR_10 - (VAR_8 * 100)) * VAR_16) / 100;

 VAR_19[0] = ((VAR_13 & 0x3) << 5) | (VAR_8 >> 3);
 VAR_19[1] = (VAR_8 << 5) | (VAR_9 & 0x1f);
 VAR_19[2] = 0x81 | ((VAR_14 & 0x3) << 5) ;

 FUNC_0("Frq=%d x=%d N=%d A=%d\n", VAR_5, VAR_10, VAR_8, VAR_9);

 if (VAR_5 <= 1065000)
  VAR_17 = (6 << 5) | 2;
 else if (VAR_5 <= 1170000)
  VAR_17 = (7 << 5) | 2;
 else if (VAR_5 <= 1300000)
  VAR_17 = (1 << 5);
 else if (VAR_5 <= 1445000)
  VAR_17 = (2 << 5);
 else if (VAR_5 <= 1607000)
  VAR_17 = (3 << 5);
 else if (VAR_5 <= 1778000)
  VAR_17 = (4 << 5);
 else if (VAR_5 <= 1942000)
  VAR_17 = (5 << 5);
 else
  VAR_17 = (6 << 5);

 VAR_19[3] = VAR_17;

 if (VAR_6 <= 10000)
  VAR_18 = 0xc;
 else if (VAR_6 <= 12000)
  VAR_18 = 0x2;
 else if (VAR_6 <= 14000)
  VAR_18 = 0xa;
 else if (VAR_6 <= 16000)
  VAR_18 = 0x6;
 else if (VAR_6 <= 18000)
  VAR_18 = 0xe;
 else if (VAR_6 <= 20000)
  VAR_18 = 0x1;
 else if (VAR_6 <= 22000)
  VAR_18 = 0x9;
 else if (VAR_6 <= 24000)
  VAR_18 = 0x5;
 else if (VAR_6 <= 26000)
  VAR_18 = 0xd;
 else if (VAR_6 <= 28000)
  VAR_18 = 0x3;
  else
  VAR_18 = 0xb;

 FUNC_0("Osc=%x b_w=%x lpf=%x\n", VAR_17, VAR_6, VAR_18);
 FUNC_0("Data 0=[%4phN]\n", VAR_19);

 if (VAR_2->ops.i2c_gate_ctrl)
  VAR_2->ops.i2c_gate_ctrl(VAR_2, 1);

 VAR_12 = sizeof(VAR_19);
 VAR_11 |= FUNC_1(VAR_4, VAR_19, VAR_12);

 VAR_19[2] |= 0x4;

 if (VAR_2->ops.i2c_gate_ctrl)
  VAR_2->ops.i2c_gate_ctrl(VAR_2, 1);

 VAR_12 = 1;
 VAR_11 |= FUNC_1(VAR_4, &VAR_19[2], VAR_12);

 FUNC_2(10);

 VAR_19[2] |= ((VAR_18 >> 2) & 0x3) << 3;
 VAR_19[3] |= (VAR_18 & 0x3) << 2;

 FUNC_0("Data 2=[%x%x]\n", VAR_19[2], VAR_19[3]);

 if (VAR_2->ops.i2c_gate_ctrl)
  VAR_2->ops.i2c_gate_ctrl(VAR_2, 1);

 VAR_12 = 2;
 VAR_11 |= FUNC_1(VAR_4, &VAR_19[2], VAR_12);

 if (VAR_4->config->min_delay_ms)
  FUNC_2(VAR_4->config->min_delay_ms);

 VAR_4->frequency = VAR_5;

 return VAR_11;
}
