
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct zl10036_state {int dummy; } ;
struct TYPE_3__ {int frequency_min_hz; int frequency_max_hz; } ;
struct TYPE_4__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;TYPE_1__ info; } ;
struct dtv_frontend_properties {int frequency; int symbol_rate; } ;
struct dvb_frontend {TYPE_2__ ops; struct zl10036_state* tuner_priv; struct dtv_frontend_properties dtv_property_cache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct dvb_frontend*,int) ;
 int FUNC_2 (struct dvb_frontend*,int) ;
 int FUNC_3 (struct zl10036_state*) ;
 int FUNC_4 (struct zl10036_state*,int) ;
 int FUNC_5 (struct zl10036_state*,int) ;
 int FUNC_6 (struct zl10036_state*,int) ;

__attribute__((used)) static int FUNC_7(struct dvb_frontend *VAR_3)
{
 struct dtv_frontend_properties *VAR_4 = &VAR_3->dtv_property_cache;
 struct zl10036_state *VAR_5 = VAR_3->tuner_priv;
 int VAR_6 = 0;
 u32 VAR_7 = VAR_4->frequency;
 u32 VAR_8;
 int VAR_9;
 u8 VAR_10;



 if ((VAR_7 < VAR_3->ops.info.frequency_min_hz / VAR_2)
 || (VAR_7 > VAR_3->ops.info.frequency_max_hz / VAR_2))
  return -VAR_0;






 VAR_8 = (27 * VAR_4->symbol_rate) / 32;


 VAR_8 /= 1000;


 VAR_8 += 3000;


 if (VAR_7 < 950000)
  return -VAR_0;
 else if (VAR_7 < 1250000)
  VAR_10 = 0;
 else if (VAR_7 < 1750000)
  VAR_10 = 1;
 else if (VAR_7 < 2175000)
  VAR_10 = 2;
 else
  return -VAR_0;

 if (VAR_3->ops.i2c_gate_ctrl)
  VAR_3->ops.i2c_gate_ctrl(VAR_3, 1);

 VAR_6 = FUNC_6(VAR_5, VAR_10);
 if (VAR_6 < 0)
  goto error;

 VAR_6 = FUNC_5(VAR_5, VAR_4->frequency);
 if (VAR_6 < 0)
  goto error;

 VAR_6 = FUNC_4(VAR_5, VAR_8);
 if (VAR_6 < 0)
  goto error;


 for (VAR_9 = 0; VAR_9 < 20; VAR_9++) {
  VAR_6 = FUNC_3(VAR_5);
  if (VAR_6 < 0)
   goto error;


  if (VAR_6 & VAR_1)
   break;

  FUNC_0(10);
 }

error:
 if (VAR_3->ops.i2c_gate_ctrl)
  VAR_3->ops.i2c_gate_ctrl(VAR_3, 0);

 return VAR_6;
}
