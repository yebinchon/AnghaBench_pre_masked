
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int slot; } ;
struct pvo_entry {int pvo_pmap; TYPE_1__ pvo_pte; } ;
struct lpte {int pte_hi; int pte_lo; } ;
typedef int mmu_t ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int FUNC_3 (struct pvo_entry*,struct lpte*) ;
 struct lpte* VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int64_t
FUNC_6(mmu_t VAR_6, struct pvo_entry *VAR_7)
{
 volatile struct lpte *VAR_8 = VAR_5 + VAR_7->pvo_pte.slot;
 struct lpte VAR_9;
 uint64_t VAR_10;

 FUNC_0(VAR_7->pvo_pmap, VAR_3);

 FUNC_3(VAR_7, &VAR_9);

 FUNC_4(&VAR_4);
 if ((FUNC_2(VAR_8->pte_hi) & VAR_0) !=
     (VAR_9.pte_hi & VAR_0)) {

  FUNC_5(&VAR_4);
  return (-1);
 }

 FUNC_1();
 VAR_10 = FUNC_2(VAR_8->pte_lo);

 FUNC_5(&VAR_4);

 return (VAR_10 & (VAR_2 | VAR_1));
}
