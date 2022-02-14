
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct bh1750_data {int lock; } ;


 int VAR_0 ;

 int FUNC_0 (struct bh1750_data*,int) ;
 struct bh1750_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_1,
       struct iio_chan_spec const *VAR_2,
       int VAR_3, int VAR_4, long VAR_5)
{
 int VAR_6;
 struct bh1750_data *VAR_7 = FUNC_1(VAR_1);

 switch (VAR_5) {
 case 128:
  if (VAR_3 != 0)
   return -VAR_0;

  FUNC_2(&VAR_7->lock);
  VAR_6 = FUNC_0(VAR_7, VAR_4);
  FUNC_3(&VAR_7->lock);
  return VAR_6;
 default:
  return -VAR_0;
 }
}
