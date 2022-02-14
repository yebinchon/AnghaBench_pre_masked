
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocrdma_ucontext {struct ocrdma_pd* cntxt_pd; } ;
struct ocrdma_pd {int dummy; } ;



__attribute__((used)) static inline int FUNC_0(struct ocrdma_ucontext *VAR_0,
     struct ocrdma_pd *VAR_1)
{
 return (VAR_0->cntxt_pd == VAR_1);
}
