
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40iw_cm_node {int list; } ;
struct i40iw_cm_core {int ht_lock; int non_accelerated_list; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct i40iw_cm_core *VAR_0,
          struct i40iw_cm_node *VAR_1)
{
 unsigned long VAR_2;

 if (!VAR_1 || !VAR_0) {
  FUNC_0("cm_node or cm_core == NULL\n");
  return;
 }

 FUNC_2(&VAR_0->ht_lock, VAR_2);
 FUNC_1(&VAR_1->list, &VAR_0->non_accelerated_list);
 FUNC_3(&VAR_0->ht_lock, VAR_2);
}
