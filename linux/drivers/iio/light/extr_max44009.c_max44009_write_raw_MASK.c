
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max44009_data {int lock; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {scalar_t__ type; } ;


 int VAR_0 ;
 long VAR_1 ;
 scalar_t__ VAR_2 ;
 struct max44009_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct max44009_data*,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_3,
         struct iio_chan_spec const *VAR_4, int VAR_5,
         int VAR_6, long VAR_7)
{
 struct max44009_data *VAR_8 = FUNC_0(VAR_3);
 int VAR_9;

 if (VAR_7 == VAR_1 && VAR_4->type == VAR_2) {
  FUNC_2(&VAR_8->lock);
  VAR_9 = FUNC_1(VAR_8, VAR_5, VAR_6);
  FUNC_3(&VAR_8->lock);
  return VAR_9;
 }
 return -VAR_0;
}
