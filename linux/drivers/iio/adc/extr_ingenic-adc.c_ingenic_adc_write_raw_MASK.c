
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ingenic_adc {int low_vref_mode; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 struct ingenic_adc* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct ingenic_adc*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_3,
     struct iio_chan_spec const *VAR_4,
     int VAR_5,
     int VAR_6,
     long VAR_7)
{
 struct ingenic_adc *VAR_8 = FUNC_0(VAR_3);

 switch (VAR_7) {
 case 129:
  switch (VAR_4->channel) {
  case 128:
   if (VAR_5 > VAR_1) {
    FUNC_1(VAR_8,
             VAR_2,
             0);
    VAR_8->low_vref_mode = 0;
   } else {
    FUNC_1(VAR_8,
             VAR_2,
             VAR_2);
    VAR_8->low_vref_mode = 1;
   }
   return 0;
  default:
   return -VAR_0;
  }
 default:
  return -VAR_0;
 }
}
