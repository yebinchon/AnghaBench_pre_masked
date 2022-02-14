
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
struct TYPE_5__ {int * pmap; int color; int tte_list; } ;
struct TYPE_6__ {TYPE_1__ md; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;

void
FUNC_3(vm_page_t VAR_0)
{

 FUNC_1(&VAR_0->md.tte_list);
 VAR_0->md.color = FUNC_0(FUNC_2(VAR_0));
 VAR_0->md.pmap = ((void*)0);
}
