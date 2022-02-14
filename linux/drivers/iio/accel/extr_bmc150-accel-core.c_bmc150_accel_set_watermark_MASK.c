
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct bmc150_accel_data {unsigned int watermark; int mutex; } ;


 unsigned int VAR_0 ;
 struct bmc150_accel_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_1, unsigned VAR_2)
{
 struct bmc150_accel_data *VAR_3 = FUNC_0(VAR_1);

 if (VAR_2 > VAR_0)
  VAR_2 = VAR_0;

 FUNC_1(&VAR_3->mutex);
 VAR_3->watermark = VAR_2;
 FUNC_2(&VAR_3->mutex);

 return 0;
}
