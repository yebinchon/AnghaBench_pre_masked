
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m88rs2000_state {int symbol_rate; int tuner_frequency; int fec_inner; } ;
struct dvb_frontend {struct m88rs2000_state* demodulator_priv; } ;
struct dtv_frontend_properties {int symbol_rate; int frequency; int fec_inner; } ;



__attribute__((used)) static int FUNC_0(struct dvb_frontend *VAR_0,
      struct dtv_frontend_properties *VAR_1)
{
 struct m88rs2000_state *VAR_2 = VAR_0->demodulator_priv;

 VAR_1->fec_inner = VAR_2->fec_inner;
 VAR_1->frequency = VAR_2->tuner_frequency;
 VAR_1->symbol_rate = VAR_2->symbol_rate;
 return 0;
}
