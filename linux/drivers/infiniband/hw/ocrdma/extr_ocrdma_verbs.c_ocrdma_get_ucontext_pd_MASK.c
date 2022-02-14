
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocrdma_ucontext {int pd_in_use; int mm_list_lock; struct ocrdma_pd* cntxt_pd; } ;
struct ocrdma_pd {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static struct ocrdma_pd *FUNC_2(struct ocrdma_ucontext *VAR_0)
{
 struct ocrdma_pd *VAR_1 = ((void*)0);

 FUNC_0(&VAR_0->mm_list_lock);
 if (!VAR_0->pd_in_use) {
  VAR_0->pd_in_use = 1;
  VAR_1 = VAR_0->cntxt_pd;
 }
 FUNC_1(&VAR_0->mm_list_lock);

 return VAR_1;
}
