
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct dvb_frontend_tune_settings {int min_delay_ms; int max_drift; int step_size; } ;
struct dvb_frontend_private {int min_delay; int max_drift; int step_size; scalar_t__ status; int algo_status; int state; int parameters_out; } ;
struct TYPE_2__ {scalar_t__ (* get_tune_settings ) (struct dvb_frontend*,struct dvb_frontend_tune_settings*) ;} ;
struct dtv_frontend_properties {int delivery_system; int bandwidth_hz; int symbol_rate; scalar_t__ hierarchy; scalar_t__ code_rate_LP; int inversion; int rolloff; } ;
struct dvb_frontend {TYPE_1__ ops; struct dtv_frontend_properties dtv_property_cache; struct dvb_frontend_private* frontend_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct dvb_frontend*,struct dtv_frontend_properties*,int *) ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (struct dvb_frontend*,int ) ;
 scalar_t__ FUNC_2 (struct dvb_frontend*) ;
 int FUNC_3 (struct dvb_frontend*) ;
 int FUNC_4 (struct dvb_frontend*) ;
 int FUNC_5 (struct dvb_frontend*) ;
 int VAR_9 ;
 int FUNC_6 (struct dvb_frontend_tune_settings*,int ,int) ;
 int FUNC_7 (int,int,int) ;
 scalar_t__ FUNC_8 (struct dvb_frontend*,struct dvb_frontend_tune_settings*) ;

__attribute__((used)) static int FUNC_9(struct dvb_frontend *VAR_10)
{
 struct dvb_frontend_private *VAR_11 = VAR_10->frontend_priv;
 struct dtv_frontend_properties *VAR_12 = &VAR_10->dtv_property_cache;
 struct dvb_frontend_tune_settings VAR_13;
 u32 VAR_14 = 0;

 if (FUNC_2(VAR_10) < 0)
  return -VAR_1;






 FUNC_0(VAR_10, VAR_12, &VAR_11->parameters_out);
 switch (VAR_12->delivery_system) {
 case 139:
 case 136:
  VAR_12->bandwidth_hz = 6000000;
  break;
 case 137:
  VAR_14 = 115;
  break;
 case 135:
  VAR_14 = 113;
  break;
 case 134:
 case 128:
 case 130:
  VAR_14 = 135;
  break;
 case 133:
  switch (VAR_12->rolloff) {
  case 142:
   VAR_14 = 120;
   break;
  case 141:
   VAR_14 = 125;
   break;
  default:
  case 140:
   VAR_14 = 135;
  }
  break;
 default:
  break;
 }
 if (VAR_14)
  VAR_12->bandwidth_hz = FUNC_7(VAR_12->symbol_rate, VAR_14, 100);


 if (VAR_8)
  VAR_12->inversion = VAR_7;





 if (VAR_12->hierarchy == VAR_5 && VAR_12->code_rate_LP == VAR_3)
  VAR_12->code_rate_LP = VAR_2;


 FUNC_6(&VAR_13, 0, sizeof(struct dvb_frontend_tune_settings));
 if (VAR_10->ops.get_tune_settings && (VAR_10->ops.get_tune_settings(VAR_10, &VAR_13) == 0)) {
  VAR_11->min_delay = (VAR_13.min_delay_ms * VAR_6) / 1000;
  VAR_11->max_drift = VAR_13.max_drift;
  VAR_11->step_size = VAR_13.step_size;
 } else {

  switch (VAR_12->delivery_system) {
  case 134:
  case 133:
  case 130:
  case 128:
  case 137:
  case 135:
   VAR_11->min_delay = VAR_6 / 20;
   VAR_11->step_size = VAR_12->symbol_rate / 16000;
   VAR_11->max_drift = VAR_12->symbol_rate / 2000;
   break;
  case 132:
  case 131:
  case 129:
  case 138:
   VAR_11->min_delay = VAR_6 / 20;
   VAR_11->step_size = FUNC_4(VAR_10) * 2;
   VAR_11->max_drift = (FUNC_4(VAR_10) * 2) + 1;
   break;
  default:




   VAR_11->min_delay = VAR_6 / 20;
   VAR_11->step_size = 0;
   VAR_11->max_drift = 0;
   break;
  }
 }
 if (VAR_9 > 0)
  VAR_11->min_delay = (VAR_9 * VAR_6) / 1000;

 VAR_11->state = VAR_4;


 VAR_11->algo_status |= VAR_0;

 FUNC_3(VAR_10);
 FUNC_1(VAR_10, 0);
 FUNC_5(VAR_10);
 VAR_11->status = 0;

 return 0;
}
