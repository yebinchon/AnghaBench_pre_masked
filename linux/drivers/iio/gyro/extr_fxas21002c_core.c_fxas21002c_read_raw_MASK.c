
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; int scan_index; } ;
struct fxas21002c_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;







 int VAR_2 ;
 int FUNC_0 (struct fxas21002c_data*,int ,int*) ;
 int FUNC_1 (struct fxas21002c_data*,int*) ;
 int FUNC_2 (struct fxas21002c_data*,int*) ;
 int FUNC_3 (struct fxas21002c_data*,int*) ;
 int FUNC_4 (struct fxas21002c_data*,int*) ;
 int FUNC_5 (struct fxas21002c_data*,int*) ;
 struct fxas21002c_data* FUNC_6 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_3,
          struct iio_chan_spec const *VAR_4, int *VAR_5,
          int *VAR_6, long VAR_7)
{
 struct fxas21002c_data *VAR_8 = FUNC_6(VAR_3);
 int VAR_9;

 switch (VAR_7) {
 case 131:
  switch (VAR_4->type) {
  case 128:
   return FUNC_5(VAR_8, VAR_5);
  case 134:
   return FUNC_0(VAR_8, VAR_4->scan_index, VAR_5);
  default:
   return -VAR_0;
  }
 case 129:
  switch (VAR_4->type) {
  case 134:
   *VAR_6 = VAR_1;
   VAR_9 = FUNC_4(VAR_8, VAR_5);
   if (VAR_9 < 0)
    return VAR_9;

   return VAR_2;
  default:
   return -VAR_0;
  }
 case 132:
  *VAR_5 = 0;
  return FUNC_2(VAR_8, VAR_6);
 case 133:
  *VAR_5 = 0;
  return FUNC_1(VAR_8, VAR_6);
 case 130:
  *VAR_6 = 0;
  return FUNC_3(VAR_8, VAR_5);
 default:
  return -VAR_0;
 }
}
