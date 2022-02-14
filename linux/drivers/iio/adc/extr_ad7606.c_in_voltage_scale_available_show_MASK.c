
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ad7606_state {int num_scales; int scale_avail; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,int ,int ,int) ;
 struct iio_dev* FUNC_1 (struct device*) ;
 struct ad7606_state* FUNC_2 (struct iio_dev*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
            struct device_attribute *VAR_1,
            char *VAR_2)
{
 struct iio_dev *VAR_3 = FUNC_1(VAR_0);
 struct ad7606_state *VAR_4 = FUNC_2(VAR_3);

 return FUNC_0(VAR_2, VAR_4->scale_avail, VAR_4->num_scales, 1);
}
