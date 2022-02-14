
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
struct TYPE_6__ {TYPE_1__* p_vmspace; } ;
struct TYPE_5__ {size_t td_vslock_sz; } ;
struct TYPE_4__ {int vm_map; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int ,int ,int) ;

void
FUNC_4(void *VAR_4, size_t VAR_5)
{


 FUNC_0(VAR_3->td_vslock_sz >= VAR_5);
 VAR_3->td_vslock_sz -= VAR_5;
 (void)FUNC_3(&VAR_2->p_vmspace->vm_map,
     FUNC_2((vm_offset_t)VAR_4), FUNC_1((vm_offset_t)VAR_4 + VAR_5),
     VAR_1 | VAR_0);
}
