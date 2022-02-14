
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct zopt2201_data {size_t res; size_t gain; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int address; } ;
struct TYPE_6__ {int scale; } ;
struct TYPE_5__ {int gain; int scale; } ;
struct TYPE_4__ {int us; int bits; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int,int*) ;
 struct zopt2201_data* FUNC_2 (struct iio_dev*) ;
 TYPE_3__* VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_3 (struct zopt2201_data*,int) ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_6,
    struct iio_chan_spec const *VAR_7,
    int *VAR_8, int *VAR_9, long VAR_10)
{
 struct zopt2201_data *VAR_11 = FUNC_2(VAR_6);
 u64 VAR_12;
 int VAR_13;

 switch (VAR_10) {
 case 131:
  VAR_13 = FUNC_3(VAR_11, VAR_7->address);
  if (VAR_13 < 0)
   return VAR_13;
  *VAR_8 = VAR_13;
  return VAR_1;
 case 132:
  VAR_13 = FUNC_3(VAR_11, 128);
  if (VAR_13 < 0)
   return VAR_13;
  *VAR_8 = VAR_13 * 18 *
   (1 << (20 - VAR_5[VAR_11->res].bits)) /
   VAR_4[VAR_11->gain].gain;
  return VAR_1;
 case 130:
  switch (VAR_7->address) {
  case 129:
   *VAR_8 = VAR_3[VAR_11->gain].scale;
   break;
  case 128:
   *VAR_8 = VAR_4[VAR_11->gain].scale;
   break;
  default:
   return -VAR_0;
  }

  *VAR_9 = 1000000;
  *VAR_9 *= (1 << (VAR_5[VAR_11->res].bits - 13));
  VAR_12 = FUNC_0(*VAR_8 * 1000000ULL, *VAR_9);
  *VAR_8 = FUNC_1(VAR_12, 1000000, VAR_9);

  return VAR_2;
 case 133:
  *VAR_8 = 0;
  *VAR_9 = VAR_5[VAR_11->res].us;
  return VAR_2;
 default:
  return -VAR_0;
 }
}
