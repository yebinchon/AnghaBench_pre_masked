
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_pindex_t ;
typedef int vm_page_t ;
typedef TYPE_1__* vm_object_t ;
struct TYPE_4__ {int rtree; } ;


 int FUNC_0 (TYPE_1__*,int ,int,int,int *) ;
 int * FUNC_1 (int *,int ) ;

vm_page_t
FUNC_2(vm_object_t VAR_0, vm_pindex_t VAR_1, int VAR_2,
    int VAR_3)
{

 return (FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3,
     VAR_0 != ((void*)0) ? FUNC_1(&VAR_0->rtree, VAR_1) :
     ((void*)0)));
}
