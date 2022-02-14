
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_5 (int ,int ,scalar_t__,TYPE_1__*,int,int,int ) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(mmu_t VAR_6, pmap_t VAR_7, vm_offset_t VAR_8,
    vm_offset_t VAR_9, vm_page_t VAR_10, vm_prot_t VAR_11)
{
 vm_page_t VAR_12;
 vm_pindex_t VAR_13, VAR_14;

 FUNC_3(VAR_10->object);

 VAR_14 = FUNC_4(VAR_9 - VAR_8);
 VAR_12 = VAR_10;
 FUNC_7(&VAR_5);
 FUNC_0(VAR_7);
 while (VAR_12 != ((void*)0) && (VAR_13 = VAR_12->pindex - VAR_10->pindex) < VAR_14) {
  FUNC_5(VAR_6, VAR_7, VAR_8 + FUNC_6(VAR_13), VAR_12,
      VAR_11 & (VAR_3 | VAR_2),
      VAR_0 | VAR_1, 0);
  VAR_12 = FUNC_2(VAR_12, VAR_4);
 }
 FUNC_8(&VAR_5);
 FUNC_1(VAR_7);
}
