
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel; } ;
struct ad7949_adc_chip {int vref; int lock; } ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (struct ad7949_adc_chip*,int*,int ) ;
 struct ad7949_adc_chip* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_2,
      struct iio_chan_spec const *VAR_3,
      int *VAR_4, int *VAR_5, long VAR_6)
{
 struct ad7949_adc_chip *VAR_7 = FUNC_1(VAR_2);
 int VAR_8;

 if (!VAR_4)
  return -VAR_0;

 switch (VAR_6) {
 case 129:
  FUNC_2(&VAR_7->lock);
  VAR_8 = FUNC_0(VAR_7, VAR_4, VAR_3->channel);
  FUNC_3(&VAR_7->lock);

  if (VAR_8 < 0)
   return VAR_8;

  return VAR_1;

 case 128:
  VAR_8 = FUNC_4(VAR_7->vref);
  if (VAR_8 < 0)
   return VAR_8;

  *VAR_4 = VAR_8 / 5000;
  return VAR_1;
 }

 return -VAR_0;
}
