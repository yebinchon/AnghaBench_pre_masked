
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adxl372_state {int odr; } ;
typedef size_t ssize_t ;


 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 struct adxl372_state* FUNC_1 (struct iio_dev*) ;
 scalar_t__ FUNC_2 (char*,scalar_t__,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
           struct device_attribute *VAR_3,
           char *VAR_4)
{
 struct iio_dev *VAR_5 = FUNC_0(VAR_2);
 struct adxl372_state *VAR_6 = FUNC_1(VAR_5);
 int VAR_7;
 size_t VAR_8 = 0;

 for (VAR_7 = 0; VAR_7 <= VAR_6->odr; VAR_7++)
  VAR_8 += FUNC_2(VAR_4 + VAR_8, VAR_0 - VAR_8,
     "%d ", VAR_1[VAR_7]);

 VAR_4[VAR_8 - 1] = '\n';

 return VAR_8;
}
