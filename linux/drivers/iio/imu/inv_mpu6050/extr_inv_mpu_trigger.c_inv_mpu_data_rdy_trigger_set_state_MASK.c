
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inv_mpu6050_state {int lock; } ;
struct iio_trigger {int dummy; } ;
struct iio_dev {int dummy; } ;


 struct inv_mpu6050_state* FUNC_0 (struct iio_dev*) ;
 struct iio_dev* FUNC_1 (struct iio_trigger*) ;
 int FUNC_2 (struct iio_dev*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct iio_trigger *VAR_0,
           bool VAR_1)
{
 struct iio_dev *VAR_2 = FUNC_1(VAR_0);
 struct inv_mpu6050_state *VAR_3 = FUNC_0(VAR_2);
 int VAR_4;

 FUNC_3(&VAR_3->lock);
 VAR_4 = FUNC_2(VAR_2, VAR_1);
 FUNC_4(&VAR_3->lock);

 return VAR_4;
}
