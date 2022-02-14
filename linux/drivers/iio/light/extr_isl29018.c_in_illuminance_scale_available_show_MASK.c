
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct isl29018_chip {size_t int_time; int lock; } ;
struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {int scale; int uscale; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 struct iio_dev* FUNC_1 (struct device*) ;
 struct isl29018_chip* FUNC_2 (struct iio_dev*) ;
 TYPE_1__** VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char*,char*,int,int) ;

__attribute__((used)) static ssize_t FUNC_6
   (struct device *VAR_1, struct device_attribute *VAR_2,
    char *VAR_3)
{
 struct iio_dev *VAR_4 = FUNC_1(VAR_1);
 struct isl29018_chip *VAR_5 = FUNC_2(VAR_4);
 unsigned int VAR_6;
 int VAR_7 = 0;

 FUNC_3(&VAR_5->lock);
 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_0[VAR_5->int_time]); ++VAR_6)
  VAR_7 += FUNC_5(VAR_3 + VAR_7, "%d.%06d ",
          VAR_0[VAR_5->int_time][VAR_6].scale,
          VAR_0[VAR_5->int_time][VAR_6].uscale);
 FUNC_4(&VAR_5->lock);

 VAR_3[VAR_7 - 1] = '\n';

 return VAR_7;
}
