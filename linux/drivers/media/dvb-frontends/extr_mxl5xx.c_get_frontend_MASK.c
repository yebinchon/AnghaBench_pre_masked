
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mxl {int i2cdev; TYPE_1__* base; int demod; } ;
struct dvb_frontend {struct mxl* demodulator_priv; } ;
struct dtv_frontend_properties {int symbol_rate; int frequency; int delivery_system; int rolloff; int modulation; int pilot; int fec_inner; } ;
typedef enum MXL_HYDRA_ROLLOFF_E { ____Placeholder_MXL_HYDRA_ROLLOFF_E } MXL_HYDRA_ROLLOFF_E ;
typedef enum MXL_HYDRA_PILOTS_E { ____Placeholder_MXL_HYDRA_PILOTS_E } MXL_HYDRA_PILOTS_E ;
typedef enum MXL_HYDRA_MODULATION_E { ____Placeholder_MXL_HYDRA_MODULATION_E } MXL_HYDRA_MODULATION_E ;
struct TYPE_2__ {int status_lock; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct mxl*,int ) ;
 int FUNC_1 (struct mxl*,int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_9 ;







 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;



 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,int,int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct mxl*,scalar_t__,int,int *) ;

__attribute__((used)) static int FUNC_8(struct dvb_frontend *VAR_17,
   struct dtv_frontend_properties *VAR_18)
{
 struct mxl *VAR_19 = VAR_17->demodulator_priv;
 u32 VAR_20[VAR_9];
 u32 VAR_21;

 FUNC_5(&VAR_19->base->status_lock);
 FUNC_0(VAR_19, VAR_19->demod);
 FUNC_7(VAR_19,
  (VAR_7 +
  FUNC_2(VAR_19->demod)),
  (VAR_9 * 4),
  (u8 *) &VAR_20[0]);

 FUNC_7(VAR_19,
  (VAR_8 +
  FUNC_2(VAR_19->demod)),
  (4),
  (u8 *) &VAR_21);
 FUNC_1(VAR_19, VAR_19->demod);
 FUNC_6(&VAR_19->base->status_lock);

 FUNC_4(VAR_19->i2cdev, "freq=%u delsys=%u srate=%u\n",
  VAR_21 * 1000, VAR_20[VAR_4],
  VAR_20[VAR_5]);
 VAR_18->symbol_rate = VAR_20[VAR_5];
 VAR_18->frequency = VAR_21;
 VAR_18->fec_inner = FUNC_3(VAR_20[VAR_1]);
 switch (VAR_18->delivery_system) {
 case 130:
  break;
 case 128:
  switch ((enum MXL_HYDRA_PILOTS_E)
   VAR_20[VAR_0]) {
  case 135:
   VAR_18->pilot = VAR_10;
   break;
  case 134:
   VAR_18->pilot = VAR_11;
   break;
  default:
   break;
  }

 case 129:
  switch ((enum MXL_HYDRA_MODULATION_E)
   VAR_20[VAR_2]) {
  case 136:
   VAR_18->modulation = VAR_13;
   break;
  case 137:
   VAR_18->modulation = VAR_12;
   break;
  default:
   break;
  }
  switch ((enum MXL_HYDRA_ROLLOFF_E)
   VAR_20[VAR_3]) {
  case 133:
   VAR_18->rolloff = VAR_14;
   break;
  case 131:
   VAR_18->rolloff = VAR_16;
   break;
  case 132:
   VAR_18->rolloff = VAR_15;
   break;
  default:
   break;
  }
  break;
 default:
  return -VAR_6;
 }
 return 0;
}
