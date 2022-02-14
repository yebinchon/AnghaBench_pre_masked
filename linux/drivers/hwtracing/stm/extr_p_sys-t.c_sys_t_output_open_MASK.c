
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sys_t_policy_node {int dummy; } ;
struct sys_t_output {int node; } ;
struct stm_output {struct sys_t_output* pdrv_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sys_t_output* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,struct sys_t_policy_node*,int) ;

__attribute__((used)) static int FUNC_2(void *VAR_2, struct stm_output *VAR_3)
{
 struct sys_t_policy_node *VAR_4 = VAR_2;
 struct sys_t_output *VAR_5;

 VAR_5 = FUNC_0(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_1(&VAR_5->node, VAR_4, sizeof(VAR_5->node));
 VAR_3->pdrv_private = VAR_5;

 return 0;
}
