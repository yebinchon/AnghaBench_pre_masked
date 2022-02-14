
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {int led_access; int set_brightness_work; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 unsigned long VAR_1 ;
 struct led_classdev* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 size_t FUNC_2 (char const*,int,unsigned long*) ;
 int FUNC_3 (struct led_classdev*,unsigned long) ;
 scalar_t__ FUNC_4 (struct led_classdev*) ;
 int FUNC_5 (struct led_classdev*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_2,
  struct device_attribute *VAR_3, const char *VAR_4, size_t VAR_5)
{
 struct led_classdev *VAR_6 = FUNC_0(VAR_2);
 unsigned long VAR_7;
 ssize_t VAR_8;

 FUNC_6(&VAR_6->led_access);

 if (FUNC_4(VAR_6)) {
  VAR_8 = -VAR_0;
  goto unlock;
 }

 VAR_8 = FUNC_2(VAR_4, 10, &VAR_7);
 if (VAR_8)
  goto unlock;

 if (VAR_7 == VAR_1)
  FUNC_5(VAR_6);
 FUNC_3(VAR_6, VAR_7);
 FUNC_1(&VAR_6->set_brightness_work);

 VAR_8 = VAR_5;
unlock:
 FUNC_7(&VAR_6->led_access);
 return VAR_8;
}
