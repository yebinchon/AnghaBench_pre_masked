
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ti_dac_chip {int val; int resolution; int lock; int powerdown; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

 struct ti_dac_chip* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ti_dac_chip*,int ,int) ;
 int FUNC_4 (struct ti_dac_chip*,int ) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_2,
       struct iio_chan_spec const *VAR_3,
       int VAR_4, int VAR_5, long VAR_6)
{
 struct ti_dac_chip *VAR_7 = FUNC_0(VAR_2);
 u8 VAR_8 = FUNC_4(VAR_7, VAR_7->powerdown);
 int VAR_9;

 switch (VAR_6) {
 case 128:
  if (VAR_7->val == VAR_4)
   return 0;

  if (VAR_4 >= (1 << VAR_7->resolution) || VAR_4 < 0)
   return -VAR_1;

  if (VAR_7->powerdown)
   return -VAR_0;

  FUNC_1(&VAR_7->lock);
  VAR_9 = FUNC_3(VAR_7, VAR_8, VAR_4);
  if (!VAR_9)
   VAR_7->val = VAR_4;
  FUNC_2(&VAR_7->lock);
  break;

 default:
  VAR_9 = -VAR_1;
 }

 return VAR_9;
}
