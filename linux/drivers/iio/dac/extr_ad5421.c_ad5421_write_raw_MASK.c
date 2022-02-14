
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (struct iio_dev*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_4,
 struct iio_chan_spec const *VAR_5, int VAR_6, int VAR_7, long VAR_8)
{
 const unsigned int VAR_9 = 1 << 16;

 switch (VAR_8) {
 case 128:
  if (VAR_6 >= VAR_9 || VAR_6 < 0)
   return -VAR_3;

  return FUNC_0(VAR_4, VAR_0, VAR_6);
 case 130:
  VAR_6 += 32768;
  if (VAR_6 >= VAR_9 || VAR_6 < 0)
   return -VAR_3;

  return FUNC_0(VAR_4, VAR_2, VAR_6);
 case 129:
  if (VAR_6 >= VAR_9 || VAR_6 < 0)
   return -VAR_3;

  return FUNC_0(VAR_4, VAR_1, VAR_6);
 default:
  break;
 }

 return -VAR_3;
}
