
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct binder_proc {int deferred_work; int deferred_work_node; } ;
typedef enum binder_deferred_state { ____Placeholder_binder_deferred_state } binder_deferred_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct binder_proc *VAR_3, enum binder_deferred_state VAR_4)
{
 FUNC_2(&VAR_1);
 VAR_3->deferred_work |= VAR_4;
 if (FUNC_1(&VAR_3->deferred_work_node)) {
  FUNC_0(&VAR_3->deferred_work_node,
    &VAR_0);
  FUNC_4(&VAR_2);
 }
 FUNC_3(&VAR_1);
}
