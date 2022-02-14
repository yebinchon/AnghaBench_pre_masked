
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;
struct adis16136 {int adis; TYPE_1__* chip_info; } ;
struct TYPE_2__ {int precision; int fullscale; } ;


 int VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct iio_dev*,int*) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (struct iio_dev*,struct iio_chan_spec const*,int ,int*) ;
 struct adis16136* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_5,
 const struct iio_chan_spec *VAR_6, int *VAR_7, int *VAR_8, long VAR_9)
{
 struct adis16136 *VAR_10 = FUNC_3(VAR_5);
 uint32_t VAR_11;
 int VAR_12;

 switch (VAR_9) {
 case 130:
  return FUNC_2(VAR_5, VAR_6, 0, VAR_7);
 case 129:
  switch (VAR_6->type) {
  case 133:
   *VAR_7 = VAR_10->chip_info->precision;
   *VAR_8 = (VAR_10->chip_info->fullscale << 16);
   return VAR_2;
  case 128:
   *VAR_7 = 10;
   *VAR_8 = 697000;
   return VAR_4;
  default:
   return -VAR_1;
  }
 case 132:
  VAR_12 = FUNC_1(&VAR_10->adis,
   VAR_0, &VAR_11);
  if (VAR_12 < 0)
   return VAR_12;

  *VAR_7 = FUNC_4(VAR_11, 31);

  return VAR_3;
 case 131:
  return FUNC_0(VAR_5, VAR_7);
 default:
  return -VAR_1;
 }
}
