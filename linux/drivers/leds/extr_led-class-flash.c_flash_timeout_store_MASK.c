
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev_flash {int dummy; } ;
struct led_classdev {int led_access; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 struct led_classdev* FUNC_0 (struct device*) ;
 size_t FUNC_1 (char const*,int,unsigned long*) ;
 struct led_classdev_flash* FUNC_2 (struct led_classdev*) ;
 size_t FUNC_3 (struct led_classdev_flash*,unsigned long) ;
 scalar_t__ FUNC_4 (struct led_classdev*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1,
  struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct led_classdev *VAR_5 = FUNC_0(VAR_1);
 struct led_classdev_flash *VAR_6 = FUNC_2(VAR_5);
 unsigned long VAR_7;
 ssize_t VAR_8;

 FUNC_5(&VAR_5->led_access);

 if (FUNC_4(VAR_5)) {
  VAR_8 = -VAR_0;
  goto unlock;
 }

 VAR_8 = FUNC_1(VAR_3, 10, &VAR_7);
 if (VAR_8)
  goto unlock;

 VAR_8 = FUNC_3(VAR_6, VAR_7);
 if (VAR_8 < 0)
  goto unlock;

 VAR_8 = VAR_4;
unlock:
 FUNC_6(&VAR_5->led_access);
 return VAR_8;
}
