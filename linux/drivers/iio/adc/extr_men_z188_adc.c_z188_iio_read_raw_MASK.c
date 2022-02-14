
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct z188_adc {int base; } ;
struct iio_dev {int dev; } ;
struct iio_chan_spec {int channel; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int FUNC_2 (int *,char*,int) ;
 struct z188_adc* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_3,
   struct iio_chan_spec const *VAR_4,
   int *VAR_5,
   int *VAR_6,
   long VAR_7)
{
 struct z188_adc *VAR_8 = FUNC_3(VAR_3);
 int VAR_9;
 u16 VAR_10;

 switch (VAR_7) {
 case 128:
  VAR_10 = FUNC_4(VAR_8->base + VAR_4->channel * 4);

  if (FUNC_1(VAR_10)) {
   FUNC_2(&VAR_3->dev,
    "Oversampling error on ADC channel %d\n",
    VAR_4->channel);
   return -VAR_1;
  }
  *VAR_5 = FUNC_0(VAR_10);
  VAR_9 = VAR_2;
  break;
 default:
  VAR_9 = -VAR_0;
  break;
 }

 return VAR_9;
}
