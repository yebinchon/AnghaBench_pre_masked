
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mxl {TYPE_1__* base; int tuner; int tuner_in_use; int demod; } ;
struct dtv_frontend_properties {int frequency; int symbol_rate; int delivery_system; int scrambling_sequence_index; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct mxl* demodulator_priv; } ;
struct MXL_HYDRA_DEMOD_PARAM_T {int frequency_in_hz; int symbol_rate_in_hz; int max_carrier_offset_in_mhz; int fec_code_rate; int spectrum_inversion; int demod_index; int tuner_index; int pilots; int modulation_scheme; void* roll_off; int standard; } ;
typedef int demod_chan_cfg ;
struct TYPE_2__ {int tune_lock; scalar_t__ next_tune; } ;


 int FUNC_0 (int ,int ,int,struct MXL_HYDRA_DEMOD_PARAM_T*,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;



 int FUNC_1 (struct mxl*,int ) ;
 scalar_t__ VAR_16 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct mxl*,int,int*) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 (int,int) ;

__attribute__((used)) static int FUNC_9(struct dvb_frontend *VAR_17)
{
 struct mxl *VAR_18 = VAR_17->demodulator_priv;
 struct dtv_frontend_properties *VAR_19 = &VAR_17->dtv_property_cache;
 struct MXL_HYDRA_DEMOD_PARAM_T VAR_20;
 u8 VAR_21 = sizeof(VAR_20);
 u8 VAR_22[VAR_10];
 u32 VAR_23 = 10;
 int VAR_24;

 if (VAR_19->frequency < 950000 || VAR_19->frequency > 2150000)
  return -VAR_0;
 if (VAR_19->symbol_rate < 1000000 || VAR_19->symbol_rate > 45000000)
  return -VAR_0;



 switch (VAR_19->delivery_system) {
 case 130:
  VAR_20.standard = VAR_4;
  VAR_20.roll_off = VAR_14;
  break;
 case 129:
  VAR_23 = VAR_19->symbol_rate / 1000000;
  if (VAR_23 > 10)
   VAR_23 = 10;
  VAR_20.standard = VAR_5;
  VAR_20.roll_off = VAR_13;
  VAR_20.modulation_scheme = VAR_9;
  VAR_20.pilots = VAR_12;
  break;
 case 128:
  VAR_20.standard = VAR_6;
  VAR_20.roll_off = VAR_14;
  VAR_20.modulation_scheme = VAR_8;
  VAR_20.pilots = VAR_11;
  FUNC_1(VAR_18, VAR_19->scrambling_sequence_index);
  break;
 default:
  return -VAR_0;
 }
 VAR_20.tuner_index = VAR_18->tuner;
 VAR_20.demod_index = VAR_18->demod;
 VAR_20.frequency_in_hz = VAR_19->frequency * 1000;
 VAR_20.symbol_rate_in_hz = VAR_19->symbol_rate;
 VAR_20.max_carrier_offset_in_mhz = VAR_23;
 VAR_20.spectrum_inversion = VAR_15;
 VAR_20.fec_code_rate = VAR_7;

 FUNC_3(&VAR_18->base->tune_lock);
 if (FUNC_6(VAR_16 + FUNC_2(200),
         VAR_18->base->next_tune))
  while (FUNC_7(VAR_16, VAR_18->base->next_tune))
   FUNC_8(10000, 11000);
 VAR_18->base->next_tune = VAR_16 + FUNC_2(100);
 VAR_18->tuner_in_use = VAR_18->tuner;
 FUNC_0(VAR_3, VAR_1,
   VAR_21, &VAR_20, VAR_22);
 VAR_24 = FUNC_5(VAR_18, VAR_21 + VAR_2,
       &VAR_22[0]);
 FUNC_4(&VAR_18->base->tune_lock);
 return VAR_24;
}
