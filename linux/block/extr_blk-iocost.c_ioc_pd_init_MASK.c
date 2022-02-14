
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ioc_now {int vnow; } ;
struct TYPE_8__ {int function; } ;
struct ioc_gq {size_t level; struct ioc_gq** ancestors; TYPE_4__ delay_timer; TYPE_4__ waitq_timer; int waitq; void* hweight_inuse; void* hweight_active; int active_list; int active_period; int abs_vdebt; int done_vtime; int vtime; struct ioc* ioc; int pd; } ;
struct ioc {int lock; int cur_period; } ;
struct blkg_policy_data {int dummy; } ;
struct blkcg_gq {struct blkcg_gq* parent; TYPE_3__* blkcg; int q; } ;
struct TYPE_6__ {TYPE_1__* cgroup; } ;
struct TYPE_7__ {TYPE_2__ css; } ;
struct TYPE_5__ {size_t level; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 struct ioc_gq* FUNC_3 (struct blkcg_gq*) ;
 int FUNC_4 (TYPE_4__*,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ioc*,struct ioc_now*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct blkcg_gq* FUNC_7 (int *) ;
 struct ioc_gq* FUNC_8 (struct blkg_policy_data*) ;
 struct ioc* FUNC_9 (int ) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (struct ioc_gq*) ;

__attribute__((used)) static void FUNC_13(struct blkg_policy_data *VAR_5)
{
 struct ioc_gq *VAR_6 = FUNC_8(VAR_5);
 struct blkcg_gq *VAR_7 = FUNC_7(&VAR_6->pd);
 struct ioc *VAR_8 = FUNC_9(VAR_7->q);
 struct ioc_now VAR_9;
 struct blkcg_gq *VAR_10;
 unsigned long VAR_11;

 FUNC_6(VAR_8, &VAR_9);

 VAR_6->ioc = VAR_8;
 FUNC_2(&VAR_6->vtime, VAR_9.vnow);
 FUNC_2(&VAR_6->done_vtime, VAR_9.vnow);
 FUNC_2(&VAR_6->abs_vdebt, 0);
 FUNC_2(&VAR_6->active_period, FUNC_1(&VAR_8->cur_period));
 FUNC_0(&VAR_6->active_list);
 VAR_6->hweight_active = VAR_2;
 VAR_6->hweight_inuse = VAR_2;

 FUNC_5(&VAR_6->waitq);
 FUNC_4(&VAR_6->waitq_timer, VAR_0, VAR_1);
 VAR_6->waitq_timer.function = VAR_4;
 FUNC_4(&VAR_6->delay_timer, VAR_0, VAR_1);
 VAR_6->delay_timer.function = VAR_3;

 VAR_6->level = VAR_7->blkcg->css.cgroup->level;

 for (VAR_10 = VAR_7; VAR_10; VAR_10 = VAR_10->parent) {
  struct ioc_gq *VAR_12 = FUNC_3(VAR_10);
  VAR_6->ancestors[VAR_12->level] = VAR_12;
 }

 FUNC_10(&VAR_8->lock, VAR_11);
 FUNC_12(VAR_6);
 FUNC_11(&VAR_8->lock, VAR_11);
}
