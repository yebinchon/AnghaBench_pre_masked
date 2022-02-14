
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvrdma_cqe {int dummy; } ;
struct pvrdma_cq {scalar_t__ offset; int pdir; } ;


 scalar_t__ FUNC_0 (int *,scalar_t__) ;

__attribute__((used)) static inline struct pvrdma_cqe *FUNC_1(struct pvrdma_cq *VAR_0, int VAR_1)
{
 return (struct pvrdma_cqe *)FUNC_0(
     &VAR_0->pdir,
     VAR_0->offset +
     sizeof(struct pvrdma_cqe) * VAR_1);
}
