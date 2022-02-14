
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icc_provider {int nodes; } ;
struct icc_node {int node_list; struct icc_provider* provider; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct icc_node *VAR_1, struct icc_provider *VAR_2)
{
 FUNC_1(&VAR_0);

 VAR_1->provider = VAR_2;
 FUNC_0(&VAR_1->node_list, &VAR_2->nodes);

 FUNC_2(&VAR_0);
}
