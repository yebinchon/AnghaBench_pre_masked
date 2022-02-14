
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
 size_t VAR_1 ;
 struct led_classdev* FUNC_0 (struct device*) ;
 size_t FUNC_1 (char const*,int,unsigned long*) ;
 struct led_classdev_flash* FUNC_2 (struct led_classdev*) ;
 size_t FUNC_3 (struct led_classdev_flash*,unsigned long) ;
 scalar_t__ FUNC_4 (struct led_classdev*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_2,
  struct device_attribute *VAR_3, const char *VAR_4, size_t VAR_5)
{
 struct led_classdev *VAR_6 = FUNC_0(VAR_2);
 struct led_classdev_flash *VAR_7 = FUNC_2(VAR_6);
 unsigned long VAR_8;
 ssize_t VAR_9 = -VAR_1;

 FUNC_5(&VAR_6->led_access);

 if (FUNC_4(VAR_6)) {
  VAR_9 = -VAR_0;
  goto unlock;
 }

 VAR_9 = FUNC_1(VAR_4, 10, &VAR_8);
 if (VAR_9)
  goto unlock;

 if (VAR_8 > 1) {
  VAR_9 = -VAR_1;
  goto unlock;
 }

 VAR_9 = FUNC_3(VAR_7, VAR_8);
 if (VAR_9 < 0)
  goto unlock;
 VAR_9 = VAR_5;
unlock:
 FUNC_6(&VAR_6->led_access);
 return VAR_9;
}
