
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int queue_lock; int id; } ;
struct blkcg_gq {struct request_queue* q; } ;
struct blkcg {int blkg_hint; int blkg_tree; } ;


 int FUNC_0 (int *) ;
 struct blkcg_gq* FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,struct blkcg_gq*) ;

struct blkcg_gq *FUNC_3(struct blkcg *VAR_0,
          struct request_queue *VAR_1, bool VAR_2)
{
 struct blkcg_gq *VAR_3;







 VAR_3 = FUNC_1(&VAR_0->blkg_tree, VAR_1->id);
 if (VAR_3 && VAR_3->q == VAR_1) {
  if (VAR_2) {
   FUNC_0(&VAR_1->queue_lock);
   FUNC_2(VAR_0->blkg_hint, VAR_3);
  }
  return VAR_3;
 }

 return ((void*)0);
}
