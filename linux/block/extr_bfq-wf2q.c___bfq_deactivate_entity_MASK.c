
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfq_service_tree {int vtime; int idle; int active; } ;
struct bfq_sched_data {struct bfq_entity* in_service_entity; } ;
struct bfq_entity {int finish; int * tree; scalar_t__ service; int on_st; struct bfq_sched_data* sched_data; } ;


 int FUNC_0 (struct bfq_service_tree*,struct bfq_entity*) ;
 int FUNC_1 (struct bfq_entity*,scalar_t__) ;
 struct bfq_service_tree* FUNC_2 (struct bfq_entity*) ;
 int FUNC_3 (struct bfq_service_tree*,struct bfq_entity*,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct bfq_service_tree*,struct bfq_entity*) ;
 int FUNC_6 (struct bfq_service_tree*,struct bfq_entity*) ;

bool FUNC_7(struct bfq_entity *VAR_0, bool VAR_1)
{
 struct bfq_sched_data *VAR_2 = VAR_0->sched_data;
 struct bfq_service_tree *VAR_3;
 bool VAR_4;

 if (!VAR_0->on_st)
  return 0;







 VAR_3 = FUNC_2(VAR_0);
 VAR_4 = VAR_0 == VAR_2->in_service_entity;

 FUNC_1(VAR_0, VAR_0->service);

 if (VAR_4)
  VAR_2->in_service_entity = ((void*)0);
 else





  VAR_0->service = 0;

 if (VAR_0->tree == &VAR_3->active)
  FUNC_0(VAR_3, VAR_0);
 else if (!VAR_4 && VAR_0->tree == &VAR_3->idle)
  FUNC_5(VAR_3, VAR_0);

 if (!VAR_1 || !FUNC_4(VAR_0->finish, VAR_3->vtime))
  FUNC_3(VAR_3, VAR_0, VAR_4);
 else
  FUNC_6(VAR_3, VAR_0);

 return 1;
}
