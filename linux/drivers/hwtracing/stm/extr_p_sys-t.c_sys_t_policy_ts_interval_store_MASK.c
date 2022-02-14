
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sys_t_policy_node {int ts_interval; } ;
struct mutex {int dummy; } ;
struct config_item {TYPE_2__* ci_group; } ;
typedef size_t ssize_t ;
struct TYPE_4__ {TYPE_1__* cg_subsys; } ;
struct TYPE_3__ {struct mutex su_mutex; } ;


 int FUNC_0 (char const*,int,unsigned int*) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct mutex*) ;
 int FUNC_3 (struct mutex*) ;
 struct sys_t_policy_node* FUNC_4 (struct config_item*) ;

__attribute__((used)) static ssize_t
FUNC_5(struct config_item *VAR_0, const char *VAR_1,
          size_t VAR_2)
{
 struct mutex *VAR_3 = &VAR_0->ci_group->cg_subsys->su_mutex;
 struct sys_t_policy_node *VAR_4 = FUNC_4(VAR_0);
 unsigned int VAR_5;
 int VAR_6;

 FUNC_2(VAR_3);
 VAR_6 = FUNC_0(VAR_1, 10, &VAR_5);
 FUNC_3(VAR_3);

 if (!VAR_6) {
  VAR_4->ts_interval = FUNC_1(VAR_5);
  return VAR_2;
 }

 return VAR_6;
}
