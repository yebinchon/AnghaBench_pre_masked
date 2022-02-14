
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sx9500_data {int dummy; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;


 int VAR_0 ;


 struct sx9500_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct sx9500_data*,int,int) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_1,
       const struct iio_chan_spec *VAR_2,
       int VAR_3, int VAR_4, long VAR_5)
{
 struct sx9500_data *VAR_6 = FUNC_0(VAR_1);

 switch (VAR_2->type) {
 case 128:
  switch (VAR_5) {
  case 129:
   return FUNC_1(VAR_6, VAR_3, VAR_4);
  default:
   return -VAR_0;
  }
 default:
  return -VAR_0;
 }
}
