
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef scalar_t__ vm_pindex_t ;
typedef TYPE_1__* vm_page_t ;
typedef scalar_t__ vm_offset_t ;
typedef int pmap_t ;
typedef int mmu_t ;
struct TYPE_6__ {scalar_t__ pindex; int object; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_3 (int ,int ,scalar_t__,TYPE_1__*,int,int,int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

void
FUNC_5(mmu_t VAR_5, pmap_t VAR_6, vm_offset_t VAR_7, vm_offset_t VAR_8,
    vm_page_t VAR_9, vm_prot_t VAR_10)
{
 vm_page_t VAR_11;
 vm_pindex_t VAR_12, VAR_13;

 FUNC_1(VAR_9->object);

 VAR_13 = FUNC_2(VAR_8 - VAR_7);
 VAR_11 = VAR_9;
 while (VAR_11 != ((void*)0) && (VAR_12 = VAR_11->pindex - VAR_9->pindex) < VAR_13) {
  FUNC_3(VAR_5, VAR_6, VAR_7 + FUNC_4(VAR_12), VAR_11, VAR_10 &
      (VAR_3 | VAR_2), VAR_0 |
      VAR_1, 0);
  VAR_11 = FUNC_0(VAR_11, VAR_4);
 }
}
