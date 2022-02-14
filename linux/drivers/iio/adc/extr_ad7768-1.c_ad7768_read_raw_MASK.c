
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct TYPE_2__ {int realbits; } ;
struct iio_chan_spec {TYPE_1__ scan_type; } ;
struct ad7768_state {int samp_freq; int vref; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*) ;
 struct ad7768_state* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_3,
      struct iio_chan_spec const *VAR_4,
      int *VAR_5, int *VAR_6, long VAR_7)
{
 struct ad7768_state *VAR_8 = FUNC_3(VAR_3);
 int VAR_9, VAR_10;

 switch (VAR_7) {
 case 130:
  VAR_10 = FUNC_1(VAR_3);
  if (VAR_10)
   return VAR_10;

  VAR_10 = FUNC_0(VAR_3);
  if (VAR_10 >= 0)
   *VAR_5 = VAR_10;

  FUNC_2(VAR_3);
  if (VAR_10 < 0)
   return VAR_10;

  return VAR_2;

 case 128:
  VAR_9 = FUNC_4(VAR_8->vref);
  if (VAR_9 < 0)
   return VAR_9;

  *VAR_5 = (VAR_9 * 2) / 1000;
  *VAR_6 = VAR_4->scan_type.realbits;

  return VAR_1;

 case 129:
  *VAR_5 = VAR_8->samp_freq;

  return VAR_2;
 }

 return -VAR_0;
}
