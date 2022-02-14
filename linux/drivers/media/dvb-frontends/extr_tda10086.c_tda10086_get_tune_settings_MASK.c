
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend_tune_settings {int min_delay_ms; int step_size; int max_drift; } ;
struct dtv_frontend_properties {int symbol_rate; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; } ;



__attribute__((used)) static int FUNC_0(struct dvb_frontend* VAR_0, struct dvb_frontend_tune_settings* VAR_1)
{
 struct dtv_frontend_properties *VAR_2 = &VAR_0->dtv_property_cache;

 if (VAR_2->symbol_rate > 20000000) {
  VAR_1->min_delay_ms = 50;
  VAR_1->step_size = 2000;
  VAR_1->max_drift = 8000;
 } else if (VAR_2->symbol_rate > 12000000) {
  VAR_1->min_delay_ms = 100;
  VAR_1->step_size = 1500;
  VAR_1->max_drift = 9000;
 } else if (VAR_2->symbol_rate > 8000000) {
  VAR_1->min_delay_ms = 100;
  VAR_1->step_size = 1000;
  VAR_1->max_drift = 8000;
 } else if (VAR_2->symbol_rate > 4000000) {
  VAR_1->min_delay_ms = 100;
  VAR_1->step_size = 500;
  VAR_1->max_drift = 7000;
 } else if (VAR_2->symbol_rate > 2000000) {
  VAR_1->min_delay_ms = 200;
  VAR_1->step_size = VAR_2->symbol_rate / 8000;
  VAR_1->max_drift = 14 * VAR_1->step_size;
 } else {
  VAR_1->min_delay_ms = 200;
  VAR_1->step_size = VAR_2->symbol_rate / 8000;
  VAR_1->max_drift = 18 * VAR_1->step_size;
 }

 return 0;
}
