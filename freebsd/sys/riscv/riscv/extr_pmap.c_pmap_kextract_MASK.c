
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef int pt_entry_t ;
typedef int pd_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (int ,int) ;
 int * FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;

vm_paddr_t
FUNC_6(vm_offset_t VAR_8)
{
 pd_entry_t *VAR_9;
 pt_entry_t *VAR_10;
 vm_paddr_t VAR_11;

 if (VAR_8 >= VAR_1 && VAR_8 < VAR_0) {
  VAR_11 = FUNC_0(VAR_8);
 } else {
  VAR_9 = FUNC_3(VAR_7, VAR_8);
  if (VAR_9 == ((void*)0))
   FUNC_2("pmap_kextract: No l2");
  if ((FUNC_5(VAR_9) & VAR_6) != 0) {

   VAR_11 = (FUNC_5(VAR_9) >> VAR_5) << VAR_3;
   VAR_11 |= (VAR_8 & VAR_2);
   return (VAR_11);
  }

  VAR_10 = FUNC_4(VAR_9, VAR_8);
  if (VAR_10 == ((void*)0))
   FUNC_2("pmap_kextract: No l3...");
  VAR_11 = FUNC_1(FUNC_5(VAR_10));
  VAR_11 |= (VAR_8 & VAR_4);
 }
 return (VAR_11);
}
