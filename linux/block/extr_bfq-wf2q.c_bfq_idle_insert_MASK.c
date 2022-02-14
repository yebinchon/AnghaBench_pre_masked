
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfq_service_tree {int idle; struct bfq_entity* last_idle; struct bfq_entity* first_idle; } ;
struct bfq_queue {TYPE_1__* bfqd; int bfqq_list; } ;
struct bfq_entity {int finish; } ;
struct TYPE_2__ {int idle_list; } ;


 struct bfq_queue* FUNC_0 (struct bfq_entity*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,struct bfq_entity*) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4(struct bfq_service_tree *VAR_0,
       struct bfq_entity *VAR_1)
{
 struct bfq_queue *VAR_2 = FUNC_0(VAR_1);
 struct bfq_entity *VAR_3 = VAR_0->first_idle;
 struct bfq_entity *VAR_4 = VAR_0->last_idle;

 if (!VAR_3 || FUNC_1(VAR_3->finish, VAR_1->finish))
  VAR_0->first_idle = VAR_1;
 if (!VAR_4 || FUNC_1(VAR_1->finish, VAR_4->finish))
  VAR_0->last_idle = VAR_1;

 FUNC_2(&VAR_0->idle, VAR_1);

 if (VAR_2)
  FUNC_3(&VAR_2->bfqq_list, &VAR_2->bfqd->idle_list);
}
