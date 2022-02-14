
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfq_service_tree {int dummy; } ;
struct bfq_entity {TYPE_1__* sched_data; } ;
struct TYPE_2__ {struct bfq_entity* in_service_entity; } ;


 int FUNC_0 (struct bfq_service_tree*,struct bfq_entity*,int) ;
 int FUNC_1 (struct bfq_service_tree*,struct bfq_entity*) ;

void FUNC_2(struct bfq_service_tree *VAR_0, struct bfq_entity *VAR_1)
{
 FUNC_1(VAR_0, VAR_1);
 FUNC_0(VAR_0, VAR_1,
     VAR_1 == VAR_1->sched_data->in_service_entity);
}
