
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ltc1660_priv {int* value; int regmap; } ;
struct iio_dev {int dummy; } ;
struct TYPE_2__ {int shift; int realbits; } ;
struct iio_chan_spec {size_t channel; TYPE_1__ scan_type; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

 struct ltc1660_priv* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ,size_t,int) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_1,
  struct iio_chan_spec const *VAR_2,
  int VAR_3,
  int VAR_4,
  long VAR_5)
{
 struct ltc1660_priv *VAR_6 = FUNC_1(VAR_1);
 int VAR_7;

 switch (VAR_5) {
 case 128:
  if (VAR_4 != 0)
   return -VAR_0;

  if (VAR_3 < 0 || VAR_3 > FUNC_0(VAR_2->scan_type.realbits - 1, 0))
   return -VAR_0;

  VAR_7 = FUNC_2(VAR_6->regmap, VAR_2->channel,
     (VAR_3 << VAR_2->scan_type.shift));
  if (!VAR_7)
   VAR_6->value[VAR_2->channel] = VAR_3;

  return VAR_7;
 default:
  return -VAR_0;
 }
}
