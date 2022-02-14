
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max1118 {int spi; int lock; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 struct max1118* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_3,
   struct iio_chan_spec const *VAR_4,
   int *VAR_5, int *VAR_6, long VAR_7)
{
 struct max1118 *VAR_8 = FUNC_0(VAR_3);

 switch (VAR_7) {
 case 129:
  FUNC_3(&VAR_8->lock);
  *VAR_5 = FUNC_2(VAR_8->spi, VAR_4->channel);
  FUNC_4(&VAR_8->lock);
  if (*VAR_5 < 0)
   return *VAR_5;

  return VAR_2;
 case 128:
  *VAR_5 = FUNC_1(VAR_8->spi);
  if (*VAR_5 < 0)
   return *VAR_5;
  *VAR_6 = 8;

  return VAR_1;
 }

 return -VAR_0;
}
