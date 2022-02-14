
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct TYPE_2__ {int shift; int realbits; } ;
struct iio_chan_spec {TYPE_1__ scan_type; int address; } ;
struct ad5380_state {int vref; int regmap; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct iio_chan_spec const*,long) ;
 struct ad5380_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_3,
 struct iio_chan_spec const *VAR_4, int *VAR_5, int *VAR_6, long VAR_7)
{
 struct ad5380_state *VAR_8 = FUNC_2(VAR_3);
 int VAR_9;

 switch (VAR_7) {
 case 129:
 case 130:
  VAR_9 = FUNC_3(VAR_8->regmap, FUNC_1(VAR_4, VAR_7),
     VAR_5);
  if (VAR_9)
   return VAR_9;
  *VAR_5 >>= VAR_4->scan_type.shift;
  return VAR_2;
 case 131:
  VAR_9 = FUNC_3(VAR_8->regmap, FUNC_0(VAR_4->address),
     VAR_5);
  if (VAR_9)
   return VAR_9;
  *VAR_5 >>= VAR_4->scan_type.shift;
  *VAR_5 -= (1 << VAR_4->scan_type.realbits) / 2;
  return VAR_2;
 case 128:
  *VAR_5 = 2 * VAR_8->vref;
  *VAR_6 = VAR_4->scan_type.realbits;
  return VAR_1;
 default:
  break;
 }

 return -VAR_0;
}
