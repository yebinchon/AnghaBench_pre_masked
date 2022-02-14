
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm3533_als {scalar_t__ irq; } ;
struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 struct lm3533_als* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*,int*) ;
 int FUNC_3 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
     struct device_attribute *VAR_2,
     char *VAR_3)
{
 struct iio_dev *VAR_4 = FUNC_0(VAR_1);
 struct lm3533_als *VAR_5 = FUNC_1(VAR_4);
 int VAR_6;
 int VAR_7;

 if (VAR_5->irq) {
  VAR_7 = FUNC_2(VAR_4, &VAR_6);
  if (VAR_7)
   return VAR_7;
 } else {
  VAR_6 = 0;
 }

 return FUNC_3(VAR_3, VAR_0, "%u\n", VAR_6);
}
