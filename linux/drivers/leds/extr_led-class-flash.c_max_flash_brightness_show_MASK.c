
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max; } ;
struct led_classdev_flash {TYPE_1__ brightness; } ;
struct led_classdev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct led_classdev* FUNC_0 (struct device*) ;
 struct led_classdev_flash* FUNC_1 (struct led_classdev*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
  struct device_attribute *VAR_1, char *VAR_2)
{
 struct led_classdev *VAR_3 = FUNC_0(VAR_0);
 struct led_classdev_flash *VAR_4 = FUNC_1(VAR_3);

 return FUNC_2(VAR_2, "%u\n", VAR_4->brightness.max);
}
