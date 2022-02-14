
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
 int FUNC_0 (struct iio_dev*,int ) ;
 int FUNC_1 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_4,
    struct iio_chan_spec const *VAR_5, int *VAR_6,
    int *VAR_7, long VAR_8)
{
 int VAR_9;

 switch (VAR_8) {
 case 128:
  if (VAR_5->type != VAR_3)
   return -VAR_0;

  *VAR_6 = FUNC_0(VAR_4, VAR_5->channel);
  if (*VAR_6 < 0)
   return *VAR_6;

  return VAR_2;
 case 129:
  if (VAR_5->type != VAR_1)
   return -VAR_0;

  VAR_9 = FUNC_1(VAR_4);
  if (VAR_9 < 0)
   return VAR_9;

  if (VAR_9 > 2047)
   VAR_9 -= 4096;


  *VAR_6 = ((VAR_9 * 100000) / 264 - 270000);
  return VAR_2;
 default:
  break;
 }

 return -VAR_0;
}
