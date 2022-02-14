
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mt6577_auxadc_device {TYPE_2__* dev_comp; } ;
struct TYPE_3__ {int parent; } ;
struct iio_dev {TYPE_1__ dev; } ;
struct iio_chan_spec {int channel; } ;
struct TYPE_4__ {int sample_data_cali; } ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 struct mt6577_auxadc_device* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*,struct iio_chan_spec const*) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_2,
      struct iio_chan_spec const *VAR_3,
      int *VAR_4,
      int *VAR_5,
      long VAR_6)
{
 struct mt6577_auxadc_device *VAR_7 = FUNC_1(VAR_2);

 switch (VAR_6) {
 case 128:
  *VAR_4 = FUNC_2(VAR_2, VAR_3);
  if (*VAR_4 < 0) {
   FUNC_0(VAR_2->dev.parent,
    "failed to sample data on channel[%d]\n",
    VAR_3->channel);
   return *VAR_4;
  }
  if (VAR_7->dev_comp->sample_data_cali)
   *VAR_4 = FUNC_3(*VAR_4, 1);
  return VAR_1;

 default:
  return -VAR_0;
 }
}
