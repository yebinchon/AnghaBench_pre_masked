
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ltc1660_priv {int* value; TYPE_1__* spi; int vref_reg; } ;
struct iio_dev {int dummy; } ;
struct TYPE_4__ {int realbits; } ;
struct iio_chan_spec {size_t channel; TYPE_2__ scan_type; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 struct ltc1660_priv* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_3,
  struct iio_chan_spec const *VAR_4,
  int *VAR_5,
  int *VAR_6,
  long VAR_7)
{
 struct ltc1660_priv *VAR_8 = FUNC_1(VAR_3);

 switch (VAR_7) {
 case 129:
  *VAR_5 = VAR_8->value[VAR_4->channel];
  return VAR_2;
 case 128:
  *VAR_5 = FUNC_2(VAR_8->vref_reg);
  if (*VAR_5 < 0) {
   FUNC_0(&VAR_8->spi->dev, "failed to read vref regulator: %d\n",
     *VAR_5);
   return *VAR_5;
  }


  *VAR_5 /= 1000;
  *VAR_6 = VAR_4->scan_type.realbits;
  return VAR_1;
 default:
  return -VAR_0;
 }
}
