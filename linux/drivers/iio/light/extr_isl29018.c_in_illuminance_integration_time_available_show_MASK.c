
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isl29018_chip {size_t type; } ;
struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 unsigned int FUNC_0 (int*) ;
 struct iio_dev* FUNC_1 (struct device*) ;
 struct isl29018_chip* FUNC_2 (struct iio_dev*) ;
 int** VAR_0 ;
 scalar_t__ FUNC_3 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_4
   (struct device *VAR_1, struct device_attribute *VAR_2,
    char *VAR_3)
{
 struct iio_dev *VAR_4 = FUNC_1(VAR_1);
 struct isl29018_chip *VAR_5 = FUNC_2(VAR_4);
 unsigned int VAR_6;
 int VAR_7 = 0;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_0[VAR_5->type]); ++VAR_6)
  VAR_7 += FUNC_3(VAR_3 + VAR_7, "0.%06d ",
          VAR_0[VAR_5->type][VAR_6]);

 VAR_3[VAR_7 - 1] = '\n';

 return VAR_7;
}
