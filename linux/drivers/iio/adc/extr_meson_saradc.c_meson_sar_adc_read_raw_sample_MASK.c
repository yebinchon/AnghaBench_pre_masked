
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct meson_sar_adc_priv {TYPE_1__* param; int regmap; int done; } ;
struct iio_dev {int dev; } ;
struct iio_chan_spec {int address; } ;
struct TYPE_2__ {scalar_t__ resolution; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (scalar_t__,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,char*,int,...) ;
 struct meson_sar_adc_priv* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*,int) ;
 int FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int*) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static int FUNC_9(struct iio_dev *VAR_6,
      const struct iio_chan_spec *VAR_7,
      int *VAR_8)
{
 struct meson_sar_adc_priv *VAR_9 = FUNC_3(VAR_6);
 int VAR_10, VAR_11, VAR_12, VAR_13;

 if(!FUNC_8(&VAR_9->done,
    FUNC_6(VAR_5)))
  return -VAR_1;

 VAR_13 = FUNC_5(VAR_6);
 if (VAR_13 != 1) {
  FUNC_2(&VAR_6->dev,
   "ADC FIFO has %d element(s) instead of one\n", VAR_13);
  return -VAR_0;
 }

 FUNC_7(VAR_9->regmap, VAR_2, &VAR_10);
 VAR_11 = FUNC_0(VAR_3, VAR_10);
 if (VAR_11 != VAR_7->address) {
  FUNC_2(&VAR_6->dev,
   "ADC FIFO entry belongs to channel %d instead of %lu\n",
   VAR_11, VAR_7->address);
  return -VAR_0;
 }

 VAR_12 = FUNC_0(VAR_4, VAR_10);
 VAR_12 &= FUNC_1(VAR_9->param->resolution - 1, 0);
 *VAR_8 = FUNC_4(VAR_6, VAR_12);

 return 0;
}
