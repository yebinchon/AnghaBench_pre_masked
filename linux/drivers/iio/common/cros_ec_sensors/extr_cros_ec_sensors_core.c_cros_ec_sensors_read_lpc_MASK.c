
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iio_dev {int dummy; } ;
struct cros_ec_sensors_core_state {struct cros_ec_device* ec; } ;
struct cros_ec_device {int dummy; } ;
typedef int s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cros_ec_device*,int ,int*) ;
 int FUNC_1 (struct iio_dev*,unsigned long,int *) ;
 int FUNC_2 (struct cros_ec_sensors_core_state*) ;
 struct cros_ec_sensors_core_state* FUNC_3 (struct iio_dev*) ;

int FUNC_4(struct iio_dev *VAR_4,
        unsigned long VAR_5, s16 *VAR_6)
{
 struct cros_ec_sensors_core_state *VAR_7 = FUNC_3(VAR_4);
 struct cros_ec_device *VAR_8 = VAR_7->ec;
 u8 VAR_9 = 0xff, VAR_10 = 0;
 int VAR_11, VAR_12 = 0;







 while ((VAR_10 & (VAR_1 |
     VAR_2)) != VAR_9) {

  if (VAR_12++ >= 5)
   return -VAR_3;


  VAR_11 = FUNC_2(VAR_7);
  if (VAR_11 < 0)
   return VAR_11;





  VAR_9 = VAR_11 & VAR_2;


  VAR_11 = FUNC_1(VAR_4, VAR_5,
             VAR_6);
  if (VAR_11 < 0)
   return VAR_11;


  VAR_11 = FUNC_0(VAR_8, VAR_0,
        &VAR_10);
  if (VAR_11 < 0)
   return VAR_11;
 }

 return 0;
}
