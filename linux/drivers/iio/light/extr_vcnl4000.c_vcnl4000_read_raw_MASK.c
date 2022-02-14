
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vcnl4000_data {int al_scale; TYPE_1__* chip_spec; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int const type; } ;
struct TYPE_2__ {int (* measure_light ) (struct vcnl4000_data*,int*) ;int (* measure_proximity ) (struct vcnl4000_data*,int*) ;} ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 struct vcnl4000_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct vcnl4000_data*,int*) ;
 int FUNC_2 (struct vcnl4000_data*,int*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_3,
    struct iio_chan_spec const *VAR_4,
    int *VAR_5, int *VAR_6, long VAR_7)
{
 int VAR_8;
 struct vcnl4000_data *VAR_9 = FUNC_0(VAR_3);

 switch (VAR_7) {
 case 131:
  switch (VAR_4->type) {
  case 129:
   VAR_8 = VAR_9->chip_spec->measure_light(VAR_9, VAR_5);
   if (VAR_8 < 0)
    return VAR_8;
   return VAR_1;
  case 128:
   VAR_8 = VAR_9->chip_spec->measure_proximity(VAR_9, VAR_5);
   if (VAR_8 < 0)
    return VAR_8;
   return VAR_1;
  default:
   return -VAR_0;
  }
 case 130:
  if (VAR_4->type != 129)
   return -VAR_0;

  *VAR_5 = 0;
  *VAR_6 = VAR_9->al_scale;
  return VAR_2;
 default:
  return -VAR_0;
 }
}
