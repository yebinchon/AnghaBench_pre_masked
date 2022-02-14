
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend_tune_settings {int min_delay_ms; int max_drift; int step_size; } ;
struct dtv_frontend_properties {scalar_t__ delivery_system; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct dvb_frontend *VAR_2,
          struct dvb_frontend_tune_settings *VAR_3)
{
 struct dtv_frontend_properties *VAR_4 = &VAR_2->dtv_property_cache;

 VAR_3->min_delay_ms = 850;

 if (VAR_4->delivery_system == VAR_0) {
  VAR_3->max_drift = 30000 * 2 + 1;
  VAR_3->step_size = 30000;
 } else if (VAR_4->delivery_system == VAR_1) {
  VAR_3->max_drift = 142857 * 2 + 1;
  VAR_3->step_size = 142857 * 2;
 }

 return 0;
}
