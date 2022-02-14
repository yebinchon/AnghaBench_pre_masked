
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
struct TYPE_2__ {int turbo_pstate; int min_pstate; } ;
struct cpudata {TYPE_1__ pstate; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct cpudata** VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject *VAR_4,
    struct kobj_attribute *VAR_5, char *VAR_6)
{
 struct cpudata *VAR_7;
 int VAR_8;

 FUNC_0(&VAR_3);

 if (!VAR_2) {
  FUNC_1(&VAR_3);
  return -VAR_0;
 }

 VAR_7 = VAR_1[0];
 VAR_8 = VAR_7->pstate.turbo_pstate - VAR_7->pstate.min_pstate + 1;

 FUNC_1(&VAR_3);

 return FUNC_2(VAR_6, "%u\n", VAR_8);
}
