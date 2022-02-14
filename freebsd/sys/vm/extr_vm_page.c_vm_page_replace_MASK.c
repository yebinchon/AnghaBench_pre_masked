
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int vm_pindex_t ;
typedef TYPE_1__* vm_page_t ;
typedef TYPE_2__* vm_object_t ;
struct TYPE_16__ {int memq; int rtree; } ;
struct TYPE_15__ {int ref_count; scalar_t__ queue; TYPE_2__* object; int pindex; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_2 (int *,TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_4 (int*,int) ;
 int FUNC_5 (int*,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_1__*) ;
 TYPE_1__* FUNC_9 (int *,TYPE_1__*) ;

vm_page_t
FUNC_10(vm_page_t VAR_3, vm_object_t VAR_4, vm_pindex_t VAR_5)
{
 vm_page_t VAR_6;

 FUNC_3(VAR_4);
 FUNC_0(VAR_3->object == ((void*)0) && (VAR_3->ref_count & VAR_1) == 0,
     ("vm_page_replace: page %p already in object", VAR_3));







 VAR_3->object = VAR_4;
 VAR_3->pindex = VAR_5;
 FUNC_5(&VAR_3->ref_count, VAR_1);
 VAR_6 = FUNC_9(&VAR_4->rtree, VAR_3);
 FUNC_0(VAR_6->queue == VAR_0,
     ("vm_page_replace: old page %p is on a paging queue", VAR_6));


 FUNC_1(&VAR_4->memq, VAR_6, VAR_3, VAR_2);
 FUNC_2(&VAR_4->memq, VAR_6, VAR_2);

 VAR_6->object = ((void*)0);
 FUNC_4(&VAR_6->ref_count, VAR_1);
 FUNC_8(VAR_6);






 if (FUNC_6(VAR_3))
  FUNC_7(VAR_4);
 return (VAR_6);
}
