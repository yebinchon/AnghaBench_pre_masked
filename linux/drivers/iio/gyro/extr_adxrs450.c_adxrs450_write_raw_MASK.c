
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (struct iio_dev*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_2,
         struct iio_chan_spec const *VAR_3,
         int VAR_4,
         int VAR_5,
         long VAR_6)
{
 int VAR_7;
 switch (VAR_6) {
 case 128:
  if (VAR_4 < -0x400 || VAR_4 >= 0x400)
   return -VAR_1;
  VAR_7 = FUNC_0(VAR_2,
      VAR_0, VAR_4);
  break;
 default:
  VAR_7 = -VAR_1;
  break;
 }
 return VAR_7;
}
