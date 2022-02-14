
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int flags; struct io_context* io_context; } ;
struct io_context {int release_work; int icq_list; int icq_tree; int lock; int active_ref; int nr_tasks; int refcount; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 struct task_struct* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct io_context* FUNC_5 (int ,int,int) ;
 int FUNC_6 (int ,struct io_context*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct task_struct*) ;
 int FUNC_9 (struct task_struct*) ;
 scalar_t__ FUNC_10 (int) ;

int FUNC_11(struct task_struct *VAR_8, gfp_t VAR_9, int VAR_10)
{
 struct io_context *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_5(VAR_7, VAR_9 | VAR_4,
        VAR_10);
 if (FUNC_10(!VAR_11))
  return -VAR_1;


 FUNC_3(&VAR_11->refcount, 1);
 FUNC_4(&VAR_11->nr_tasks, 1);
 FUNC_4(&VAR_11->active_ref, 1);
 FUNC_7(&VAR_11->lock);
 FUNC_1(&VAR_11->icq_tree, VAR_2);
 FUNC_0(&VAR_11->icq_list);
 FUNC_2(&VAR_11->release_work, VAR_6);
 FUNC_8(VAR_8);
 if (!VAR_8->io_context &&
     (VAR_8 == VAR_5 || !(VAR_8->flags & VAR_3)))
  VAR_8->io_context = VAR_11;
 else
  FUNC_6(VAR_7, VAR_11);

 VAR_12 = VAR_8->io_context ? 0 : -VAR_0;

 FUNC_9(VAR_8);

 return VAR_12;
}
