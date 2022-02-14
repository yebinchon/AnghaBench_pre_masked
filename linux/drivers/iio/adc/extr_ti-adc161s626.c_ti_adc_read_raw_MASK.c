
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ti_adc_data {int ref; } ;
struct iio_dev {int dummy; } ;
struct TYPE_2__ {int realbits; } ;
struct iio_chan_spec {TYPE_1__ scan_type; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*) ;
 struct ti_adc_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ti_adc_data*,struct iio_chan_spec const*,int*) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_2,
      struct iio_chan_spec const *VAR_3,
      int *VAR_4, int *VAR_5, long VAR_6)
{
 struct ti_adc_data *VAR_7 = FUNC_2(VAR_2);
 int VAR_8;

 switch (VAR_6) {
 case 129:
  VAR_8 = FUNC_0(VAR_2);
  if (VAR_8)
   return VAR_8;

  VAR_8 = FUNC_4(VAR_7, VAR_3, VAR_4);
  FUNC_1(VAR_2);

  if (VAR_8)
   return VAR_8;

  return VAR_1;
 case 128:
  VAR_8 = FUNC_3(VAR_7->ref);
  if (VAR_8 < 0)
   return VAR_8;

  *VAR_4 = VAR_8 / 1000;
  *VAR_5 = VAR_3->scan_type.realbits;

  return VAR_0;
 case 130:
  *VAR_4 = 1 << (VAR_3->scan_type.realbits - 1);
  return VAR_1;
 }

 return 0;
}
