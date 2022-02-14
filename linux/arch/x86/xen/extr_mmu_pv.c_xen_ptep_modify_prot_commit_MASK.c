
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int vm_mm; } ;
struct mmu_update {int ptr; int val; } ;
typedef int pte_t ;
struct TYPE_2__ {int maddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long,int *,int ) ;
 TYPE_1__ FUNC_2 (int *) ;
 int FUNC_3 (struct mmu_update*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;

void FUNC_6(struct vm_area_struct *VAR_2, unsigned long VAR_3,
     pte_t *VAR_4, pte_t VAR_5)
{
 struct mmu_update VAR_6;

 FUNC_1(VAR_2->vm_mm, VAR_3, VAR_4, VAR_5);
 FUNC_4();

 VAR_6.ptr = FUNC_2(VAR_4).maddr | VAR_0;
 VAR_6.val = FUNC_0(VAR_5);
 FUNC_3(&VAR_6);

 FUNC_5(VAR_1);
}
