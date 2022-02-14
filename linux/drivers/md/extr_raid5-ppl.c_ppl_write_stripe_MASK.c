
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stripe_head {size_t pd_idx; int log_list; int count; int state; TYPE_1__* dev; int ppl_page; struct ppl_io_unit* ppl_io; } ;
struct r5conf {struct ppl_conf* log_private; } ;
struct ppl_log {int io_mutex; TYPE_2__* rdev; } ;
struct ppl_io_unit {int dummy; } ;
struct ppl_conf {int no_mem_stripes_lock; int no_mem_stripes; struct ppl_log* child_logs; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct ppl_log*,struct stripe_head*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;

int FUNC_10(struct r5conf *VAR_7, struct stripe_head *VAR_8)
{
 struct ppl_conf *VAR_9 = VAR_7->log_private;
 struct ppl_io_unit *VAR_10 = VAR_8->ppl_io;
 struct ppl_log *VAR_11;

 if (VAR_10 || FUNC_9(VAR_6, &VAR_8->state) || !VAR_8->ppl_page ||
     !FUNC_9(VAR_3, &VAR_8->dev[VAR_8->pd_idx].flags) ||
     !FUNC_9(VAR_2, &VAR_8->dev[VAR_8->pd_idx].flags)) {
  FUNC_1(VAR_5, &VAR_8->state);
  return -VAR_0;
 }

 VAR_11 = &VAR_9->child_logs[VAR_8->pd_idx];

 FUNC_3(&VAR_11->io_mutex);

 if (!VAR_11->rdev || FUNC_9(VAR_1, &VAR_11->rdev->flags)) {
  FUNC_4(&VAR_11->io_mutex);
  return -VAR_0;
 }

 FUNC_6(VAR_5, &VAR_8->state);
 FUNC_1(VAR_4, &VAR_8->state);
 FUNC_0(&VAR_8->count);

 if (FUNC_5(VAR_11, VAR_8)) {
  FUNC_7(&VAR_9->no_mem_stripes_lock);
  FUNC_2(&VAR_8->log_list, &VAR_9->no_mem_stripes);
  FUNC_8(&VAR_9->no_mem_stripes_lock);
 }

 FUNC_4(&VAR_11->io_mutex);

 return 0;
}
