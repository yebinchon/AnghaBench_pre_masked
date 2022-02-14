
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
struct TYPE_2__ {int turbo_pstate; int min_pstate; int max_pstate; } ;
struct cpudata {TYPE_1__ pstate; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct cpudata** VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_7(struct kobject *VAR_4,
    struct kobj_attribute *VAR_5, char *VAR_6)
{
 struct cpudata *VAR_7;
 int VAR_8, VAR_9, VAR_10;
 uint32_t VAR_11;

 FUNC_4(&VAR_3);

 if (!VAR_2) {
  FUNC_5(&VAR_3);
  return -VAR_0;
 }

 VAR_7 = VAR_1[0];

 VAR_8 = VAR_7->pstate.turbo_pstate - VAR_7->pstate.min_pstate + 1;
 VAR_9 = VAR_7->pstate.max_pstate - VAR_7->pstate.min_pstate + 1;
 VAR_11 = FUNC_0(VAR_9, VAR_8);
 VAR_10 = 100 - FUNC_1(FUNC_3(VAR_11, FUNC_2(100)));

 FUNC_5(&VAR_3);

 return FUNC_6(VAR_6, "%u\n", VAR_10);
}
