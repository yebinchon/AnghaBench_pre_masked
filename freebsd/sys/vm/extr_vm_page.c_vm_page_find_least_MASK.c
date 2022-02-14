
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ vm_pindex_t ;
typedef TYPE_1__* vm_page_t ;
typedef TYPE_2__* vm_object_t ;
struct TYPE_9__ {int rtree; int memq; } ;
struct TYPE_8__ {scalar_t__ pindex; } ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_1__* FUNC_2 (int *,scalar_t__) ;

vm_page_t
FUNC_3(vm_object_t VAR_0, vm_pindex_t VAR_1)
{
 vm_page_t VAR_2;

 FUNC_1(VAR_0);
 if ((VAR_2 = FUNC_0(&VAR_0->memq)) != ((void*)0) && VAR_2->pindex < VAR_1)
  VAR_2 = FUNC_2(&VAR_0->rtree, VAR_1);
 return (VAR_2);
}
