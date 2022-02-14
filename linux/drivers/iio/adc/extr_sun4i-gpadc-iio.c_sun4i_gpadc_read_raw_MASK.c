
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; int channel; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct iio_dev*,int ,int*) ;
 int FUNC_1 (struct iio_dev*,int*) ;
 int FUNC_2 (struct iio_dev*,int*) ;
 int FUNC_3 (struct iio_dev*,int*) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_4,
    struct iio_chan_spec const *VAR_5, int *VAR_6,
    int *VAR_7, long VAR_8)
{
 int VAR_9;

 switch (VAR_8) {
 case 130:
  VAR_9 = FUNC_1(VAR_4, VAR_6);
  if (VAR_9)
   return VAR_9;

  return VAR_1;
 case 129:
  if (VAR_5->type == VAR_3)
   VAR_9 = FUNC_0(VAR_4, VAR_5->channel,
         VAR_6);
  else
   VAR_9 = FUNC_2(VAR_4, VAR_6);

  if (VAR_9)
   return VAR_9;

  return VAR_1;
 case 128:
  if (VAR_5->type == VAR_3) {

   *VAR_6 = 0;
   *VAR_7 = 732421875;
   return VAR_2;
  }

  VAR_9 = FUNC_3(VAR_4, VAR_6);
  if (VAR_9)
   return VAR_9;

  return VAR_1;
 default:
  return -VAR_0;
 }

 return -VAR_0;
}
