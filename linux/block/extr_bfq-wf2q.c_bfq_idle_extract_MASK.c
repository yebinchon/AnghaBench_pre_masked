
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_node {int dummy; } ;
struct bfq_service_tree {int idle; struct bfq_entity* last_idle; struct bfq_entity* first_idle; } ;
struct bfq_queue {int bfqq_list; } ;
struct bfq_entity {int rb_node; } ;


 void* FUNC_0 (struct rb_node*) ;
 struct bfq_queue* FUNC_1 (struct bfq_entity*) ;
 int FUNC_2 (int *,struct bfq_entity*) ;
 int FUNC_3 (int *) ;
 struct rb_node* FUNC_4 (int *) ;
 struct rb_node* FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct bfq_service_tree *VAR_0,
        struct bfq_entity *VAR_1)
{
 struct bfq_queue *VAR_2 = FUNC_1(VAR_1);
 struct rb_node *VAR_3;

 if (VAR_1 == VAR_0->first_idle) {
  VAR_3 = FUNC_4(&VAR_1->rb_node);
  VAR_0->first_idle = FUNC_0(VAR_3);
 }

 if (VAR_1 == VAR_0->last_idle) {
  VAR_3 = FUNC_5(&VAR_1->rb_node);
  VAR_0->last_idle = FUNC_0(VAR_3);
 }

 FUNC_2(&VAR_0->idle, VAR_1);

 if (VAR_2)
  FUNC_3(&VAR_2->bfqq_list);
}
