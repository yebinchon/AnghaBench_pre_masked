
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct meson_sar_adc_priv {int temperature_sensor_calibrated; } ;
struct TYPE_2__ {int parent; } ;
struct iio_dev {TYPE_1__ dev; } ;
struct iio_chan_spec {scalar_t__ type; int address; } ;
typedef enum meson_sar_adc_num_samples { ____Placeholder_meson_sar_adc_num_samples } meson_sar_adc_num_samples ;
typedef enum meson_sar_adc_avg_mode { ____Placeholder_meson_sar_adc_avg_mode } meson_sar_adc_avg_mode ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,int) ;
 struct meson_sar_adc_priv* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*,struct iio_chan_spec const*) ;
 int FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (struct iio_dev*,struct iio_chan_spec const*,int*) ;
 int FUNC_6 (struct iio_dev*,struct iio_chan_spec const*,int,int) ;
 int FUNC_7 (struct iio_dev*) ;
 int FUNC_8 (struct iio_dev*) ;
 int FUNC_9 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_10(struct iio_dev *VAR_3,
        const struct iio_chan_spec *VAR_4,
        enum meson_sar_adc_avg_mode VAR_5,
        enum meson_sar_adc_num_samples VAR_6,
        int *VAR_7)
{
 struct meson_sar_adc_priv *VAR_8 = FUNC_1(VAR_3);
 int VAR_9;

 if (VAR_4->type == VAR_1 && !VAR_8->temperature_sensor_calibrated)
  return -VAR_0;

 VAR_9 = FUNC_4(VAR_3);
 if (VAR_9)
  return VAR_9;


 FUNC_2(VAR_3);

 FUNC_6(VAR_3, VAR_4, VAR_5, VAR_6);

 FUNC_3(VAR_3, VAR_4);

 FUNC_7(VAR_3);
 VAR_9 = FUNC_5(VAR_3, VAR_4, VAR_7);
 FUNC_8(VAR_3);

 FUNC_9(VAR_3);

 if (VAR_9) {
  FUNC_0(VAR_3->dev.parent,
    "failed to read sample for channel %lu: %d\n",
    VAR_4->address, VAR_9);
  return VAR_9;
 }

 return VAR_2;
}
