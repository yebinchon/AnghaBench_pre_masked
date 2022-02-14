
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_2__ {int slot; } ;
struct pvo_entry {int pvo_vpn; int pvo_pmap; TYPE_1__ pvo_pte; } ;
struct lpte {int pte_hi; int pte_lo; } ;
typedef int mmu_t ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_4 ;
 int FUNC_6 (struct pvo_entry*,struct lpte*) ;
 int FUNC_7 (int ,struct pvo_entry*) ;
 int FUNC_8 (int ,struct pvo_entry*) ;
 struct lpte* VAR_5 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int64_t
FUNC_11(mmu_t VAR_6, struct pvo_entry *VAR_7, uint64_t VAR_8)
{
 volatile struct lpte *VAR_9 = VAR_5 + VAR_7->pvo_pte.slot;
 struct lpte VAR_10;
 uint64_t VAR_11;

 FUNC_0(VAR_7->pvo_pmap, VAR_3);

 FUNC_6(VAR_7, &VAR_10);

 FUNC_9(&VAR_4);
 if ((FUNC_3(VAR_9->pte_hi) & VAR_0) !=
     (VAR_10.pte_hi & VAR_0)) {

  FUNC_10(&VAR_4);
  return (-1);
 }

 if (VAR_8 == VAR_2) {

  FUNC_1();

  VAR_11 = FUNC_3(VAR_9->pte_lo);


  ((volatile uint8_t *)(&VAR_9->pte_lo))[6] =

      ((uint8_t *)(&VAR_10.pte_lo))[6];



  FUNC_10(&VAR_4);

  FUNC_4();
  FUNC_2(VAR_7->pvo_vpn);
  FUNC_5();
 } else {
  FUNC_10(&VAR_4);
  VAR_11 = FUNC_8(VAR_6, VAR_7);
  FUNC_7(VAR_6, VAR_7);
 }

 return (VAR_11 & (VAR_2 | VAR_1));
}
