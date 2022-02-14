
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isl29018_chip {int prox_scheme; int lock; } ;
struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 struct isl29018_chip* FUNC_1 (struct iio_dev*) ;
 scalar_t__ FUNC_2 (char const*,int,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t FUNC_5
   (struct device *VAR_1, struct device_attribute *VAR_2,
    const char *VAR_3, size_t VAR_4)
{
 struct iio_dev *VAR_5 = FUNC_0(VAR_1);
 struct isl29018_chip *VAR_6 = FUNC_1(VAR_5);
 int VAR_7;

 if (FUNC_2(VAR_3, 10, &VAR_7))
  return -VAR_0;
 if (!(VAR_7 == 0 || VAR_7 == 1))
  return -VAR_0;





 FUNC_3(&VAR_6->lock);
 VAR_6->prox_scheme = VAR_7;
 FUNC_4(&VAR_6->lock);

 return VAR_4;
}
