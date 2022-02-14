
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mxs_lradc_adc {int* vref_mv; int is_divided; } ;
struct iio_dev {int dummy; } ;
struct TYPE_2__ {int realbits; } ;
struct iio_chan_spec {size_t channel; int type; TYPE_1__ scan_type; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct mxs_lradc_adc* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*,size_t,int*) ;
 int FUNC_2 (struct iio_dev*,int*) ;
 int FUNC_3 (size_t,int *) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_4,
         const struct iio_chan_spec *VAR_5,
         int *VAR_6, int *VAR_7, long VAR_8)
{
 struct mxs_lradc_adc *VAR_9 = FUNC_0(VAR_4);

 switch (VAR_8) {
 case 129:
  if (VAR_5->type == VAR_1)
   return FUNC_2(VAR_4, VAR_6);

  return FUNC_1(VAR_4, VAR_5->channel, VAR_6);

 case 128:
  if (VAR_5->type == VAR_1) {




   *VAR_6 = 0;
   *VAR_7 = 253000;
   return VAR_3;
  }

  *VAR_6 = VAR_9->vref_mv[VAR_5->channel];
  *VAR_7 = VAR_5->scan_type.realbits -
   FUNC_3(VAR_5->channel, &VAR_9->is_divided);
  return VAR_2;

 case 130:
  if (VAR_5->type == VAR_1) {






   *VAR_6 = -1079;
   *VAR_7 = 644268;

   return VAR_3;
  }

  return -VAR_0;

 default:
  break;
 }

 return -VAR_0;
}
