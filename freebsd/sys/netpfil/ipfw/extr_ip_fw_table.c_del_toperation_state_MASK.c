
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tables_config {int state_list; } ;
struct tableop_state {int opstate; } ;
struct ip_fw_chain {int dummy; } ;


 struct tables_config* FUNC_0 (struct ip_fw_chain*) ;
 int FUNC_1 (int *,int *,int ) ;
 int VAR_0 ;

void
FUNC_2(struct ip_fw_chain *VAR_1, struct tableop_state *VAR_2)
{
 struct tables_config *VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 FUNC_1(&VAR_3->state_list, &VAR_2->opstate, VAR_0);
}
