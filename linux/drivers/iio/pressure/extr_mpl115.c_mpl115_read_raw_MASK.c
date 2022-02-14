
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpl115_data {int dummy; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 struct mpl115_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct mpl115_data*,int*,int*) ;
 int FUNC_2 (struct mpl115_data*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_3,
       struct iio_chan_spec const *VAR_4,
       int *VAR_5, int *VAR_6, long VAR_7)
{
 struct mpl115_data *VAR_8 = FUNC_0(VAR_3);
 int VAR_9;

 switch (VAR_7) {
 case 130:
  VAR_9 = FUNC_1(VAR_8, VAR_5, VAR_6);
  if (VAR_9 < 0)
   return VAR_9;
  return VAR_2;
 case 129:

  VAR_9 = FUNC_2(VAR_8);
  if (VAR_9 < 0)
   return VAR_9;
  *VAR_5 = VAR_9 >> 6;
  return VAR_1;
 case 131:
  *VAR_5 = -605;
  *VAR_6 = 750000;
  return VAR_2;
 case 128:
  *VAR_5 = -186;
  *VAR_6 = 915888;
  return VAR_2;
 }
 return -VAR_0;
}
