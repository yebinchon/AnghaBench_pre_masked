
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct bmc150_accel_data {int mutex; } ;


 int FUNC_0 (struct iio_dev*,unsigned int,int) ;
 struct bmc150_accel_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_0, unsigned VAR_1)
{
 struct bmc150_accel_data *VAR_2 = FUNC_1(VAR_0);
 int VAR_3;

 FUNC_2(&VAR_2->mutex);
 VAR_3 = FUNC_0(VAR_0, VAR_1, 0);
 FUNC_3(&VAR_2->mutex);

 return VAR_3;
}
