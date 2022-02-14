
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_prot_t ;
typedef int * vm_page_t ;
typedef int vm_offset_t ;
typedef int uint32_t ;
typedef int pte_t ;
typedef scalar_t__ pmap_t ;
typedef int mmu_t ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int*) ;
 int FUNC_4 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int* FUNC_5 (int ,scalar_t__,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static vm_page_t
FUNC_7(mmu_t VAR_4, pmap_t VAR_5, vm_offset_t VAR_6,
    vm_prot_t VAR_7)
{
 pte_t *VAR_8;
 vm_page_t VAR_9;
 uint32_t VAR_10;

 VAR_9 = ((void*)0);
 FUNC_1(VAR_5);
 VAR_8 = FUNC_5(VAR_4, VAR_5, VAR_6);
 if ((VAR_8 != ((void*)0)) && FUNC_3(VAR_8)) {
  if (VAR_5 == VAR_3)
   VAR_10 = VAR_0;
  else
   VAR_10 = VAR_1;

  if ((*VAR_8 & VAR_10) != 0 || (VAR_7 & VAR_2) == 0) {
   VAR_9 = FUNC_0(FUNC_4(VAR_8));
   if (!FUNC_6(VAR_9))
    VAR_9 = ((void*)0);
  }
 }
 FUNC_2(VAR_5);
 return (VAR_9);
}
