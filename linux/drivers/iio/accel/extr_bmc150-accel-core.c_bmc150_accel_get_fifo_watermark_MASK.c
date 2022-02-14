
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct bmc150_accel_data {int watermark; int mutex; } ;
typedef int ssize_t ;


 struct iio_dev* FUNC_0 (struct device*) ;
 struct bmc150_accel_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
            struct device_attribute *VAR_1,
            char *VAR_2)
{
 struct iio_dev *VAR_3 = FUNC_0(VAR_0);
 struct bmc150_accel_data *VAR_4 = FUNC_1(VAR_3);
 int VAR_5;

 FUNC_2(&VAR_4->mutex);
 VAR_5 = VAR_4->watermark;
 FUNC_3(&VAR_4->mutex);

 return FUNC_4(VAR_2, "%d\n", VAR_5);
}
