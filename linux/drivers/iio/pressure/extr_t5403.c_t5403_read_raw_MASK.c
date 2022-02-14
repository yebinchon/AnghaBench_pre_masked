
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t5403_data {size_t mode; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 struct t5403_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct t5403_data*,int*,int*) ;
 int FUNC_2 (struct t5403_data*,int*) ;
 int* VAR_3 ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_4,
     struct iio_chan_spec const *VAR_5,
     int *VAR_6, int *VAR_7, long VAR_8)
{
 struct t5403_data *VAR_9 = FUNC_0(VAR_4);
 int VAR_10;

 switch (VAR_8) {
 case 130:
  switch (VAR_5->type) {
  case 129:
   VAR_10 = FUNC_1(VAR_9, VAR_6, VAR_7);
   if (VAR_10 < 0)
    return VAR_10;
   return VAR_2;
  case 128:
   VAR_10 = FUNC_2(VAR_9, VAR_6);
   if (VAR_10 < 0)
    return VAR_10;
   return VAR_1;
  default:
   return -VAR_0;
     }
 case 131:
  *VAR_6 = 0;
  *VAR_7 = VAR_3[VAR_9->mode] * 1000;
  return VAR_2;
 default:
  return -VAR_0;
 }
}
