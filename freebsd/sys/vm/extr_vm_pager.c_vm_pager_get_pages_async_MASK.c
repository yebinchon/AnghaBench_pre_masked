
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vm_page_t ;
typedef TYPE_1__* vm_object_t ;
typedef int pgo_getpages_iodone_t ;
struct TYPE_7__ {int (* pgo_getpages_async ) (TYPE_1__*,int *,int,int*,int*,int ,void*) ;} ;
struct TYPE_6__ {size_t type; } ;


 TYPE_5__** VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *,int,int*,int*,int ,void*) ;
 int FUNC_1 (TYPE_1__*,int *,int) ;

int
FUNC_2(vm_object_t VAR_1, vm_page_t *VAR_2, int VAR_3,
    int *VAR_4, int *VAR_5, pgo_getpages_iodone_t VAR_6, void *VAR_7)
{

 FUNC_1(VAR_1, VAR_2, VAR_3);

 return ((*VAR_0[VAR_1->type]->pgo_getpages_async)(VAR_1, VAR_2,
     VAR_3, VAR_4, VAR_5, VAR_6, VAR_7));
}
