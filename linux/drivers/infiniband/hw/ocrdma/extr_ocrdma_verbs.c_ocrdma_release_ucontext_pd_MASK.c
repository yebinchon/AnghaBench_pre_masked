
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocrdma_ucontext {int pd_in_use; int mm_list_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct ocrdma_ucontext *VAR_0)
{
 FUNC_0(&VAR_0->mm_list_lock);
 VAR_0->pd_in_use = 0;
 FUNC_1(&VAR_0->mm_list_lock);
}
