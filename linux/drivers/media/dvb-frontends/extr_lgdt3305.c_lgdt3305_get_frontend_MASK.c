
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lgdt3305_state {int current_frequency; int current_modulation; } ;
struct dvb_frontend {struct lgdt3305_state* demodulator_priv; } ;
struct dtv_frontend_properties {int frequency; int modulation; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0,
     struct dtv_frontend_properties *VAR_1)
{
 struct lgdt3305_state *VAR_2 = VAR_0->demodulator_priv;

 FUNC_0("\n");

 VAR_1->modulation = VAR_2->current_modulation;
 VAR_1->frequency = VAR_2->current_frequency;
 return 0;
}
