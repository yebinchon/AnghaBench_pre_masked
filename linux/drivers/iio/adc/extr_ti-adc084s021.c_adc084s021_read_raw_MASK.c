
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct TYPE_2__ {int shift; } ;
struct iio_chan_spec {int channel; TYPE_1__ scan_type; } ;
struct adc084s021 {int* tx_buf; int reg; } ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (struct adc084s021*,int*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*) ;
 struct adc084s021* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct iio_dev *VAR_2,
      struct iio_chan_spec const *VAR_3, int *VAR_4,
      int *VAR_5, long VAR_6)
{
 struct adc084s021 *VAR_7 = FUNC_4(VAR_2);
 int VAR_8;

 switch (VAR_6) {
 case 129:
  VAR_8 = FUNC_2(VAR_2);
  if (VAR_8 < 0)
   return VAR_8;

  VAR_8 = FUNC_6(VAR_7->reg);
  if (VAR_8) {
   FUNC_3(VAR_2);
   return VAR_8;
  }

  VAR_7->tx_buf[0] = VAR_3->channel << 3;
  VAR_8 = FUNC_0(VAR_7, VAR_4);
  FUNC_3(VAR_2);
  FUNC_5(VAR_7->reg);
  if (VAR_8 < 0)
   return VAR_8;

  *VAR_4 = FUNC_1(*VAR_4);
  *VAR_4 = (*VAR_4 >> VAR_3->scan_type.shift) & 0xff;

  return VAR_1;
 case 128:
  VAR_8 = FUNC_6(VAR_7->reg);
  if (VAR_8)
   return VAR_8;

  VAR_8 = FUNC_7(VAR_7->reg);
  FUNC_5(VAR_7->reg);
  if (VAR_8 < 0)
   return VAR_8;

  *VAR_4 = VAR_8 / 1000;

  return VAR_1;
 default:
  return -VAR_0;
 }
}
