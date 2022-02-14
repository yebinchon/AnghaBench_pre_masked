
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct da9052_hwmon {int hwmon_lock; int da9052; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 struct da9052_hwmon* FUNC_3 (struct device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_1,
      struct device_attribute *VAR_2, char *VAR_3)
{
 struct da9052_hwmon *VAR_4 = FUNC_3(VAR_1);
 int VAR_5, VAR_6;

 FUNC_4(&VAR_4->hwmon_lock);

 VAR_5 = FUNC_1(VAR_4->da9052);
 if (VAR_5 < 0)
  goto hwmon_err;

 VAR_6 = FUNC_2(VAR_4->da9052, VAR_0);
 if (VAR_6 < 0) {
  VAR_5 = VAR_6;
  goto hwmon_err_release;
 }

 VAR_5 = FUNC_0(VAR_4->da9052);
 if (VAR_5 < 0)
  goto hwmon_err;

 FUNC_5(&VAR_4->hwmon_lock);
 return FUNC_6(VAR_3, "%d\n", FUNC_7(VAR_6));

hwmon_err_release:
 FUNC_0(VAR_4->da9052);
hwmon_err:
 FUNC_5(&VAR_4->hwmon_lock);
 return VAR_5;
}
