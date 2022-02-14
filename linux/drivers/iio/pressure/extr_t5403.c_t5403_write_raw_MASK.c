
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t5403_data {int mode; int lock; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;

 struct t5403_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int* VAR_1 ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_2,
      struct iio_chan_spec const *VAR_3,
      int VAR_4, int VAR_5, long VAR_6)
{
 struct t5403_data *VAR_7 = FUNC_1(VAR_2);
 int VAR_8;

 switch (VAR_6) {
 case 128:
  if (VAR_4 != 0)
   return -VAR_0;
  for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_1); VAR_8++)
   if (VAR_5 == VAR_1[VAR_8] * 1000) {
    FUNC_2(&VAR_7->lock);
    VAR_7->mode = VAR_8;
    FUNC_3(&VAR_7->lock);
    return 0;
   }
  return -VAR_0;
 default:
  return -VAR_0;
 }
}
