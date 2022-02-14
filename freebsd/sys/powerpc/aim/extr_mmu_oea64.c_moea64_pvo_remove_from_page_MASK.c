
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * vm_page_t ;
struct TYPE_2__ {int pa; } ;
struct pvo_entry {int pvo_vaddr; TYPE_1__ pvo_pte; } ;
typedef int mmu_t ;


 int VAR_0 ;
 int * FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,struct pvo_entry*,int *) ;

__attribute__((used)) static void
FUNC_4(mmu_t VAR_2, struct pvo_entry *VAR_3)
{
 vm_page_t VAR_4 = ((void*)0);

 if (VAR_3->pvo_vaddr & VAR_1)
  VAR_4 = FUNC_0(VAR_3->pvo_pte.pa & VAR_0);

 FUNC_1(VAR_3->pvo_pte.pa & VAR_0);
 FUNC_3(VAR_2, VAR_3, VAR_4);
 FUNC_2(VAR_3->pvo_pte.pa & VAR_0);
}
