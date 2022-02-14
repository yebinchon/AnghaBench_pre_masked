
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct dvb_frontend {struct dib0090_state* tuner_priv; } ;
struct TYPE_4__ {int version; scalar_t__ in_soc; } ;
struct dib0090_state {scalar_t__ current_band; scalar_t__* rf_ramp; TYPE_2__ identity; TYPE_1__* config; } ;
struct TYPE_3__ {scalar_t__ is_dib7090e; scalar_t__ use_pwm_agc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__* VAR_8 ;
 scalar_t__* VAR_9 ;
 int FUNC_0 (struct dib0090_state*,scalar_t__ const*) ;
 int FUNC_1 (struct dib0090_state*,scalar_t__ const*) ;
 int FUNC_2 (struct dib0090_state*,int,int) ;
 int FUNC_3 (char*,...) ;
 scalar_t__* VAR_10 ;
 scalar_t__* VAR_11 ;
 scalar_t__* VAR_12 ;
 scalar_t__* VAR_13 ;
 scalar_t__* VAR_14 ;
 scalar_t__* VAR_15 ;
 scalar_t__* VAR_16 ;
 scalar_t__* VAR_17 ;

void FUNC_4(struct dvb_frontend *VAR_18)
{
 struct dib0090_state *VAR_19 = VAR_18->tuner_priv;
 const u16 *VAR_20 = VAR_8;
 const u16 *VAR_21 = ((void*)0);
 u8 VAR_22 = 1;


 if (VAR_19->config->use_pwm_agc) {
  if (VAR_19->current_band == VAR_0) {
   if (VAR_19->identity.in_soc) {
    VAR_20 = VAR_9;
    if (VAR_19->identity.version == VAR_6 || VAR_19->identity.version == VAR_7)
     VAR_21 = VAR_13;
    else if (VAR_19->identity.version == VAR_4 || VAR_19->identity.version == VAR_5) {
     if (VAR_19->config->is_dib7090e) {
      if (VAR_19->rf_ramp == ((void*)0))
       VAR_21 = VAR_11;
      else
       VAR_21 = VAR_19->rf_ramp;
     } else
      VAR_21 = VAR_12;
    }
   } else
    VAR_21 = VAR_10;
  } else

   if (VAR_19->current_band == VAR_2) {
    if (VAR_19->identity.in_soc) {
     VAR_20 = VAR_9;

    } else
     VAR_21 = VAR_17;
   } else if (VAR_19->current_band == VAR_1) {
    if (VAR_19->identity.in_soc) {
     VAR_20 = VAR_9;
     if (VAR_19->identity.version == VAR_6 || VAR_19->identity.version == VAR_7)
      VAR_21 = VAR_16;
     else if (VAR_19->identity.version == VAR_4 || VAR_19->identity.version == VAR_5)
      VAR_21 = VAR_15;
    } else
     VAR_21 = VAR_14;
   }
  if (VAR_21)
   FUNC_1(VAR_19, VAR_21);
  FUNC_0(VAR_19, VAR_20);


  if (VAR_19->rf_ramp)
   FUNC_3("ramp RF gain = %d BAND = %s version = %d\n",
    VAR_19->rf_ramp[0],
    (VAR_19->current_band == VAR_0) ? "CBAND" : "NOT CBAND",
    VAR_19->identity.version & 0x1f);

  if (VAR_21 && ((VAR_19->rf_ramp && VAR_19->rf_ramp[0] == 0) ||
      (VAR_19->current_band == VAR_0 &&
      (VAR_19->identity.version & 0x1f) <= VAR_3))) {
   FUNC_3("DE-Engage mux for direct gain reg control\n");
   VAR_22 = 0;
  } else
   FUNC_3("Engage mux for PWM control\n");

  FUNC_2(VAR_19, 0x32, (VAR_22 << 12) | (VAR_22 << 11));


  if (VAR_19->identity.version == VAR_4 || VAR_19->identity.version == VAR_5)
   FUNC_2(VAR_19, 0x04, 3);
  else
   FUNC_2(VAR_19, 0x04, 1);
  FUNC_2(VAR_19, 0x39, (1 << 10));
 }
}
