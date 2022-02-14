
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {TYPE_1__* groups; } ;
struct wacom {TYPE_2__ led; } ;
struct kobject {int parent; } ;
struct kobj_attribute {int dummy; } ;
struct hid_device {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {int select; } ;


 struct wacom* FUNC_0 (struct hid_device*) ;
 struct device* FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int) ;
 struct hid_device* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct kobject *VAR_0,
          struct kobj_attribute *VAR_1,
          char *VAR_2, int VAR_3)
{
 struct device *VAR_4 = FUNC_1(VAR_0->parent);
 struct hid_device *VAR_5 = FUNC_3(VAR_4);
 struct wacom *VAR_6 = FUNC_0(VAR_5);
 u8 VAR_7;

 VAR_7 = VAR_6->led.groups[VAR_3].select;
 return FUNC_2(VAR_2, "%d\n", VAR_7 < 3 ? VAR_7 : -1);
}
