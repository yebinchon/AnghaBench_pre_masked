
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_offset_t ;
struct TYPE_3__ {int pte_hi; } ;
struct TYPE_4__ {TYPE_1__ pte; } ;
struct pvo_entry {TYPE_2__ pvo_pte; } ;
typedef int pmap_t ;
typedef int mmu_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 struct pvo_entry* FUNC_2 (int ,int,int *) ;

boolean_t
FUNC_3(mmu_t VAR_2, pmap_t VAR_3, vm_offset_t VAR_4)
{
 struct pvo_entry *VAR_5;
 boolean_t VAR_6;

 FUNC_0(VAR_3);
 VAR_5 = FUNC_2(VAR_3, VAR_4 & ~VAR_0, ((void*)0));
 VAR_6 = VAR_5 == ((void*)0) || (VAR_5->pvo_pte.pte.pte_hi & VAR_1) == 0;
 FUNC_1(VAR_3);
 return (VAR_6);
}
