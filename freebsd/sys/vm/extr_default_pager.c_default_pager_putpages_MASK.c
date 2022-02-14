
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_page_t ;
typedef int vm_object_t ;
struct TYPE_2__ {int (* pgo_putpages ) (int ,int *,int,int,int*) ;} ;


 int FUNC_0 (int ,int *,int,int,int*) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void
FUNC_1(vm_object_t VAR_1, vm_page_t *VAR_2, int VAR_3,
    int VAR_4, int *VAR_5)
{


 VAR_0.pgo_putpages(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
