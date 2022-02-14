
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct pvo_entry {int pvo_vpn; } ;
struct lpte {int pte_hi; int pte_lo; } ;
typedef int mmu_t ;
typedef int int64_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 void* FUNC_7 (int) ;
 int FUNC_8 () ;
 int VAR_5 ;
 int FUNC_9 (struct pvo_entry*,struct lpte*) ;
 int VAR_6 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int64_t
FUNC_12(mmu_t VAR_7, struct pvo_entry *VAR_8,
    volatile struct lpte *VAR_9)
{
 struct lpte VAR_10;
 uint64_t VAR_11;

 FUNC_9(VAR_8, &VAR_10);

 FUNC_10(&VAR_5);
 if ((FUNC_4(VAR_9->pte_hi & VAR_0)) !=
     (VAR_10.pte_hi & VAR_0)) {

  FUNC_2(VAR_6--);
  FUNC_11(&VAR_5);
  return (-1);
 }





 FUNC_8();
 FUNC_5();
 VAR_9->pte_hi = FUNC_4((VAR_9->pte_hi & ~VAR_4) | VAR_2);
 FUNC_1();
 FUNC_3(VAR_8->pvo_vpn);
 VAR_11 = FUNC_4(VAR_9->pte_lo);
 FUNC_0();
 VAR_9->pte_lo = FUNC_7(VAR_10.pte_lo);
 FUNC_0();
 VAR_9->pte_hi = FUNC_7(VAR_10.pte_hi);
 FUNC_1();
 FUNC_6();
 FUNC_11(&VAR_5);

 return (VAR_11 & (VAR_1 | VAR_3));
}
