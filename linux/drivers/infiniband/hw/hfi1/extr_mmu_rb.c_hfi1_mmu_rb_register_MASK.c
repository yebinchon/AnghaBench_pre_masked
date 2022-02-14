
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct workqueue_struct {int dummy; } ;
struct mmu_rb_ops {int dummy; } ;
struct TYPE_2__ {int * ops; int hlist; } ;
struct mmu_rb_handler {struct mm_struct* mm; TYPE_1__ mn; struct workqueue_struct* wq; int lru_list; int del_list; int del_work; int lock; void* ops_arg; struct mmu_rb_ops* ops; int root; } ;
struct mm_struct {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct mmu_rb_handler*) ;
 struct mmu_rb_handler* FUNC_4 (int,int ) ;
 int FUNC_5 (TYPE_1__*,struct mm_struct*) ;
 int VAR_4 ;
 int FUNC_6 (int *) ;

int FUNC_7(void *VAR_5, struct mm_struct *VAR_6,
    struct mmu_rb_ops *VAR_7,
    struct workqueue_struct *VAR_8,
    struct mmu_rb_handler **VAR_9)
{
 struct mmu_rb_handler *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_4(sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_10->root = VAR_2;
 VAR_10->ops = VAR_7;
 VAR_10->ops_arg = VAR_5;
 FUNC_0(&VAR_10->mn.hlist);
 FUNC_6(&VAR_10->lock);
 VAR_10->mn.ops = &VAR_4;
 VAR_10->mm = VAR_6;
 FUNC_2(&VAR_10->del_work, VAR_3);
 FUNC_1(&VAR_10->del_list);
 FUNC_1(&VAR_10->lru_list);
 VAR_10->wq = VAR_8;

 VAR_11 = FUNC_5(&VAR_10->mn, VAR_10->mm);
 if (VAR_11) {
  FUNC_3(VAR_10);
  return VAR_11;
 }

 *VAR_9 = VAR_10;
 return 0;
}
