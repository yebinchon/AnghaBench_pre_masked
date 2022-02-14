
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;
struct fxas21002c_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;





 int FUNC_0 (struct fxas21002c_data*,int) ;
 int FUNC_1 (struct fxas21002c_data*,int) ;
 int FUNC_2 (struct fxas21002c_data*,int) ;
 int FUNC_3 (struct fxas21002c_data*,int) ;
 struct fxas21002c_data* FUNC_4 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_2,
    struct iio_chan_spec const *VAR_3, int VAR_4,
    int VAR_5, long VAR_6)
{
 struct fxas21002c_data *VAR_7 = FUNC_4(VAR_2);
 int VAR_8;

 switch (VAR_6) {
 case 129:
  if (VAR_5)
   return -VAR_0;

  return FUNC_2(VAR_7, VAR_4);
 case 130:
  if (VAR_4)
   return -VAR_0;

  VAR_5 = VAR_5 / 10000;
  return FUNC_1(VAR_7, VAR_5);
 case 128:
  switch (VAR_3->type) {
  case 132:
   VAR_8 = (((VAR_4 * 1000 + VAR_5 / 1000) *
      VAR_1) / 1000);
   return FUNC_3(VAR_7, VAR_8);
  default:
   return -VAR_0;
  }
 case 131:
  return FUNC_0(VAR_7, VAR_5);
 default:
  return -VAR_0;
 }
}
