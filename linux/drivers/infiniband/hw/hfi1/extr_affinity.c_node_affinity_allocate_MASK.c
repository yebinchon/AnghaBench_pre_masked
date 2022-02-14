
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_affinity_node {int node; int list; int comp_vect_affinity; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct hfi1_affinity_node* FUNC_2 (int,int ) ;
 int VAR_1 ;

__attribute__((used)) static struct hfi1_affinity_node *FUNC_3(int VAR_2)
{
 struct hfi1_affinity_node *VAR_3;

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);
 VAR_3->node = VAR_2;
 VAR_3->comp_vect_affinity = FUNC_1(VAR_1);
 FUNC_0(&VAR_3->list);

 return VAR_3;
}
