
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfq_service_tree {int active; } ;
struct bfq_sched_data {struct bfq_entity* in_service_entity; } ;
struct bfq_entity {int * tree; } ;


 int FUNC_0 (struct bfq_entity*,int) ;
 int FUNC_1 (struct bfq_entity*) ;
 struct bfq_service_tree* FUNC_2 (struct bfq_entity*) ;

__attribute__((used)) static void FUNC_3(struct bfq_entity *VAR_0,
       struct bfq_sched_data *VAR_1,
       bool VAR_2)
{
 struct bfq_service_tree *VAR_3 = FUNC_2(VAR_0);

 if (VAR_1->in_service_entity == VAR_0 || VAR_0->tree == &VAR_3->active)




  FUNC_1(VAR_0);
 else




  FUNC_0(VAR_0, VAR_2);
}
