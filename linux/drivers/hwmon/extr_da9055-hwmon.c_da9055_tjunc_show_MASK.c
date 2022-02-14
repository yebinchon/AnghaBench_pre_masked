
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct da9055_hwmon {int da9055; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct da9055_hwmon*,int ) ;
 int FUNC_2 (int ,int ) ;
 struct da9055_hwmon* FUNC_3 (struct device*) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2,
     struct device_attribute *VAR_3, char *VAR_4)
{
 struct da9055_hwmon *VAR_5 = FUNC_3(VAR_2);
 int VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_5, VAR_0);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_7 = FUNC_2(VAR_5->da9055, VAR_1);
 if (VAR_7 < 0)
  return VAR_7;





 return FUNC_4(VAR_4, "%d\n", FUNC_0(-4084 * (VAR_6 - VAR_7)
       + 3076332, 10000));
}
