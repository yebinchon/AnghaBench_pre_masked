
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct led_classdev {TYPE_1__* trigger_data; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_3__ {int value; int name; } ;


 int ARRAY_SIZE (TYPE_1__*) ;
 size_t EINVAL ;
 struct led_classdev* dev_get_drvdata (struct device*) ;
 int led_set_brightness (struct led_classdev*,int ) ;
 TYPE_1__* port_states ;
 size_t strlen (int ) ;
 scalar_t__ strncmp (int ,char const*,size_t) ;

__attribute__((used)) static ssize_t led_port_state_store(struct device *dev,
  struct device_attribute *attr, const char *buf, size_t size)
{
 struct led_classdev *led_cdev = dev_get_drvdata(dev);
 size_t len;
 int i;

 for (i = 0; i < ARRAY_SIZE(port_states); i++) {
  len = strlen(port_states[i].name);
  if (strncmp(port_states[i].name, buf, len) != 0)
   continue;

  if (buf[len] != '\0' && buf[len] != '\n')
   continue;

  led_cdev->trigger_data = &port_states[i];
  led_set_brightness(led_cdev, port_states[i].value);
  return size;
 }

 return -EINVAL;
}
