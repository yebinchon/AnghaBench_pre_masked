
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sys_t_policy_node {int ts_interval; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,int) ;
 struct sys_t_policy_node* FUNC_2 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_3(struct config_item *VAR_0,
          char *VAR_1)
{
 struct sys_t_policy_node *VAR_2 = FUNC_2(VAR_0);

 return FUNC_1(VAR_1, "%u\n", FUNC_0(VAR_2->ts_interval));
}
