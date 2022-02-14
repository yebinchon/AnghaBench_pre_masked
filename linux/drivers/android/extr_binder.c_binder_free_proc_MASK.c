
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct binder_proc {int tsk; int alloc; int delivered_death; int todo; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct binder_proc*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct binder_proc *VAR_1)
{
 FUNC_0(!FUNC_4(&VAR_1->todo));
 FUNC_0(!FUNC_4(&VAR_1->delivered_death));
 FUNC_1(&VAR_1->alloc);
 FUNC_5(VAR_1->tsk);
 FUNC_2(VAR_0);
 FUNC_3(VAR_1);
}
