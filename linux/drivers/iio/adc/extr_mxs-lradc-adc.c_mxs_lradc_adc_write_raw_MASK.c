
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxs_lradc_scale {int integer; int nano; } ;
struct mxs_lradc_adc {int is_divided; struct mxs_lradc_scale** scale_avail; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t channel; } ;


 int VAR_0 ;

 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (size_t,int *) ;
 int FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*) ;
 struct mxs_lradc_adc* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (size_t,int *) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_3,
       const struct iio_chan_spec *VAR_4,
       int VAR_5, int VAR_6, long VAR_7)
{
 struct mxs_lradc_adc *VAR_8 = FUNC_3(VAR_3);
 struct mxs_lradc_scale *VAR_9 =
   VAR_8->scale_avail[VAR_4->channel];
 int VAR_10;

 VAR_10 = FUNC_1(VAR_3);
 if (VAR_10)
  return VAR_10;

 switch (VAR_7) {
 case 128:
  VAR_10 = -VAR_0;
  if (VAR_5 == VAR_9[VAR_1].integer &&
      VAR_6 == VAR_9[VAR_1].nano) {

   FUNC_0(VAR_4->channel, &VAR_8->is_divided);
   VAR_10 = 0;
  } else if (VAR_5 == VAR_9[VAR_2].integer &&
      VAR_6 == VAR_9[VAR_2].nano) {

   FUNC_4(VAR_4->channel, &VAR_8->is_divided);
   VAR_10 = 0;
  }

  break;
 default:
  VAR_10 = -VAR_0;
  break;
 }

 FUNC_2(VAR_3);

 return VAR_10;
}
