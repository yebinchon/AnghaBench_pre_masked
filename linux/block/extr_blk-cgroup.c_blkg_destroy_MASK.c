
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct blkcg_policy {int (* pd_offline_fn ) (int ) ;} ;
struct blkcg_gq {int online; int refcnt; int blkcg_node; int q_node; TYPE_1__* q; int stat_ios; int stat_bytes; int * pd; struct blkcg_gq* parent; struct blkcg* blkcg; } ;
struct blkcg {int blkg_hint; int blkg_tree; int lock; } ;
struct TYPE_2__ {int id; int queue_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct blkcg_policy** VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 struct blkcg_gq* FUNC_9 (int ) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(struct blkcg_gq *VAR_2)
{
 struct blkcg *VAR_3 = VAR_2->blkcg;
 struct blkcg_gq *VAR_4 = VAR_2->parent;
 int VAR_5;

 FUNC_6(&VAR_2->q->queue_lock);
 FUNC_6(&VAR_3->lock);


 FUNC_0(FUNC_5(&VAR_2->q_node));
 FUNC_0(FUNC_3(&VAR_2->blkcg_node));

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  struct blkcg_policy *VAR_6 = VAR_1[VAR_5];

  if (VAR_2->pd[VAR_5] && VAR_6->pd_offline_fn)
   VAR_6->pd_offline_fn(VAR_2->pd[VAR_5]);
 }

 if (VAR_4) {
  FUNC_1(&VAR_4->stat_bytes, &VAR_2->stat_bytes);
  FUNC_1(&VAR_4->stat_ios, &VAR_2->stat_ios);
 }

 VAR_2->online = 0;

 FUNC_8(&VAR_3->blkg_tree, VAR_2->q->id);
 FUNC_4(&VAR_2->q_node);
 FUNC_2(&VAR_2->blkcg_node);






 if (FUNC_9(VAR_3->blkg_hint) == VAR_2)
  FUNC_10(VAR_3->blkg_hint, ((void*)0));





 FUNC_7(&VAR_2->refcnt);
}
