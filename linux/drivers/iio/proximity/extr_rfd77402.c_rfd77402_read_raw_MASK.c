
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfd77402_data {int lock; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 struct rfd77402_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rfd77402_data*) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_3,
        struct iio_chan_spec const *VAR_4,
        int *VAR_5, int *VAR_6, long VAR_7)
{
 struct rfd77402_data *VAR_8 = FUNC_0(VAR_3);
 int VAR_9;

 switch (VAR_7) {
 case 129:
  FUNC_1(&VAR_8->lock);
  VAR_9 = FUNC_3(VAR_8);
  FUNC_2(&VAR_8->lock);
  if (VAR_9 < 0)
   return VAR_9;
  *VAR_5 = VAR_9;
  return VAR_1;
 case 128:

  *VAR_5 = 0;
  *VAR_6 = 1000;
  return VAR_2;
 default:
  return -VAR_0;
 }
}
