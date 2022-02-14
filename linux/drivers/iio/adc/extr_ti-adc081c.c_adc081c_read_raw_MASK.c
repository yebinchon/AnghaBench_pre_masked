
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct adc081c {int bits; int ref; int i2c; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 struct adc081c* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_4,
       struct iio_chan_spec const *VAR_5, int *VAR_6,
       int *VAR_7, long VAR_8)
{
 struct adc081c *VAR_9 = FUNC_1(VAR_4);
 int VAR_10;

 switch (VAR_8) {
 case 129:
  VAR_10 = FUNC_0(VAR_9->i2c, VAR_3);
  if (VAR_10 < 0)
   return VAR_10;

  *VAR_6 = (VAR_10 & 0xFFF) >> (12 - VAR_9->bits);
  return VAR_2;

 case 128:
  VAR_10 = FUNC_2(VAR_9->ref);
  if (VAR_10 < 0)
   return VAR_10;

  *VAR_6 = VAR_10 / 1000;
  *VAR_7 = VAR_9->bits;

  return VAR_1;

 default:
  break;
 }

 return -VAR_0;
}
