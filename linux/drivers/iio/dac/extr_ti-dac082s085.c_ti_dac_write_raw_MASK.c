
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_dac_chip {int* val; int resolution; int lock; int powerdown; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t channel; } ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (size_t) ;
 struct ti_dac_chip* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ti_dac_chip*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_2,
       struct iio_chan_spec const *VAR_3,
       int VAR_4, int VAR_5, long VAR_6)
{
 struct ti_dac_chip *VAR_7 = FUNC_1(VAR_2);
 int VAR_8;

 switch (VAR_6) {
 case 128:
  if (VAR_7->val[VAR_3->channel] == VAR_4)
   return 0;

  if (VAR_4 >= (1 << VAR_7->resolution) || VAR_4 < 0)
   return -VAR_1;

  if (VAR_7->powerdown)
   return -VAR_0;

  FUNC_2(&VAR_7->lock);
  VAR_8 = FUNC_4(VAR_7, FUNC_0(VAR_3->channel), VAR_4);
  if (!VAR_8)
   VAR_7->val[VAR_3->channel] = VAR_4;
  FUNC_3(&VAR_7->lock);
  break;

 default:
  VAR_8 = -VAR_1;
 }

 return VAR_8;
}
