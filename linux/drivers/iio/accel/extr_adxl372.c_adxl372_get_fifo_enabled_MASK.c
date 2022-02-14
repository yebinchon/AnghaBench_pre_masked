
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adxl372_state {int fifo_mode; } ;
typedef int ssize_t ;


 struct iio_dev* FUNC_0 (struct device*) ;
 struct adxl372_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
       struct device_attribute *VAR_1,
       char *VAR_2)
{
 struct iio_dev *VAR_3 = FUNC_0(VAR_0);
 struct adxl372_state *VAR_4 = FUNC_1(VAR_3);

 return FUNC_2(VAR_2, "%d\n", VAR_4->fifo_mode);
}
