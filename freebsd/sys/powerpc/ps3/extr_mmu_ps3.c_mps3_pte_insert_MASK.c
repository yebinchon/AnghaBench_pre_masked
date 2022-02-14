
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long uint64_t ;
struct TYPE_2__ {int slot; } ;
struct pvo_entry {int pvo_vaddr; TYPE_1__ pvo_pte; } ;
struct lpte {int pte_hi; int pte_lo; } ;
typedef int mmu_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned long,int,int ,int,int ,unsigned long*,int*,int *) ;
 int FUNC_4 (struct pvo_entry*,struct lpte*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,int) ;

__attribute__((used)) static int
FUNC_8(mmu_t VAR_8, struct pvo_entry *VAR_9)
{
 int VAR_10;
 struct lpte VAR_11, VAR_12;
 uint64_t VAR_13;

 if (VAR_9->pvo_vaddr & VAR_2) {

  VAR_9->pvo_vaddr &= ~VAR_2;
  VAR_9->pvo_pte.slot ^= (VAR_5 << 3);
 }

 VAR_9->pvo_pte.slot &= ~7UL;
 FUNC_4(VAR_9, &VAR_11);
 VAR_12.pte_hi = 0;
 FUNC_1();
 FUNC_5(&VAR_6);
 VAR_10 = FUNC_3(VAR_7, VAR_9->pvo_pte.slot,
     VAR_11.pte_hi, VAR_11.pte_lo, VAR_0 | VAR_1, 0,
     &VAR_13, &VAR_12.pte_hi, &VAR_12.pte_lo);
 FUNC_6(&VAR_6);

 if (VAR_10 != 0) {

  FUNC_7("mps3_pte_insert: overflow (%d)", VAR_10);
  return (-1);
 }




 if ((VAR_13 & ~7UL) != VAR_9->pvo_pte.slot)
  VAR_9->pvo_vaddr |= VAR_2;
 VAR_9->pvo_pte.slot = VAR_13;

 FUNC_2(VAR_4++);

 if (VAR_12.pte_hi) {
  FUNC_0((VAR_12.pte_hi & (VAR_1 | VAR_0)) == 0,
      ("Evicted a wired PTE"));
  FUNC_2(VAR_4--);
  FUNC_2(VAR_3++);
 }

 return (0);
}
