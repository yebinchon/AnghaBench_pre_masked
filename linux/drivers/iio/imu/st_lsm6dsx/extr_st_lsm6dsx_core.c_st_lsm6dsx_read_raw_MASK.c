
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_lsm6dsx_sensor {int odr; int gain; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int address; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*) ;
 struct st_lsm6dsx_sensor* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct st_lsm6dsx_sensor*,int ,int*) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_3,
          struct iio_chan_spec const *VAR_4,
          int *VAR_5, int *VAR_6, long VAR_7)
{
 struct st_lsm6dsx_sensor *VAR_8 = FUNC_2(VAR_3);
 int VAR_9;

 switch (VAR_7) {
 case 130:
  VAR_9 = FUNC_0(VAR_3);
  if (VAR_9)
   break;

  VAR_9 = FUNC_3(VAR_8, VAR_4->address, VAR_5);
  FUNC_1(VAR_3);
  break;
 case 129:
  *VAR_5 = VAR_8->odr;
  VAR_9 = VAR_1;
  break;
 case 128:
  *VAR_5 = 0;
  *VAR_6 = VAR_8->gain;
  VAR_9 = VAR_2;
  break;
 default:
  VAR_9 = -VAR_0;
  break;
 }

 return VAR_9;
}
