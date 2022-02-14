
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zl10036_state {int dummy; } ;
struct TYPE_2__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;} ;
struct dvb_frontend {TYPE_1__ ops; struct zl10036_state* tuner_priv; } ;


 int FUNC_0 (struct dvb_frontend*,int) ;
 int FUNC_1 (struct dvb_frontend*,int) ;
 int FUNC_2 (struct zl10036_state*) ;
 int FUNC_3 (struct zl10036_state*) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_0)
{
 struct zl10036_state *VAR_1 = VAR_0->tuner_priv;
 int VAR_2 = 0;

 if (VAR_0->ops.i2c_gate_ctrl)
  VAR_0->ops.i2c_gate_ctrl(VAR_0, 1);

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2 < 0)
  return VAR_2;


 VAR_2 = FUNC_2(VAR_1);

 if (VAR_0->ops.i2c_gate_ctrl)
  VAR_0->ops.i2c_gate_ctrl(VAR_0, 0);

 return VAR_2;
}
