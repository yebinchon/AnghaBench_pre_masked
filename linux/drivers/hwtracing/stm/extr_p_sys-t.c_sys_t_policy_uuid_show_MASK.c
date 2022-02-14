
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sys_t_policy_node {int uuid; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int *) ;
 struct sys_t_policy_node* FUNC_1 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_2(struct config_item *VAR_0,
          char *VAR_1)
{
 struct sys_t_policy_node *VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(VAR_1, "%pU\n", &VAR_2->uuid);
}
