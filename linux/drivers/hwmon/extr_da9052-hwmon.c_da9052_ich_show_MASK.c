
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct da9052_hwmon {int da9052; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ) ;
 struct da9052_hwmon* FUNC_2 (struct device*) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
          struct device_attribute *VAR_2, char *VAR_3)
{
 struct da9052_hwmon *VAR_4 = FUNC_2(VAR_1);
 int VAR_5;

 VAR_5 = FUNC_1(VAR_4->da9052, VAR_0);
 if (VAR_5 < 0)
  return VAR_5;


 return FUNC_3(VAR_3, "%d\n", FUNC_0(VAR_5 * 39, 10));
}
