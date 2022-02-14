
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend_tune_settings {int min_delay_ms; int step_size; int max_drift; } ;
struct dtv_frontend_properties {int delivery_system; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct drxk_state* demodulator_priv; } ;
struct drxk_state {scalar_t__ m_drxk_state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_0 (int,char*) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_5,
      struct dvb_frontend_tune_settings *VAR_6)
{
 struct drxk_state *VAR_7 = VAR_5->demodulator_priv;
 struct dtv_frontend_properties *VAR_8 = &VAR_5->dtv_property_cache;

 FUNC_0(1, "\n");

 if (VAR_7->m_drxk_state == VAR_0)
  return -VAR_4;
 if (VAR_7->m_drxk_state == VAR_1)
  return -VAR_2;

 switch (VAR_8->delivery_system) {
 case 130:
 case 129:
 case 128:
  VAR_6->min_delay_ms = 3000;
  VAR_6->max_drift = 0;
  VAR_6->step_size = 0;
  return 0;
 default:
  return -VAR_3;
 }
}
