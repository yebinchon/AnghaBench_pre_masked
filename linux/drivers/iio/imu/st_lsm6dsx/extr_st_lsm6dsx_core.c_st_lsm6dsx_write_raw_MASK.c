
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct st_lsm6dsx_sensor {int odr; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*) ;
 struct st_lsm6dsx_sensor* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct st_lsm6dsx_sensor*,int,int *) ;
 int FUNC_4 (struct st_lsm6dsx_sensor*,int) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_1,
    struct iio_chan_spec const *VAR_2,
    int VAR_3, int VAR_4, long VAR_5)
{
 struct st_lsm6dsx_sensor *VAR_6 = FUNC_2(VAR_1);
 int VAR_7;

 VAR_7 = FUNC_0(VAR_1);
 if (VAR_7)
  return VAR_7;

 switch (VAR_5) {
 case 128:
  VAR_7 = FUNC_4(VAR_6, VAR_4);
  break;
 case 129: {
  u8 VAR_8;

  VAR_7 = FUNC_3(VAR_6, VAR_3, &VAR_8);
  if (!VAR_7)
   VAR_6->odr = VAR_3;
  break;
 }
 default:
  VAR_7 = -VAR_0;
  break;
 }

 FUNC_1(VAR_1);

 return VAR_7;
}
