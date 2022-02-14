
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct pvo_entry {int dummy; } ;
typedef int pmap_t ;
typedef int mmu_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 struct pvo_entry* FUNC_2 (int ,int) ;

boolean_t
FUNC_3(mmu_t VAR_3, pmap_t VAR_4, vm_offset_t VAR_5)
{
 struct pvo_entry *VAR_6;
 boolean_t VAR_7 = VAR_2;

 FUNC_0(VAR_4);
 VAR_6 = FUNC_2(VAR_4, VAR_5 & ~VAR_0);
 if (VAR_6 != ((void*)0))
  VAR_7 = VAR_1;
 FUNC_1(VAR_4);
 return (VAR_7);
}
