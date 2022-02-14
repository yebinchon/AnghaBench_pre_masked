
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct da9052_hwmon {int hwmon_lock; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int FUNC_0 (struct device*,int) ;
 struct da9052_hwmon* FUNC_1 (struct device*) ;
 int FUNC_2 (struct da9052_hwmon*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char*,int) ;
 TYPE_1__* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_0,
          struct device_attribute *VAR_1, char *VAR_2)
{
 struct da9052_hwmon *VAR_3 = FUNC_1(VAR_0);
 int VAR_4 = FUNC_6(VAR_1)->index;
 int VAR_5;

 FUNC_3(&VAR_3->hwmon_lock);
 VAR_5 = FUNC_0(VAR_0, VAR_4);
 FUNC_4(&VAR_3->hwmon_lock);

 if (VAR_5 < 0)
  return VAR_5;
 else
  return FUNC_5(VAR_2, "%d\n", FUNC_2(VAR_3, VAR_5));
}
