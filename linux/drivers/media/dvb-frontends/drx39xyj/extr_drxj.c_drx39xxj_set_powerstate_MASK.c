
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct drx39xxj_state* demodulator_priv; } ;
struct drx_demod_instance {int dummy; } ;
struct drx39xxj_state {struct drx_demod_instance* demod; } ;
typedef enum drx_power_mode { ____Placeholder_drx_power_mode } drx_power_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drx_demod_instance*,int*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_2, int VAR_3)
{
 struct drx39xxj_state *VAR_4 = VAR_2->demodulator_priv;
 struct drx_demod_instance *VAR_5 = VAR_4->demod;
 int VAR_6;
 enum drx_power_mode VAR_7;

 if (VAR_3)
  VAR_7 = VAR_1;
 else
  VAR_7 = VAR_0;

 VAR_6 = FUNC_0(VAR_5, &VAR_7);
 if (VAR_6 != 0) {
  FUNC_1("Power state change failed\n");
  return 0;
 }

 return 0;
}
