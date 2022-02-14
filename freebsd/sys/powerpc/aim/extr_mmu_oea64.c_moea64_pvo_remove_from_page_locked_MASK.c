
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * vm_page_t ;
struct TYPE_2__ {int pa; } ;
struct pvo_entry {int pvo_vaddr; TYPE_1__ pvo_pte; int * pvo_pmap; } ;
typedef int mmu_t ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct pvo_entry*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static inline void
FUNC_7(mmu_t VAR_8, struct pvo_entry *VAR_9,
    vm_page_t VAR_10)
{

 FUNC_0(VAR_9->pvo_vaddr & VAR_3, ("Trying to delink live page"));


 if (VAR_9->pvo_pmap == ((void*)0))
  return;
 VAR_9->pvo_pmap = ((void*)0);




 FUNC_3(VAR_9->pvo_pte.pa & VAR_0);
 if (VAR_9->pvo_vaddr & VAR_4) {
  if (VAR_10 != ((void*)0)) {
   FUNC_2(VAR_9, VAR_7);
   if (FUNC_1(FUNC_6(VAR_10)))
    FUNC_5(VAR_10,
        VAR_2 | VAR_1);
  }
 }

 FUNC_4(VAR_5--);
 FUNC_4(VAR_6++);
}
