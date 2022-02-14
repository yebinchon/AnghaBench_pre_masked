
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int slot; } ;
struct pvo_entry {int pvo_vpn; TYPE_1__ pvo_pte; } ;
struct lpte {int pte_hi; int pte_lo; } ;
typedef int mmu_t ;
typedef int int64_t ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_5 ;
 int FUNC_7 (struct pvo_entry*,struct lpte*) ;
 int VAR_6 ;
 int VAR_7 ;
 struct lpte* VAR_8 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int64_t
FUNC_10(mmu_t VAR_9, struct pvo_entry *VAR_10)
{
 volatile struct lpte *VAR_11 = VAR_8 + VAR_10->pvo_pte.slot;
 struct lpte VAR_12;
 uint64_t VAR_13;

 FUNC_7(VAR_10, &VAR_12);

 FUNC_8(&VAR_5);
 if ((FUNC_3(VAR_11->pte_hi & VAR_0)) !=
     (VAR_12.pte_hi & VAR_0)) {

  FUNC_1(VAR_6--);
  FUNC_9(&VAR_5);
  return (-1);
 }





 FUNC_6();
 FUNC_4();
 VAR_11->pte_hi = FUNC_3((VAR_11->pte_hi & ~VAR_4) | VAR_2);
 FUNC_0();
 FUNC_2(VAR_10->pvo_vpn);
 VAR_13 = FUNC_3(VAR_11->pte_lo);
 *((volatile int32_t *)(&VAR_11->pte_hi) + 1) = 0;
 FUNC_5();
 FUNC_9(&VAR_5);


 FUNC_1(VAR_7--);

 return (VAR_13 & (VAR_1 | VAR_3));
}
