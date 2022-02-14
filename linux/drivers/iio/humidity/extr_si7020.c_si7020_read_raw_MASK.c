
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 struct i2c_client** FUNC_2 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_7,
      struct iio_chan_spec const *VAR_8, int *VAR_9,
      int *VAR_10, long VAR_11)
{
 struct i2c_client **VAR_12 = FUNC_2(VAR_7);
 int VAR_13;

 switch (VAR_11) {
 case 129:
  VAR_13 = FUNC_1(*VAR_12,
        VAR_8->type == VAR_2 ?
        VAR_6 :
        VAR_5);
  if (VAR_13 < 0)
   return VAR_13;
  *VAR_9 = VAR_13 >> 2;




  if (VAR_8->type == VAR_1)
   *VAR_9 = FUNC_0(*VAR_9, 786, 13893);
  return VAR_4;
 case 128:
  if (VAR_8->type == VAR_2)
   *VAR_9 = 175720;
  else
   *VAR_9 = 125 * 1000;
  *VAR_10 = 65536 >> 2;
  return VAR_3;
 case 130:
  if (VAR_8->type == VAR_2)
   *VAR_9 = -4368;
  else
   *VAR_9 = -786;
  return VAR_4;
 default:
  break;
 }

 return -VAR_0;
}
