
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_pindex_t ;
typedef int vm_page_t ;
typedef TYPE_1__* vm_object_t ;
struct TYPE_5__ {int rtree; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,TYPE_1__*,int ,int ) ;
 int FUNC_2 (int *,int ) ;

int
FUNC_3(vm_page_t VAR_0, vm_object_t VAR_1, vm_pindex_t VAR_2)
{
 vm_page_t VAR_3;

 FUNC_0(VAR_1);
 VAR_3 = FUNC_2(&VAR_1->rtree, VAR_2);
 return (FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3));
}
