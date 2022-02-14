
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
struct TYPE_6__ {scalar_t__ pindex; int object; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_5 (int ,scalar_t__,TYPE_1__*,int,int ,int ) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_4 ;

void
FUNC_9(pmap_t VAR_5, vm_offset_t VAR_6, vm_offset_t VAR_7,
    vm_page_t VAR_8, vm_prot_t VAR_9)
{
 vm_page_t VAR_10;
 vm_pindex_t VAR_11, VAR_12;

 FUNC_3(VAR_8->object);

 VAR_12 = FUNC_4(VAR_7 - VAR_6);
 VAR_10 = VAR_8;
 FUNC_7(&VAR_4);
 FUNC_0(VAR_5);
 while (VAR_10 != ((void*)0) && (VAR_11 = VAR_10->pindex - VAR_8->pindex) < VAR_12) {
  FUNC_5(VAR_5, VAR_6 + FUNC_6(VAR_11), VAR_10, VAR_9 &
      (VAR_2 | VAR_1),
      VAR_0, 0);
  VAR_10 = FUNC_2(VAR_10, VAR_3);
 }
 FUNC_8(&VAR_4);
 FUNC_1(VAR_5);
}
