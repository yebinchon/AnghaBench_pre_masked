
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct led_classdev {int brightness_set_blocking; int default_trigger; int name; } ;
struct is31fl32xx_led_data {int channel; TYPE_2__* priv; struct led_classdev cdev; } ;
struct device_node {int name; } ;
struct device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* cdef; } ;
struct TYPE_3__ {int channels; } ;


 int VAR_0 ;
 int FUNC_0 (struct device const*,char*,struct device_node const*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct device_node const*,char*,int *) ;
 int FUNC_2 (struct device_node const*,char*,int*) ;

__attribute__((used)) static int FUNC_3(const struct device *VAR_2,
         const struct device_node *VAR_3,
         struct is31fl32xx_led_data *VAR_4)
{
 struct led_classdev *VAR_5 = &VAR_4->cdev;
 int VAR_6 = 0;
 u32 VAR_7;

 if (FUNC_1(VAR_3, "label", &VAR_5->name))
  VAR_5->name = VAR_3->name;

 VAR_6 = FUNC_2(VAR_3, "reg", &VAR_7);
 if (VAR_6 || VAR_7 < 1 || VAR_7 > VAR_4->priv->cdef->channels) {
  FUNC_0(VAR_2,
   "Child node %pOF does not have a valid reg property\n",
   VAR_3);
  return -VAR_0;
 }
 VAR_4->channel = VAR_7;

 FUNC_1(VAR_3, "linux,default-trigger",
    &VAR_5->default_trigger);

 VAR_5->brightness_set_blocking = VAR_1;

 return 0;
}
