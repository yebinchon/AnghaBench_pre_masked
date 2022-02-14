
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ vm_pindex_t ;
typedef TYPE_1__* vm_page_t ;
typedef TYPE_2__* vm_object_t ;
struct mtx {int dummy; } ;
struct TYPE_12__ {int flags; scalar_t__ resident_page_count; } ;
struct TYPE_11__ {scalar_t__ pindex; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_3 (struct mtx*) ;
 int FUNC_4 (TYPE_1__*,struct mtx**) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (TYPE_2__*,scalar_t__) ;

void
FUNC_7(vm_object_t VAR_3, vm_pindex_t VAR_4, vm_pindex_t VAR_5)
{
 struct mtx *VAR_6;
 vm_page_t VAR_7, VAR_8;

 FUNC_2(VAR_3);
 FUNC_0((VAR_3->flags & (VAR_0 | VAR_1)) == 0,
     ("vm_object_page_noreuse: illegal object %p", VAR_3));
 if (VAR_3->resident_page_count == 0)
  return;
 VAR_7 = FUNC_6(VAR_3, VAR_4);





 VAR_6 = ((void*)0);
 for (; VAR_7 != ((void*)0) && (VAR_7->pindex < VAR_5 || VAR_5 == 0); VAR_7 = VAR_8) {
  VAR_8 = FUNC_1(VAR_7, VAR_2);
  FUNC_4(VAR_7, &VAR_6);
  FUNC_5(VAR_7);
 }
 if (VAR_6 != ((void*)0))
  FUNC_3(VAR_6);
}
