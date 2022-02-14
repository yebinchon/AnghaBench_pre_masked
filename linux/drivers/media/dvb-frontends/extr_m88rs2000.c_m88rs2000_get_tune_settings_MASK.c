
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend_tune_settings {int min_delay_ms; int step_size; int max_drift; } ;
struct dtv_frontend_properties {int symbol_rate; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; } ;



__attribute__((used)) static int FUNC_0(struct dvb_frontend *VAR_0,
 struct dvb_frontend_tune_settings *VAR_1)
{
 struct dtv_frontend_properties *VAR_2 = &VAR_0->dtv_property_cache;

 if (VAR_2->symbol_rate > 3000000)
  VAR_1->min_delay_ms = 2000;
 else
  VAR_1->min_delay_ms = 3000;

 VAR_1->step_size = VAR_2->symbol_rate / 16000;
 VAR_1->max_drift = VAR_2->symbol_rate / 2000;

 return 0;
}
