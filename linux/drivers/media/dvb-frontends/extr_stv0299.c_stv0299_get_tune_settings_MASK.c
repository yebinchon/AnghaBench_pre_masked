
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stv0299_state {TYPE_1__* config; } ;
struct dvb_frontend_tune_settings {int step_size; int max_drift; int min_delay_ms; } ;
struct dtv_frontend_properties {int symbol_rate; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct stv0299_state* demodulator_priv; } ;
struct TYPE_2__ {int min_delay_ms; } ;



__attribute__((used)) static int FUNC_0(struct dvb_frontend* VAR_0, struct dvb_frontend_tune_settings* VAR_1)
{
 struct stv0299_state* VAR_2 = VAR_0->demodulator_priv;
 struct dtv_frontend_properties *VAR_3 = &VAR_0->dtv_property_cache;

 VAR_1->min_delay_ms = VAR_2->config->min_delay_ms;
 if (VAR_3->symbol_rate < 10000000) {
  VAR_1->step_size = VAR_3->symbol_rate / 32000;
  VAR_1->max_drift = 5000;
 } else {
  VAR_1->step_size = VAR_3->symbol_rate / 16000;
  VAR_1->max_drift = VAR_3->symbol_rate / 2000;
 }
 return 0;
}
