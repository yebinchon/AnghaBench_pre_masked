
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;
typedef int s32 ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (struct iio_dev*,int*) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_2,
      struct iio_chan_spec const *VAR_3, int *VAR_4,
      int *VAR_5, long VAR_6)
{
 int VAR_7;
 s32 VAR_8;

 switch (VAR_6) {
 case 129:
  switch (VAR_3->type) {
  case 128:
   VAR_7 = FUNC_0(VAR_2, &VAR_8);
   if (VAR_7)
    return VAR_7;
   *VAR_4 = VAR_8;

   return VAR_1;
  default:
   return -VAR_0;
  }
 default:
  return -VAR_0;
 }
}
