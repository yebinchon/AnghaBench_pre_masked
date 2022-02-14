
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct meson_sar_adc_priv {int calibbias; int calibscale; int temperature_sensor_adc_val; TYPE_2__* param; int vref; } ;
struct TYPE_3__ {int parent; } ;
struct iio_dev {TYPE_1__ dev; } ;
struct iio_chan_spec {int type; } ;
struct TYPE_4__ {int resolution; int temperature_multiplier; int temperature_divider; } ;


 int FUNC_0 (int,int) ;
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
 int FUNC_1 (int ,char*,int) ;
 struct meson_sar_adc_priv* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*,struct iio_chan_spec const*,int ,int ,int*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_13,
        const struct iio_chan_spec *VAR_14,
        int *VAR_15, int *VAR_16, long VAR_17)
{
 struct meson_sar_adc_priv *VAR_18 = FUNC_2(VAR_13);
 int VAR_19;

 switch (VAR_17) {
 case 129:
  return FUNC_3(VAR_13, VAR_14, VAR_11,
      VAR_12, VAR_15);
  break;

 case 133:
  return FUNC_3(VAR_13, VAR_14,
      VAR_8, VAR_0,
      VAR_15);
  break;

 case 128:
  if (VAR_14->type == VAR_7) {
   VAR_19 = FUNC_4(VAR_18->vref);
   if (VAR_19 < 0) {
    FUNC_1(VAR_13->dev.parent,
     "failed to get vref voltage: %d\n",
     VAR_19);
    return VAR_19;
   }

   *VAR_15 = VAR_19 / 1000;
   *VAR_16 = VAR_18->param->resolution;
   return VAR_4;
  } else if (VAR_14->type == VAR_2) {

   *VAR_15 = VAR_18->param->temperature_multiplier;
   *VAR_16 = VAR_18->param->temperature_divider;


   *VAR_15 *= 1000;

   return VAR_3;
  } else {
   return -VAR_1;
  }

 case 132:
  *VAR_15 = VAR_18->calibbias;
  return VAR_5;

 case 131:
  *VAR_15 = VAR_18->calibscale / VAR_10;
  *VAR_16 = VAR_18->calibscale % VAR_10;
  return VAR_6;

 case 130:
  *VAR_15 = FUNC_0(VAR_9 *
      VAR_18->param->temperature_divider,
      VAR_18->param->temperature_multiplier);
  *VAR_15 -= VAR_18->temperature_sensor_adc_val;
  return VAR_5;

 default:
  return -VAR_1;
 }
}
