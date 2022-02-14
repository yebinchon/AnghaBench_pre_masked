
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct cm3323_data {int mutex; } ;


 int VAR_0 ;

 int FUNC_0 (struct cm3323_data*,int,int) ;
 struct cm3323_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_1,
       struct iio_chan_spec const *VAR_2, int VAR_3,
       int VAR_4, long VAR_5)
{
 struct cm3323_data *VAR_6 = FUNC_1(VAR_1);
 int VAR_7;

 switch (VAR_5) {
 case 128:
  FUNC_2(&VAR_6->mutex);
  VAR_7 = FUNC_0(VAR_6, VAR_3, VAR_4);
  FUNC_3(&VAR_6->mutex);

  return VAR_7;
 default:
  return -VAR_0;
 }
}
