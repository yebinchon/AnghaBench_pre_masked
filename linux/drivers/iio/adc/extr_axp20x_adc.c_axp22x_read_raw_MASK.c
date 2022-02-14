
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (struct iio_dev*,struct iio_chan_spec const*,int*) ;
 int FUNC_1 (struct iio_chan_spec const*,int*,int*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_2,
      struct iio_chan_spec const *VAR_3, int *VAR_4,
      int *VAR_5, long VAR_6)
{
 switch (VAR_6) {
 case 130:
  *VAR_4 = -2677;
  return VAR_1;

 case 128:
  return FUNC_1(VAR_3, VAR_4, VAR_5);

 case 129:
  return FUNC_0(VAR_2, VAR_3, VAR_4);

 default:
  return -VAR_0;
 }
}
