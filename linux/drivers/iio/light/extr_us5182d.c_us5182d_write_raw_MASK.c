
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us5182d_data {int lock; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;

 struct us5182d_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct us5182d_data*,int) ;
 int* VAR_1 ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_2,
        struct iio_chan_spec const *VAR_3, int VAR_4,
        int VAR_5, long VAR_6)
{
 struct us5182d_data *VAR_7 = FUNC_1(VAR_2);
 int VAR_8, VAR_9;

 switch (VAR_6) {
 case 128:
  if (VAR_4 != 0)
   return -VAR_0;
  for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_1); VAR_9++)
   if (VAR_5 == VAR_1[VAR_9]) {
    FUNC_2(&VAR_7->lock);
    VAR_8 = FUNC_4(VAR_7, VAR_9);
    FUNC_3(&VAR_7->lock);
    return VAR_8;
   }
  break;
 default:
  return -VAR_0;
 }

 return -VAR_0;
}
