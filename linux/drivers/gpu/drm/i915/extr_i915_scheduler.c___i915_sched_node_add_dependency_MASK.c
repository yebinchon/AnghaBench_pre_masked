
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_sched_node {int flags; int signalers_list; int waiters_list; } ;
struct i915_dependency {unsigned long flags; struct i915_sched_node* waiter; struct i915_sched_node* signaler; int signal_link; int wait_link; int dfs_link; } ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (struct i915_sched_node*,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct i915_sched_node*) ;
 int FUNC_5 (struct i915_sched_node*) ;
 int VAR_4 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

bool FUNC_8(struct i915_sched_node *VAR_5,
          struct i915_sched_node *VAR_6,
          struct i915_dependency *VAR_7,
          unsigned long VAR_8)
{
 bool VAR_9 = 0;

 FUNC_6(&VAR_4);

 if (!FUNC_4(VAR_6)) {
  FUNC_1(&VAR_7->dfs_link);
  FUNC_3(&VAR_7->wait_link, &VAR_6->waiters_list);
  FUNC_3(&VAR_7->signal_link, &VAR_5->signalers_list);
  VAR_7->signaler = VAR_6;
  VAR_7->waiter = VAR_5;
  VAR_7->flags = VAR_8;


  if (VAR_6->flags & VAR_2 &&
      !FUNC_5(VAR_6))
   VAR_5->flags |= VAR_2;







  FUNC_0(VAR_3 & ~VAR_1);
  if (VAR_8 & VAR_0)
   FUNC_2(VAR_6, VAR_3);

  VAR_9 = 1;
 }

 FUNC_7(&VAR_4);

 return VAR_9;
}
