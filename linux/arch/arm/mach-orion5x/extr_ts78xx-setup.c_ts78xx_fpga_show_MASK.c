
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {scalar_t__ state; } ;


 int FUNC_0 (char*,char*,...) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static ssize_t FUNC_1(struct kobject *VAR_1,
   struct kobj_attribute *VAR_2, char *VAR_3)
{
 if (VAR_0.state < 0)
  return FUNC_0(VAR_3, "borked\n");

 return FUNC_0(VAR_3, "%s\n", (VAR_0.state) ? "online" : "offline");
}
