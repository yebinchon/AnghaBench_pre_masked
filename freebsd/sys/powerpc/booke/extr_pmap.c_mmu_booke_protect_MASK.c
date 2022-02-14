
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_prot_t ;
typedef int vm_page_t ;
typedef scalar_t__ vm_offset_t ;
typedef int pte_t ;
typedef int pmap_t ;
typedef int mmu_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int*) ;
 scalar_t__ FUNC_4 (int*) ;
 scalar_t__ FUNC_5 (int*) ;
 int VAR_1 ;
 int FUNC_6 (int*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int* FUNC_10 (int ,int ,scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int VAR_7 ;
 int FUNC_14 (int ) ;

__attribute__((used)) static void
FUNC_15(mmu_t VAR_8, pmap_t VAR_9, vm_offset_t VAR_10, vm_offset_t VAR_11,
    vm_prot_t VAR_12)
{
 vm_offset_t VAR_13;
 vm_page_t VAR_14;
 pte_t *VAR_15;

 if ((VAR_12 & VAR_5) == VAR_4) {
  FUNC_7(VAR_8, VAR_9, VAR_10, VAR_11);
  return;
 }

 if (VAR_12 & VAR_6)
  return;

 FUNC_1(VAR_9);
 for (VAR_13 = VAR_10; VAR_13 < VAR_11; VAR_13 += VAR_0) {
  if ((VAR_15 = FUNC_10(VAR_8, VAR_9, VAR_13)) != ((void*)0)) {
   if (FUNC_5(VAR_15)) {
    VAR_14 = FUNC_0(FUNC_6(VAR_15));

    FUNC_8(&VAR_7);
    FUNC_12();


    if (FUNC_4(VAR_15) && FUNC_3(VAR_15))
     FUNC_14(VAR_14);

    FUNC_11(VAR_13);
    *VAR_15 &= ~(VAR_3 | VAR_2 | VAR_1);

    FUNC_13();
    FUNC_9(&VAR_7);
   }
  }
 }
 FUNC_2(VAR_9);
}
