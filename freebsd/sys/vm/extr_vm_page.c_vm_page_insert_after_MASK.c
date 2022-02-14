
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ vm_pindex_t ;
typedef TYPE_1__* vm_page_t ;
typedef TYPE_2__* vm_object_t ;
struct TYPE_15__ {int rtree; int memq; } ;
struct TYPE_14__ {scalar_t__ pindex; int ref_count; TYPE_2__* object; } ;


 int FUNC_0 (int,char*) ;
 TYPE_1__* FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_5 (int *,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_6(vm_page_t VAR_2, vm_object_t VAR_3, vm_pindex_t VAR_4,
    vm_page_t VAR_5)
{
 vm_page_t VAR_6;

 FUNC_3(VAR_3);
 FUNC_0(VAR_2->object == ((void*)0),
     ("vm_page_insert_after: page already inserted"));
 if (VAR_5 != ((void*)0)) {
  FUNC_0(VAR_5->object == VAR_3,
      ("vm_page_insert_after: object doesn't contain mpred"));
  FUNC_0(VAR_5->pindex < VAR_4,
      ("vm_page_insert_after: mpred doesn't precede pindex"));
  VAR_6 = FUNC_2(VAR_5, VAR_1);
 } else
  VAR_6 = FUNC_1(&VAR_3->memq);
 if (VAR_6 != ((void*)0))
  FUNC_0(VAR_6->pindex > VAR_4,
      ("vm_page_insert_after: msucc doesn't succeed pindex"));




 VAR_2->object = VAR_3;
 VAR_2->pindex = VAR_4;
 VAR_2->ref_count |= VAR_0;




 if (FUNC_5(&VAR_3->rtree, VAR_2)) {
  VAR_2->object = ((void*)0);
  VAR_2->pindex = 0;
  VAR_2->ref_count &= ~VAR_0;
  return (1);
 }
 FUNC_4(VAR_2, VAR_3, VAR_5);
 return (0);
}
