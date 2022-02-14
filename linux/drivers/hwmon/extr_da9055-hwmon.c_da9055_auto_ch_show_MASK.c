
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct da9055_hwmon {int hwmon_lock; int da9055; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,scalar_t__) ;
 struct da9055_hwmon* FUNC_3 (struct device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,char*,int) ;
 TYPE_1__* FUNC_7 (struct device_attribute*) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int,int) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_1,
       struct device_attribute *VAR_2,
       char *VAR_3)
{
 struct da9055_hwmon *VAR_4 = FUNC_3(VAR_1);
 int VAR_5, VAR_6;
 int VAR_7 = FUNC_7(VAR_2)->index;

 FUNC_4(&VAR_4->hwmon_lock);

 VAR_5 = FUNC_1(VAR_4->da9055, VAR_7);
 if (VAR_5 < 0)
  goto hwmon_err;

 FUNC_8(10000, 10500);

 VAR_6 = FUNC_2(VAR_4->da9055, VAR_0 + VAR_7);
 if (VAR_6 < 0) {
  VAR_5 = VAR_6;
  goto hwmon_err_release;
 }

 VAR_5 = FUNC_0(VAR_4->da9055, VAR_7);
 if (VAR_5 < 0)
  goto hwmon_err;

 FUNC_5(&VAR_4->hwmon_lock);

 return FUNC_6(VAR_3, "%d\n", FUNC_9(VAR_6, VAR_7));

hwmon_err_release:
 FUNC_0(VAR_4->da9055, VAR_7);
hwmon_err:
 FUNC_5(&VAR_4->hwmon_lock);
 return VAR_5;
}
