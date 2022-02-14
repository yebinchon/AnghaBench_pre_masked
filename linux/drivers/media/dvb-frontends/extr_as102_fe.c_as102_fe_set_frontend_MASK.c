
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dtv_frontend_properties {int frequency; int bandwidth_hz; int guard_interval; int modulation; int transmission_mode; int hierarchy; scalar_t__ code_rate_LP; scalar_t__ code_rate_HP; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct as102_state* demodulator_priv; } ;
struct as10x_tune_args {int freq; scalar_t__ hier_select; void* code_rate; int hierarchy; int guard_interval; void* bandwidth; int transmission_mode; int modulation; int interleaving_mode; int member_0; } ;
struct as102_state {int priv; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* set_tune ) (int ,struct as10x_tune_args*) ;} ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;





 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;





 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;





 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,int,char*,char*,...) ;
 int FUNC_2 (int ,struct as10x_tune_args*) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_24)
{
 struct as102_state *VAR_25 = VAR_24->demodulator_priv;
 struct dtv_frontend_properties *VAR_26 = &VAR_24->dtv_property_cache;
 struct as10x_tune_args VAR_27 = { 0 };


 VAR_27.freq = VAR_26->frequency / 1000;


 VAR_27.interleaving_mode = VAR_20;

 switch (VAR_26->bandwidth_hz) {
 case 8000000:
  VAR_27.bandwidth = VAR_2;
  break;
 case 7000000:
  VAR_27.bandwidth = VAR_1;
  break;
 case 6000000:
  VAR_27.bandwidth = VAR_0;
  break;
 default:
  VAR_27.bandwidth = VAR_2;
 }

 switch (VAR_26->guard_interval) {
 case 141:
  VAR_27.guard_interval = VAR_9;
  break;
 case 142:
  VAR_27.guard_interval = VAR_8;
  break;
 case 139:
  VAR_27.guard_interval = VAR_11;
  break;
 case 140:
  VAR_27.guard_interval = VAR_10;
  break;
 case 138:
 default:
  VAR_27.guard_interval = VAR_12;
  break;
 }

 switch (VAR_26->modulation) {
 case 130:
  VAR_27.modulation = VAR_5;
  break;
 case 132:
  VAR_27.modulation = VAR_3;
  break;
 case 131:
  VAR_27.modulation = VAR_4;
  break;
 default:
  VAR_27.modulation = VAR_6;
  break;
 }

 switch (VAR_26->transmission_mode) {
 case 129:
  VAR_27.transmission_mode = VAR_21;
  break;
 case 128:
  VAR_27.transmission_mode = VAR_22;
  break;
 default:
  VAR_27.transmission_mode = VAR_23;
 }

 switch (VAR_26->hierarchy) {
 case 133:
  VAR_27.hierarchy = VAR_18;
  break;
 case 137:
  VAR_27.hierarchy = VAR_13;
  break;
 case 136:
  VAR_27.hierarchy = VAR_14;
  break;
 case 135:
  VAR_27.hierarchy = VAR_15;
  break;
 case 134:
  VAR_27.hierarchy = VAR_19;
  break;
 }

 FUNC_1("as102: tuner parameters: freq: %d  bw: 0x%02x  gi: 0x%02x\n",
   VAR_26->frequency,
   VAR_27.bandwidth,
   VAR_27.guard_interval);





 if ((VAR_27.hierarchy != VAR_18) &&
         ((VAR_26->code_rate_LP == VAR_7) ||
   (VAR_26->code_rate_HP == VAR_7))) {

  if (VAR_26->code_rate_LP == VAR_7) {
   VAR_27.hier_select = VAR_16;
   VAR_27.code_rate =
      FUNC_0(VAR_26->code_rate_HP);
  }

  if (VAR_26->code_rate_HP == VAR_7) {
   VAR_27.hier_select = VAR_17;
   VAR_27.code_rate =
      FUNC_0(VAR_26->code_rate_LP);
  }

  FUNC_1("as102: \thierarchy: 0x%02x  selected: %s  code_rate_%s: 0x%02x\n",
   VAR_27.hierarchy,
   VAR_27.hier_select == VAR_16 ?
   "HP" : "LP",
   VAR_27.hier_select == VAR_16 ?
   "HP" : "LP",
   VAR_27.code_rate);
 } else {
  VAR_27.code_rate =
   FUNC_0(VAR_26->code_rate_HP);
 }


 return VAR_25->ops->set_tune(VAR_25->priv, &VAR_27);
}
