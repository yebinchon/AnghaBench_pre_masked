
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct TYPE_2__ {int realbits; int shift; } ;
struct iio_chan_spec {TYPE_1__ scan_type; int address; } ;
struct ad5380_state {int regmap; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;



 int FUNC_1 (struct iio_chan_spec const*,long) ;
 struct ad5380_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_1,
 struct iio_chan_spec const *VAR_2, int VAR_3, int VAR_4, long VAR_5)
{
 const unsigned int VAR_6 = (1 << VAR_2->scan_type.realbits);
 struct ad5380_state *VAR_7 = FUNC_2(VAR_1);

 switch (VAR_5) {
 case 128:
 case 129:
  if (VAR_3 >= VAR_6 || VAR_3 < 0)
   return -VAR_0;

  return FUNC_3(VAR_7->regmap,
   FUNC_1(VAR_2, VAR_5),
   VAR_3 << VAR_2->scan_type.shift);
 case 130:
  VAR_3 += (1 << VAR_2->scan_type.realbits) / 2;
  if (VAR_3 >= VAR_6 || VAR_3 < 0)
   return -VAR_0;

  return FUNC_3(VAR_7->regmap,
   FUNC_0(VAR_2->address),
   VAR_3 << VAR_2->scan_type.shift);
 default:
  break;
 }
 return -VAR_0;
}
