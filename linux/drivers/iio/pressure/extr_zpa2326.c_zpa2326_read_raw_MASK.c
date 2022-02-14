
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;


 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_4,
       struct iio_chan_spec const *VAR_5,
       int *VAR_6,
       int *VAR_7,
       long VAR_8)
{
 switch (VAR_8) {
 case 132:
  return FUNC_1(VAR_4, VAR_5->type, VAR_6);

 case 130:
  switch (VAR_5->type) {
  case 129:




   *VAR_6 = 1;
   *VAR_7 = 64000;
   return VAR_1;

  case 128:
   *VAR_6 = 6;
   *VAR_7 = 490000;
   return VAR_3;

  default:
   return -VAR_0;
  }

 case 133:
  switch (VAR_5->type) {
  case 128:
   *VAR_6 = -17683000;
   *VAR_7 = 649;
   return VAR_1;

  default:
   return -VAR_0;
  }

 case 131:
  *VAR_6 = FUNC_0(VAR_4);
  return VAR_2;

 default:
  return -VAR_0;
 }
}
