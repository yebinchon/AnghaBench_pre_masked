
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_prot_t ;
typedef int * vm_page_t ;
typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef int pt_entry_t ;
typedef int pmap_t ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int* FUNC_4 (int ,int ) ;
 int FUNC_5 (int*) ;
 int FUNC_6 (int *) ;

vm_page_t
FUNC_7(pmap_t VAR_2, vm_offset_t VAR_3, vm_prot_t VAR_4)
{
 pt_entry_t *VAR_5, VAR_6;
 vm_paddr_t VAR_7;
 vm_page_t VAR_8;

 VAR_8 = ((void*)0);
 FUNC_1(VAR_2);
 VAR_5 = FUNC_4(VAR_2, VAR_3);
 if (VAR_5 != ((void*)0) && (VAR_6 = FUNC_5(VAR_5)) != 0) {
  if ((VAR_6 & VAR_0) != 0 || (VAR_4 & VAR_1) == 0) {
   VAR_7 = FUNC_3(VAR_6);
   VAR_8 = FUNC_0(VAR_7);
   if (!FUNC_6(VAR_8))
    VAR_8 = ((void*)0);
  }
 }
 FUNC_2(VAR_2);
 return (VAR_8);
}
