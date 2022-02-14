
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;
struct apds9960_data {int dummy; } ;


 int VAR_0 ;




 int FUNC_0 (struct apds9960_data*,int) ;
 int FUNC_1 (struct apds9960_data*,int) ;
 int FUNC_2 (struct apds9960_data*,int) ;
 struct apds9960_data* FUNC_3 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_1,
        struct iio_chan_spec const *VAR_2,
        int VAR_3, int VAR_4, long VAR_5)
{
 struct apds9960_data *VAR_6 = FUNC_3(VAR_1);

 switch (VAR_5) {
 case 131:

  switch (VAR_2->type) {
  case 129:
   if (VAR_3 != 0)
    return -VAR_0;
   return FUNC_1(VAR_6, VAR_4);
  default:
   return -VAR_0;
  }
 case 130:
  if (VAR_4 != 0)
   return -VAR_0;
  switch (VAR_2->type) {
  case 128:
   return FUNC_2(VAR_6, VAR_3);
  case 129:
   return FUNC_0(VAR_6, VAR_3);
  default:
   return -VAR_0;
  }
 default:
  return -VAR_0;
 };

 return 0;
}
