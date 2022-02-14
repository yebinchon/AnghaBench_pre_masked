
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ms_ht_dev {int res_index; int lock; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;

 int* VAR_1 ;
 struct ms_ht_dev* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct ms_ht_dev*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_2,
      struct iio_chan_spec const *VAR_3,
      int VAR_4, int VAR_5, long VAR_6)
{
 struct ms_ht_dev *VAR_7 = FUNC_1(VAR_2);
 int VAR_8, VAR_9;

 switch (VAR_6) {
 case 128:
  VAR_8 = FUNC_0(VAR_1);
  while (VAR_8-- > 0)
   if (VAR_4 == VAR_1[VAR_8])
    break;
  if (VAR_8 < 0)
   return -VAR_0;
  FUNC_3(&VAR_7->lock);
  VAR_7->res_index = VAR_8;
  VAR_9 = FUNC_2(VAR_7, VAR_8);
  FUNC_4(&VAR_7->lock);

  return VAR_9;
 default:
  return -VAR_0;
 }
}
