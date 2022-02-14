
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_frontend {struct as102_state* demodulator_priv; } ;
struct dtv_frontend_properties {int transmission_mode; int guard_interval; void* code_rate_LP; void* code_rate_HP; int hierarchy; int modulation; } ;
struct as10x_tps {int modulation; int hierarchy; int code_rate_HP; int code_rate_LP; int guard_interval; int transmission_mode; int member_0; } ;
struct as102_state {int priv; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* get_tps ) (int ,struct as10x_tps*) ;} ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;




 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;




 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;


 int FUNC_0 (int ,struct as10x_tps*) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_18,
     struct dtv_frontend_properties *VAR_19)
{
 struct as102_state *VAR_20 = VAR_18->demodulator_priv;
 int VAR_21 = 0;
 struct as10x_tps VAR_22 = { 0 };


 VAR_21 = VAR_20->ops->get_tps(VAR_20->priv, &VAR_22);
 if (VAR_21 < 0)
  return VAR_21;


 switch (VAR_22.modulation) {
 case 138:
  VAR_19->modulation = VAR_15;
  break;
 case 140:
  VAR_19->modulation = VAR_13;
  break;
 case 139:
  VAR_19->modulation = VAR_14;
  break;
 }


 switch (VAR_22.hierarchy) {
 case 130:
  VAR_19->hierarchy = VAR_12;
  break;
 case 133:
  VAR_19->hierarchy = VAR_9;
  break;
 case 132:
  VAR_19->hierarchy = VAR_10;
  break;
 case 131:
  VAR_19->hierarchy = VAR_11;
  break;
 }


 switch (VAR_22.code_rate_HP) {
 case 145:
  VAR_19->code_rate_HP = VAR_0;
  break;
 case 144:
  VAR_19->code_rate_HP = VAR_1;
  break;
 case 143:
  VAR_19->code_rate_HP = VAR_2;
  break;
 case 142:
  VAR_19->code_rate_HP = VAR_3;
  break;
 case 141:
  VAR_19->code_rate_HP = VAR_4;
  break;
 }


 switch (VAR_22.code_rate_LP) {
 case 145:
  VAR_19->code_rate_LP = VAR_0;
  break;
 case 144:
  VAR_19->code_rate_LP = VAR_1;
  break;
 case 143:
  VAR_19->code_rate_LP = VAR_2;
  break;
 case 142:
  VAR_19->code_rate_LP = VAR_3;
  break;
 case 141:
  VAR_19->code_rate_LP = VAR_4;
  break;
 }


 switch (VAR_22.guard_interval) {
 case 136:
  VAR_19->guard_interval = VAR_6;
  break;
 case 137:
  VAR_19->guard_interval = VAR_5;
  break;
 case 134:
  VAR_19->guard_interval = VAR_8;
  break;
 case 135:
  VAR_19->guard_interval = VAR_7;
  break;
 }


 switch (VAR_22.transmission_mode) {
 case 129:
  VAR_19->transmission_mode = VAR_16;
  break;
 case 128:
  VAR_19->transmission_mode = VAR_17;
  break;
 }

 return 0;
}
