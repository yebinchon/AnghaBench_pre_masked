
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdma_mmu_node {TYPE_1__* pq; scalar_t__ npages; int pages; } ;
struct TYPE_2__ {int n_locked; int mm; } ;


 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int ,int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct sdma_mmu_node *VAR_0)
{
 if (VAR_0->npages) {
  FUNC_1(VAR_0->pq->mm, VAR_0->pages, 0, VAR_0->npages);
  FUNC_0(VAR_0->npages, &VAR_0->pq->n_locked);
 }
}
