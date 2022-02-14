
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lp8788_adc {int lock; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel; } ;
typedef enum lp8788_adc_id { ____Placeholder_lp8788_adc_id } lp8788_adc_id ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 struct lp8788_adc* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct lp8788_adc*,int,int*) ;
 int* VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_5,
   struct iio_chan_spec const *VAR_6,
   int *VAR_7, int *VAR_8, long VAR_9)
{
 struct lp8788_adc *VAR_10 = FUNC_0(VAR_5);
 enum lp8788_adc_id VAR_11 = VAR_6->channel;
 int VAR_12;

 FUNC_2(&VAR_10->lock);

 switch (VAR_9) {
 case 129:
  VAR_12 = FUNC_1(VAR_10, VAR_11, VAR_7) ? -VAR_1 : VAR_2;
  break;
 case 128:
  *VAR_7 = VAR_4[VAR_11] / 1000000;
  *VAR_8 = VAR_4[VAR_11] % 1000000;
  VAR_12 = VAR_3;
  break;
 default:
  VAR_12 = -VAR_0;
  break;
 }

 FUNC_3(&VAR_10->lock);

 return VAR_12;
}
