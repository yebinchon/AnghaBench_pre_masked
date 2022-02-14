
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct bma180_data {int mutex; } ;


 int VAR_0 ;


 int FUNC_0 (struct bma180_data*,int) ;
 int FUNC_1 (struct bma180_data*,int) ;
 struct bma180_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_1,
  struct iio_chan_spec const *VAR_2, int VAR_3, int VAR_4, long VAR_5)
{
 struct bma180_data *VAR_6 = FUNC_2(VAR_1);
 int VAR_7;

 switch (VAR_5) {
 case 128:
  if (VAR_3)
   return -VAR_0;
  FUNC_3(&VAR_6->mutex);
  VAR_7 = FUNC_1(VAR_6, VAR_4);
  FUNC_4(&VAR_6->mutex);
  return VAR_7;
 case 129:
  if (VAR_4)
   return -VAR_0;
  FUNC_3(&VAR_6->mutex);
  VAR_7 = FUNC_0(VAR_6, VAR_3);
  FUNC_4(&VAR_6->mutex);
  return VAR_7;
 default:
  return -VAR_0;
 }
}
