
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_frontend {struct drxd_state* demodulator_priv; } ;
struct TYPE_2__ {int disable_i2c_gate_ctrl; } ;
struct drxd_state {TYPE_1__ config; } ;


 int FUNC_0 (struct drxd_state*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0, int VAR_1)
{
 struct drxd_state *VAR_2 = VAR_0->demodulator_priv;

 if (VAR_2->config.disable_i2c_gate_ctrl == 1)
  return 0;

 return FUNC_0(VAR_2, VAR_1);
}
