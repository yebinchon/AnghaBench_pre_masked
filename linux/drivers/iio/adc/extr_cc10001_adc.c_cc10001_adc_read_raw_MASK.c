
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct TYPE_2__ {int realbits; } ;
struct iio_chan_spec {TYPE_1__ scan_type; } ;
struct cc10001_adc_device {int reg; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct iio_dev*,struct iio_chan_spec const*) ;
 int FUNC_1 (struct iio_dev*) ;
 struct cc10001_adc_device* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_6,
     struct iio_chan_spec const *VAR_7,
     int *VAR_8, int *VAR_9, long VAR_10)
{
 struct cc10001_adc_device *VAR_11 = FUNC_2(VAR_6);
 int VAR_12;

 switch (VAR_10) {
 case 129:
  if (FUNC_1(VAR_6))
   return -VAR_1;
  FUNC_3(&VAR_11->lock);
  *VAR_8 = FUNC_0(VAR_6, VAR_7);
  FUNC_4(&VAR_11->lock);

  if (*VAR_8 == VAR_0)
   return -VAR_3;
  return VAR_5;

 case 128:
  VAR_12 = FUNC_5(VAR_11->reg);
  if (VAR_12 < 0)
   return VAR_12;

  *VAR_8 = VAR_12 / 1000;
  *VAR_9 = VAR_7->scan_type.realbits;
  return VAR_4;

 default:
  return -VAR_2;
 }
}
