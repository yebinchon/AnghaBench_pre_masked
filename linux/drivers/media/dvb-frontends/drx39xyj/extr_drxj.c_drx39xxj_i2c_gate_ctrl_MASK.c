
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct drx39xxj_state* demodulator_priv; } ;
struct drx_demod_instance {int dummy; } ;
struct drx39xxj_state {int i2c_gate_open; struct drx_demod_instance* demod; } ;


 int FUNC_0 (struct drx_demod_instance*,int*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_0, int VAR_1)
{
 struct drx39xxj_state *VAR_2 = VAR_0->demodulator_priv;
 struct drx_demod_instance *VAR_3 = VAR_2->demod;
 bool VAR_4;
 int VAR_5;






 if (VAR_1)
  VAR_4 = 1;
 else
  VAR_4 = 0;

 if (VAR_2->i2c_gate_open == VAR_1) {

  return 0;
 }

 VAR_5 = FUNC_0(VAR_3, &VAR_4);
 if (VAR_5 != 0) {
  FUNC_3("drx39xxj: could not open i2c gate [%d]\n",
         VAR_5);
  FUNC_1();
 } else {
  VAR_2->i2c_gate_open = VAR_1;
 }
 return 0;
}
