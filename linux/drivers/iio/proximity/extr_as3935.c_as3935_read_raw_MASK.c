
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct as3935_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int FUNC_0 (struct as3935_state*,int ,int*) ;
 struct as3935_state* FUNC_1 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_4,
      struct iio_chan_spec const *VAR_5,
      int *VAR_6,
      int *VAR_7,
      long VAR_8)
{
 struct as3935_state *VAR_9 = FUNC_1(VAR_4);
 int VAR_10;


 switch (VAR_8) {
 case 130:
 case 129:
  *VAR_7 = 0;
  VAR_10 = FUNC_0(VAR_9, VAR_0, VAR_6);
  if (VAR_10)
   return VAR_10;


  if (*VAR_6 == VAR_1)
   return -VAR_2;

  if (VAR_8 == 129)
   return VAR_3;

  if (VAR_8 == 130)
   *VAR_6 *= 1000;
  break;
 case 128:
  *VAR_6 = 1000;
  break;
 default:
  return -VAR_2;
 }

 return VAR_3;
}
