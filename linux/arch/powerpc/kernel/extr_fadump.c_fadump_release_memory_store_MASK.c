
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int dump_active; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 () ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_1 (char const*,int ,int*) ;
 int FUNC_2 () ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject *VAR_3,
     struct kobj_attribute *VAR_4,
     const char *VAR_5, size_t VAR_6)
{
 int VAR_7 = -1;

 if (!VAR_2.dump_active)
  return -VAR_1;

 if (FUNC_1(VAR_5, 0, &VAR_7))
  return -VAR_0;

 if (VAR_7 == 1) {







  FUNC_0();

 } else
  return -VAR_0;
 return VAR_6;
}
