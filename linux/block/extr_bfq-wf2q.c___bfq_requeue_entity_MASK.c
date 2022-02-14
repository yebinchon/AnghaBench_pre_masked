
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfq_service_tree {int dummy; } ;
struct bfq_sched_data {struct bfq_entity* in_service_entity; } ;
struct bfq_entity {scalar_t__ tree; int finish; int start; int service; struct bfq_sched_data* sched_data; } ;


 int FUNC_0 (struct bfq_service_tree*,struct bfq_entity*) ;
 int FUNC_1 (struct bfq_entity*,int ) ;
 struct bfq_service_tree* FUNC_2 (struct bfq_entity*) ;
 int FUNC_3 (struct bfq_entity*,struct bfq_service_tree*,int) ;

__attribute__((used)) static void FUNC_4(struct bfq_entity *VAR_0)
{
 struct bfq_sched_data *VAR_1 = VAR_0->sched_data;
 struct bfq_service_tree *VAR_2 = FUNC_2(VAR_0);

 if (VAR_0 == VAR_1->in_service_entity) {
  FUNC_1(VAR_0, VAR_0->service);
  VAR_0->start = VAR_0->finish;
  if (VAR_0->tree)
   FUNC_0(VAR_2, VAR_0);
 } else {
  FUNC_0(VAR_2, VAR_0);
 }

 FUNC_3(VAR_0, VAR_2, 0);
}
