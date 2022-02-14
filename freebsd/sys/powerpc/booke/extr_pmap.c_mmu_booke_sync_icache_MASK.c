
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int vm_page_t ;
typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef int pte_t ;
typedef scalar_t__ pmap_t ;
typedef int mmu_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (void*,int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int ,scalar_t__,int ,int,int,int ) ;
 int * FUNC_10 (int ,scalar_t__,int) ;
 int FUNC_11 (int ,scalar_t__,int,int ) ;
 int VAR_8 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void
FUNC_14(mmu_t VAR_9, pmap_t VAR_10, vm_offset_t VAR_11, vm_size_t VAR_12)
{
 pte_t *VAR_13;
 vm_paddr_t VAR_14 = 0;
 int VAR_15, VAR_16;

 pmap_t VAR_17;
 vm_page_t VAR_18;
 vm_offset_t VAR_19;
 int VAR_20;



 FUNC_12(&VAR_8);
 VAR_17 = FUNC_0(VAR_6);
 VAR_20 = (VAR_10 == VAR_7 || VAR_10 == VAR_17) ? 1 : 0;

 while (VAR_12 > 0) {
  FUNC_3(VAR_10);
  VAR_13 = FUNC_10(VAR_9, VAR_10, VAR_11);
  VAR_16 = (VAR_13 != ((void*)0) && FUNC_5(VAR_13)) ? 1 : 0;
  if (VAR_16)
   VAR_14 = FUNC_6(VAR_13);
  FUNC_4(VAR_10);
  VAR_15 = VAR_2 - (VAR_11 & VAR_1);
  VAR_15 = FUNC_8(VAR_15, VAR_12);
  if (VAR_16) {




   if (!VAR_20) {

    VAR_19 = 0;
    VAR_18 = FUNC_2(VAR_14);
    FUNC_3(VAR_17);
    FUNC_9(VAR_9, VAR_17, VAR_18, VAR_19,
        VAR_4 | VAR_5, VAR_0);
    VAR_19 += (VAR_11 & VAR_1);
    FUNC_7((void *)VAR_19, VAR_15);
    FUNC_11(VAR_9, VAR_17, VAR_19, VAR_3);
    FUNC_4(VAR_17);
   } else
    FUNC_7((void *)VAR_11, VAR_15);

  }
  VAR_11 += VAR_15;
  VAR_12 -= VAR_15;
 }

 FUNC_13(&VAR_8);

}
