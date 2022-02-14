
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
typedef int mmu_t ;
struct TYPE_4__ {int pv_list; scalar_t__ pv_tracked; } ;
struct TYPE_5__ {TYPE_1__ md; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(mmu_t VAR_0, vm_page_t VAR_1)
{

 VAR_1->md.pv_tracked = 0;
 FUNC_0(&VAR_1->md.pv_list);
}
