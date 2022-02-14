
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int mlock; } ;
struct iio_chan_spec {int dummy; } ;


 int VAR_0 ;

 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct iio_dev*,int) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_1,
         struct iio_chan_spec const *VAR_2,
         int VAR_3,
         int VAR_4,
         long VAR_5)
{
 int VAR_6;

 switch (VAR_5) {
 case 128:
  if (VAR_4)
   return -VAR_0;
  FUNC_0(&VAR_1->mlock);
  VAR_6 = FUNC_2(VAR_1, VAR_3);
  FUNC_1(&VAR_1->mlock);
  return VAR_6;
 default:
  return -VAR_0;
 }
}
