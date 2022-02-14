
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct remap_data {TYPE_1__* mmu_update; scalar_t__ no_translate; int * pfn; scalar_t__ contiguous; int prot; } ;
typedef int pte_t ;
struct TYPE_4__ {int maddr; } ;
struct TYPE_3__ {int val; int ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_2__ FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(pte_t *VAR_2, unsigned long VAR_3, void *VAR_4)
{
 struct remap_data *VAR_5 = VAR_4;
 pte_t VAR_6 = FUNC_1(FUNC_0(*VAR_5->pfn, VAR_5->prot));





 if (VAR_5->contiguous)
  (*VAR_5->pfn)++;
 else
  VAR_5->pfn++;

 VAR_5->mmu_update->ptr = FUNC_3(VAR_2).maddr;
 VAR_5->mmu_update->ptr |= VAR_5->no_translate ?
  VAR_1 :
  VAR_0;
 VAR_5->mmu_update->val = FUNC_2(VAR_6);
 VAR_5->mmu_update++;

 return 0;
}
