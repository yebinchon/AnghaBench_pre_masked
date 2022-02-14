
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vl6180_data {int als_it_ms; int als_gain_milli; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; int address; } ;


 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct vl6180_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct vl6180_data*,int ) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_4,
    struct iio_chan_spec const *VAR_5,
    int *VAR_6, int *VAR_7, long VAR_8)
{
 struct vl6180_data *VAR_9 = FUNC_0(VAR_4);
 int VAR_10;

 switch (VAR_8) {
 case 131:
  VAR_10 = FUNC_1(VAR_9, VAR_5->address);
  if (VAR_10 < 0)
   return VAR_10;
  *VAR_6 = VAR_10;

  return VAR_2;
 case 132:
  *VAR_6 = VAR_9->als_it_ms;
  *VAR_7 = 1000;

  return VAR_1;

 case 130:
  switch (VAR_5->type) {
  case 128:

   *VAR_6 = 32000;
   *VAR_7 = VAR_9->als_gain_milli * VAR_9->als_it_ms;

   return VAR_1;

  case 129:
   *VAR_6 = 0;
   *VAR_7 = 1000;
   break;
  default:
   return -VAR_0;
  }

  return VAR_3;
 case 133:
  *VAR_6 = VAR_9->als_gain_milli;
  *VAR_7 = 1000;

  return VAR_1;

 default:
  return -VAR_0;
 }
}
