
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int id; TYPE_1__* elevator; } ;
struct io_cq {int __rcu_head; int __rcu_icq_cache; int q_node; int ioc_node; struct request_queue* q; struct io_context* ioc; } ;
struct io_context {int icq_hint; int icq_tree; int lock; } ;
struct elevator_type {int icq_cache; } ;
struct TYPE_2__ {struct elevator_type* type; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (struct io_cq*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 struct io_cq* FUNC_6 (int ) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static void FUNC_8(struct io_cq *VAR_1)
{
 struct io_context *VAR_2 = VAR_1->ioc;
 struct request_queue *VAR_3 = VAR_1->q;
 struct elevator_type *VAR_4 = VAR_3->elevator->type;

 FUNC_4(&VAR_2->lock);

 FUNC_5(&VAR_2->icq_tree, VAR_1->q->id);
 FUNC_1(&VAR_1->ioc_node);
 FUNC_3(&VAR_1->q_node);






 if (FUNC_6(VAR_2->icq_hint) == VAR_1)
  FUNC_7(VAR_2->icq_hint, ((void*)0));

 FUNC_2(VAR_1);





 VAR_1->__rcu_icq_cache = VAR_4->icq_cache;
 FUNC_0(&VAR_1->__rcu_head, VAR_0);
}
