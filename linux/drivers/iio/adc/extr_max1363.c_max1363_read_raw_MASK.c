
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct max1363_state {int vref_uv; TYPE_1__* chip_info; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct TYPE_2__ {int bits; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 struct max1363_state* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*,struct iio_chan_spec const*,int*,long) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_3,
       struct iio_chan_spec const *VAR_4,
       int *VAR_5,
       int *VAR_6,
       long VAR_7)
{
 struct max1363_state *VAR_8 = FUNC_0(VAR_3);
 int VAR_9;

 switch (VAR_7) {
 case 129:
  VAR_9 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_7);
  if (VAR_9 < 0)
   return VAR_9;
  return VAR_2;
 case 128:
  *VAR_5 = VAR_8->vref_uv / 1000;
  *VAR_6 = VAR_8->chip_info->bits;
  return VAR_1;
 default:
  return -VAR_0;
 }
 return 0;
}
