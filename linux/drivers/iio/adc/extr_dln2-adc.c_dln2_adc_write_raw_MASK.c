
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct dln2_adc {int sample_period; int trigger_chan; int mutex; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct dln2_adc*,int,int) ;
 struct dln2_adc* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_2,
         struct iio_chan_spec const *VAR_3,
         int VAR_4,
         int VAR_5,
         long VAR_6)
{
 int VAR_7;
 unsigned int VAR_8;
 struct dln2_adc *VAR_9 = FUNC_2(VAR_2);

 switch (VAR_6) {
 case 128:
  VAR_8 = 1000000 * VAR_4 + VAR_5;

  FUNC_3(&VAR_9->mutex);

  VAR_9->sample_period =
   VAR_8 ? 1000000000 / VAR_8 : VAR_1;
  if (VAR_9->sample_period > 65535) {
   VAR_9->sample_period = 65535;
   FUNC_0(&VAR_9->pdev->dev,
     "clamping period to 65535ms\n");
  }
  if (VAR_9->trigger_chan != -1)
   VAR_7 = FUNC_1(VAR_9,
    VAR_9->trigger_chan, VAR_9->sample_period);
  else
   VAR_7 = 0;

  FUNC_4(&VAR_9->mutex);

  return VAR_7;

 default:
  return -VAR_0;
 }
}
