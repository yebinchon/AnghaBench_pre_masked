
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srf08_data {int dummy; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {scalar_t__ type; } ;


 int VAR_0 ;


 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct srf08_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct srf08_data*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_4,
       struct iio_chan_spec const *VAR_5, int *VAR_6,
       int *VAR_7, long VAR_8)
{
 struct srf08_data *VAR_9 = FUNC_0(VAR_4);
 int VAR_10;

 if (VAR_5->type != VAR_1)
  return -VAR_0;

 switch (VAR_8) {
 case 129:
  VAR_10 = FUNC_1(VAR_9);
  if (VAR_10 < 0)
   return VAR_10;
  *VAR_6 = VAR_10;
  return VAR_2;
 case 128:

  *VAR_6 = 0;
  *VAR_7 = 10000;
  return VAR_3;
 default:
  return -VAR_0;
 }
}
