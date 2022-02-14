
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel; int type; } ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (struct iio_dev*,int,int*) ;
 int FUNC_1 (struct iio_dev*,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_2,
    struct iio_chan_spec const *VAR_3,
    int *VAR_4, int *VAR_5, long VAR_6)
{
 int VAR_7;

 switch (VAR_6) {
 case 130:
  switch (VAR_3->type) {
  case 128:
   VAR_7 = FUNC_0(VAR_2, 0, VAR_4);
   break;
  case 129:
   VAR_7 = FUNC_1(VAR_2, VAR_3->channel,
         VAR_4);
   break;
  default:
   return -VAR_0;
  }
  break;
 case 131:
  VAR_7 = FUNC_0(VAR_2, 1, VAR_4);
  break;
 default:
  return -VAR_0;
 }

 if (VAR_7)
  return VAR_7;

 return VAR_1;
}
