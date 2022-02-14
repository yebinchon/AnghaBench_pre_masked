
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ vm_pindex_t ;
typedef TYPE_1__* vm_page_t ;
typedef TYPE_2__* vm_object_t ;
struct TYPE_14__ {int rtree; } ;
struct TYPE_13__ {scalar_t__ ref_count; scalar_t__ pindex; TYPE_2__* object; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_6 (int *,scalar_t__) ;

int
FUNC_7(vm_page_t VAR_0, vm_object_t VAR_1, vm_pindex_t VAR_2)
{
 vm_page_t VAR_3;
 vm_pindex_t VAR_4;

 FUNC_1(VAR_1);

 FUNC_0(VAR_0->ref_count != 0, ("vm_page_rename: page %p has no refs", VAR_0));
 VAR_3 = FUNC_6(&VAR_1->rtree, VAR_2);
 FUNC_0(VAR_3 == ((void*)0) || VAR_3->pindex != VAR_2,
     ("vm_page_rename: pindex already renamed"));






 VAR_4 = VAR_0->pindex;
 VAR_0->pindex = VAR_2;
 if (FUNC_5(&VAR_1->rtree, VAR_0)) {
  VAR_0->pindex = VAR_4;
  return (1);
 }





 VAR_0->pindex = VAR_4;
 FUNC_4(VAR_0);


 VAR_0->pindex = VAR_2;
 VAR_0->object = VAR_1;

 FUNC_3(VAR_0, VAR_1, VAR_3);
 FUNC_2(VAR_0);
 return (0);
}
