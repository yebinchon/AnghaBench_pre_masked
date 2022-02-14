
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int id; int queue_lock; } ;
struct io_cq {struct request_queue* q; } ;
struct io_context {int icq_hint; int icq_tree; } ;


 int FUNC_0 (int *) ;
 struct io_cq* FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,struct io_cq*) ;
 struct io_cq* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

struct io_cq *FUNC_6(struct io_context *VAR_0, struct request_queue *VAR_1)
{
 struct io_cq *VAR_2;

 FUNC_0(&VAR_1->queue_lock);







 FUNC_4();
 VAR_2 = FUNC_3(VAR_0->icq_hint);
 if (VAR_2 && VAR_2->q == VAR_1)
  goto out;

 VAR_2 = FUNC_1(&VAR_0->icq_tree, VAR_1->id);
 if (VAR_2 && VAR_2->q == VAR_1)
  FUNC_2(VAR_0->icq_hint, VAR_2);
 else
  VAR_2 = ((void*)0);
out:
 FUNC_5();
 return VAR_2;
}
