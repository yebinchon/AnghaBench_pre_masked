
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kxcjk1013_data {size_t range; int mutex; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int scan_index; } ;
struct TYPE_2__ {int scale; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (struct iio_dev*) ;
 struct kxcjk1013_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct kxcjk1013_data*,int ) ;
 int FUNC_3 (struct kxcjk1013_data*,int*,int*) ;
 int FUNC_4 (struct kxcjk1013_data*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static int FUNC_8(struct iio_dev *VAR_5,
         struct iio_chan_spec const *VAR_6, int *VAR_7,
         int *VAR_8, long VAR_9)
{
 struct kxcjk1013_data *VAR_10 = FUNC_1(VAR_5);
 int VAR_11;

 switch (VAR_9) {
 case 130:
  FUNC_5(&VAR_10->mutex);
  if (FUNC_0(VAR_5))
   VAR_11 = -VAR_0;
  else {
   VAR_11 = FUNC_4(VAR_10, 1);
   if (VAR_11 < 0) {
    FUNC_6(&VAR_10->mutex);
    return VAR_11;
   }
   VAR_11 = FUNC_2(VAR_10, VAR_6->scan_index);
   if (VAR_11 < 0) {
    FUNC_4(VAR_10, 0);
    FUNC_6(&VAR_10->mutex);
    return VAR_11;
   }
   *VAR_7 = FUNC_7(VAR_11 >> 4, 11);
   VAR_11 = FUNC_4(VAR_10, 0);
  }
  FUNC_6(&VAR_10->mutex);

  if (VAR_11 < 0)
   return VAR_11;

  return VAR_2;

 case 128:
  *VAR_7 = 0;
  *VAR_8 = VAR_4[VAR_10->range].scale;
  return VAR_3;

 case 129:
  FUNC_5(&VAR_10->mutex);
  VAR_11 = FUNC_3(VAR_10, VAR_7, VAR_8);
  FUNC_6(&VAR_10->mutex);
  return VAR_11;

 default:
  return -VAR_1;
 }
}
