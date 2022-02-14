
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef TYPE_2__* vm_object_t ;
struct TYPE_13__ {int resident_page_count; scalar_t__ type; int handle; int memq; } ;
struct TYPE_12__ {int ref_count; scalar_t__ pindex; TYPE_2__* object; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_2 (int *,TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_7(vm_page_t VAR_3, vm_object_t VAR_4, vm_page_t VAR_5)
{

 FUNC_3(VAR_4);
 FUNC_0(VAR_4 != ((void*)0) && VAR_3->object == VAR_4,
     ("vm_page_insert_radixdone: page %p has inconsistent object", VAR_3));
 FUNC_0((VAR_3->ref_count & VAR_1) != 0,
     ("vm_page_insert_radixdone: page %p is missing object ref", VAR_3));
 if (VAR_5 != ((void*)0)) {
  FUNC_0(VAR_5->object == VAR_4,
      ("vm_page_insert_radixdone: object doesn't contain mpred"));
  FUNC_0(VAR_5->pindex < VAR_3->pindex,
      ("vm_page_insert_radixdone: mpred doesn't precede pindex"));
 }

 if (VAR_5 != ((void*)0))
  FUNC_1(&VAR_4->memq, VAR_5, VAR_3, VAR_2);
 else
  FUNC_2(&VAR_4->memq, VAR_3, VAR_2);




 VAR_4->resident_page_count++;




 if (VAR_4->resident_page_count == 1 && VAR_4->type == VAR_0)
  FUNC_5(VAR_4->handle);





 if (FUNC_4(VAR_3))
  FUNC_6(VAR_4);
}
