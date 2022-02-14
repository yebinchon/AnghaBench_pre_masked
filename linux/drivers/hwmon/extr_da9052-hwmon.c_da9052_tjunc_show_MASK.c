
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct da9052_hwmon {int da9052; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 struct da9052_hwmon* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
     struct device_attribute *VAR_3, char *VAR_4)
{
 struct da9052_hwmon *VAR_5 = FUNC_1(VAR_2);
 int VAR_6;
 int VAR_7;

 VAR_6 = FUNC_0(VAR_5->da9052, VAR_0);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_7 = FUNC_0(VAR_5->da9052, VAR_1);
 if (VAR_7 < 0)
  return VAR_7;





 return FUNC_2(VAR_4, "%d\n", 1708 * (VAR_6 - VAR_7) - 108800);
}
