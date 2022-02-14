
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct TYPE_2__ {int realbits; } ;
struct iio_chan_spec {TYPE_1__ scan_type; } ;
struct ad7780_state {int gain; int int_vref_mv; int odr; int reg; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iio_dev*,struct iio_chan_spec const*,int*) ;
 struct ad7780_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_3,
      struct iio_chan_spec const *VAR_4,
      int *VAR_5,
      int *VAR_6,
      long VAR_7)
{
 struct ad7780_state *VAR_8 = FUNC_1(VAR_3);
 int VAR_9;

 switch (VAR_7) {
 case 130:
  return FUNC_0(VAR_3, VAR_4, VAR_5);
 case 128:
  VAR_9 = FUNC_2(VAR_8->reg);
  if (VAR_9 < 0)
   return VAR_9;
  VAR_9 /= 1000;
  *VAR_5 = VAR_9 * VAR_8->gain;
  *VAR_6 = VAR_4->scan_type.realbits - 1;
  VAR_8->int_vref_mv = VAR_9;
  return VAR_1;
 case 131:
  *VAR_5 = -(1 << (VAR_4->scan_type.realbits - 1));
  return VAR_2;
 case 129:
  *VAR_5 = VAR_8->odr;
  return VAR_2;
 default:
  break;
 }

 return -VAR_0;
}
