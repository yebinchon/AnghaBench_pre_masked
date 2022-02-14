
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {int default_trigger; int name; } ;
struct is31fl319x_led {scalar_t__ max_microamp; struct led_classdev cdev; } ;
struct device_node {int name; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct device_node const*,char*,int *) ;
 int FUNC_2 (struct device_node const*,char*,scalar_t__*) ;

__attribute__((used)) static int FUNC_3(const struct device *VAR_4,
         const struct device_node *VAR_5,
         struct is31fl319x_led *VAR_6)
{
 struct led_classdev *VAR_7 = &VAR_6->cdev;
 int VAR_8;

 if (FUNC_1(VAR_5, "label", &VAR_7->name))
  VAR_7->name = VAR_5->name;

 VAR_8 = FUNC_1(VAR_5, "linux,default-trigger",
          &VAR_7->default_trigger);
 if (VAR_8 < 0 && VAR_8 != -VAR_0)
  return VAR_8;

 VAR_6->max_microamp = VAR_1;
 VAR_8 = FUNC_2(VAR_5, "led-max-microamp",
       &VAR_6->max_microamp);
 if (!VAR_8) {
  if (VAR_6->max_microamp < VAR_3)
   return -VAR_0;
  VAR_6->max_microamp = FUNC_0(VAR_6->max_microamp,
       VAR_2);
 }

 return 0;
}
