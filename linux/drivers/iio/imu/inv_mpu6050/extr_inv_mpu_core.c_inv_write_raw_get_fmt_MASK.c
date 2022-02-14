
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct iio_dev *VAR_3,
     struct iio_chan_spec const *VAR_4, long VAR_5)
{
 switch (VAR_5) {
 case 128:
  switch (VAR_4->type) {
  case 129:
   return VAR_2;
  default:
   return VAR_1;
  }
 default:
  return VAR_1;
 }

 return -VAR_0;
}
