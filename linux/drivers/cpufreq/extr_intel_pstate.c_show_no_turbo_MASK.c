
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int turbo_disabled; int no_turbo; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 () ;

__attribute__((used)) static ssize_t FUNC_4(struct kobject *VAR_4,
        struct kobj_attribute *VAR_5, char *VAR_6)
{
 ssize_t VAR_7;

 FUNC_0(&VAR_3);

 if (!VAR_2) {
  FUNC_1(&VAR_3);
  return -VAR_0;
 }

 FUNC_3();
 if (VAR_1.turbo_disabled)
  VAR_7 = FUNC_2(VAR_6, "%u\n", VAR_1.turbo_disabled);
 else
  VAR_7 = FUNC_2(VAR_6, "%u\n", VAR_1.no_turbo);

 FUNC_1(&VAR_3);

 return VAR_7;
}
