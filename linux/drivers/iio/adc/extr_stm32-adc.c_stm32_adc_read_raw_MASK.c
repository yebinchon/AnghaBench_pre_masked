
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stm32_adc {TYPE_1__* common; } ;
struct iio_dev {int dummy; } ;
struct TYPE_4__ {int realbits; } ;
struct iio_chan_spec {TYPE_2__ scan_type; int differential; int type; } ;
struct TYPE_3__ {int vref_mv; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*) ;
 struct stm32_adc* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*,struct iio_chan_spec const*,int*) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_4,
         struct iio_chan_spec const *VAR_5,
         int *VAR_6, int *VAR_7, long VAR_8)
{
 struct stm32_adc *VAR_9 = FUNC_2(VAR_4);
 int VAR_10;

 switch (VAR_8) {
 case 129:
  VAR_10 = FUNC_0(VAR_4);
  if (VAR_10)
   return VAR_10;
  if (VAR_5->type == VAR_3)
   VAR_10 = FUNC_3(VAR_4, VAR_5, VAR_6);
  else
   VAR_10 = -VAR_0;
  FUNC_1(VAR_4);
  return VAR_10;

 case 128:
  if (VAR_5->differential) {
   *VAR_6 = VAR_9->common->vref_mv * 2;
   *VAR_7 = VAR_5->scan_type.realbits;
  } else {
   *VAR_6 = VAR_9->common->vref_mv;
   *VAR_7 = VAR_5->scan_type.realbits;
  }
  return VAR_1;

 case 130:
  if (VAR_5->differential)

   *VAR_6 = -((1 << VAR_5->scan_type.realbits) / 2);
  else
   *VAR_6 = 0;
  return VAR_2;

 default:
  return -VAR_0;
 }
}
