
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct dvb_frontend {struct dib0090_state* tuner_priv; } ;
struct TYPE_9__ {scalar_t__ p1g; } ;
struct dib0090_state {int tune_state; scalar_t__ current_band; int rf_gain_limit; int* rf_ramp; int current_gain; int* bb_ramp; scalar_t__ wbd_target; int rf_lt_def; scalar_t__ agc_freeze; TYPE_3__* fe; scalar_t__ agc_step; TYPE_5__* config; TYPE_4__ identity; int current_rf; } ;
typedef int s32 ;
typedef scalar_t__ s16 ;
typedef enum frontend_tune_state { ____Placeholder_frontend_tune_state } frontend_tune_state ;
struct TYPE_10__ {int (* get_adc_power ) (struct dvb_frontend*) ;} ;
struct TYPE_7__ {scalar_t__ delivery_system; scalar_t__ modulation; TYPE_1__* layer; } ;
struct TYPE_8__ {TYPE_2__ dtv_property_cache; } ;
struct TYPE_6__ {scalar_t__ segment_count; scalar_t__ modulation; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (struct dib0090_state*,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_2 (struct dib0090_state*) ;
 int FUNC_3 (struct dib0090_state*,int ) ;
 int FUNC_4 (struct dib0090_state*,int ) ;
 int FUNC_5 (struct dib0090_state*,int ) ;
 scalar_t__ FUNC_6 (struct dib0090_state*,scalar_t__) ;
 int FUNC_7 (struct dib0090_state*,int,int) ;
 int FUNC_8 (char*,int,int,int,int,int,int,int,int) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_9 (struct dvb_frontend*) ;

int FUNC_10(struct dvb_frontend *VAR_23)
{
 struct dib0090_state *VAR_24 = VAR_23->tuner_priv;
 enum frontend_tune_state *VAR_25 = &VAR_24->tune_state;
 int VAR_26 = 10;

 u16 VAR_27 = 0;
 u8 VAR_28 = 1;
 s16 VAR_29 = 0, VAR_30 = 0;

 if (*VAR_25 == VAR_4) {
  VAR_24->agc_freeze = 0;
  FUNC_7(VAR_24, 0x04, 0x0);
  if ((VAR_24->current_band == VAR_1 || VAR_24->current_band == VAR_3) && VAR_24->identity.p1g) {
   FUNC_4(VAR_24, VAR_19);
   FUNC_3(VAR_24, VAR_17);
  } else {
   FUNC_4(VAR_24, VAR_20);
   FUNC_3(VAR_24, VAR_16);
  }

  FUNC_7(VAR_24, 0x32, 0);
  FUNC_7(VAR_24, 0x39, 0);

  FUNC_5(VAR_24, VAR_24->current_rf);

  VAR_24->rf_gain_limit = VAR_24->rf_ramp[0] << VAR_14;
  VAR_24->current_gain = ((VAR_24->rf_ramp[0] + VAR_24->bb_ramp[0]) / 2) << VAR_8;

  *VAR_25 = VAR_5;
 } else if (!VAR_24->agc_freeze) {
  s16 VAR_31 = 0, VAR_32, VAR_33;

  int VAR_34;
  VAR_27 = FUNC_2(VAR_24);

  if (*VAR_25 == VAR_5)
   VAR_33 = 5;
  else
   VAR_33 = 1;

  for (VAR_32 = 0; VAR_32 < VAR_33; VAR_32++) {
   VAR_27 = FUNC_2(VAR_24);
   VAR_31 += FUNC_6(VAR_24, VAR_27);
  }
  VAR_31 /= VAR_33;
  VAR_29 = VAR_24->wbd_target - VAR_31;

  if (*VAR_25 == VAR_5) {
   if (VAR_29 < 0 && VAR_24->rf_gain_limit > 0 && !VAR_24->identity.p1g) {
   } else {
    VAR_24->agc_step = 0;
    *VAR_25 = VAR_6;
   }
  } else {

   VAR_34 = VAR_24->config->get_adc_power(VAR_23);
   VAR_34 = (VAR_34 * ((s32) 355774) + (((s32) 1) << 20)) >> 21;

   VAR_30 = (s16) (((s32) VAR_0) - VAR_34);
   if (*VAR_25 == VAR_6) {
    if (FUNC_0(VAR_30) < 50 || VAR_24->agc_step++ > 5) {







     {
      FUNC_7(VAR_24, 0x02, (1 << 15) | (3 << 11) | (6 << 6) | (32));
      FUNC_7(VAR_24, 0x04, 0x01);
     }

     *VAR_25 = VAR_7;
    }
   } else {

    VAR_26 = 100;
    VAR_28 = 0;
   }
  }






 }


 if (!VAR_24->agc_freeze)
  FUNC_1(VAR_24, VAR_30, VAR_29, VAR_28);
 return VAR_26;
}
