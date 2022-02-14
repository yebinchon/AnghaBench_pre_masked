
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_page_t ;
typedef int vm_offset_t ;
typedef TYPE_2__* pmap_t ;
struct TYPE_5__ {scalar_t__ resident_count; } ;
struct TYPE_6__ {scalar_t__ pm_l1; int pm_active; TYPE_1__ pm_stats; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_1 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

void
FUNC_9(pmap_t VAR_2)
{
 vm_page_t VAR_3;

 FUNC_2(VAR_2->pm_stats.resident_count == 0,
     ("pmap_release: pmap resident count %ld != 0",
     VAR_2->pm_stats.resident_count));
 FUNC_2(FUNC_0(&VAR_2->pm_active),
     ("releasing active pmap %p", VAR_2));

 FUNC_5(&VAR_0);
 FUNC_3(VAR_2, VAR_1);
 FUNC_6(&VAR_0);

 VAR_3 = FUNC_4(FUNC_1((vm_offset_t)VAR_2->pm_l1));
 FUNC_8(VAR_3);
 FUNC_7(VAR_3);
}
