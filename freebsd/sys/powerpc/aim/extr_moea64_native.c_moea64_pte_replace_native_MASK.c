
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int slot; } ;
struct pvo_entry {TYPE_1__ pvo_pte; } ;
struct lpte {int pte_hi; int pte_lo; } ;
typedef int mmu_t ;
typedef int int64_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (struct pvo_entry*,struct lpte*) ;
 int FUNC_3 (int ,struct pvo_entry*,struct lpte volatile*) ;
 struct lpte* VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int64_t
FUNC_6(mmu_t VAR_3, struct pvo_entry *VAR_4, int VAR_5)
{
 volatile struct lpte *VAR_6 = VAR_2 + VAR_4->pvo_pte.slot;
 struct lpte VAR_7;
 int64_t VAR_8;

 if (VAR_5 == 0) {

  FUNC_2(VAR_4, &VAR_7);

  FUNC_4(&VAR_1);
  if ((FUNC_0(VAR_6->pte_hi) & VAR_0) !=
      (VAR_7.pte_hi & VAR_0)) {
   FUNC_5(&VAR_1);
   return (-1);
  }
  VAR_6->pte_hi = FUNC_1(VAR_7.pte_hi);
  VAR_8 = FUNC_0(VAR_6->pte_lo);
  FUNC_5(&VAR_1);
 } else {

  VAR_8 = FUNC_3(VAR_3, VAR_4, VAR_6);
 }

 return (VAR_8);
}
