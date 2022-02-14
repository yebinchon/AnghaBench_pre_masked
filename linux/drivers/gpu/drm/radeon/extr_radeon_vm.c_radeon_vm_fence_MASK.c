
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct radeon_vm {TYPE_2__* ids; } ;
struct radeon_fence {size_t ring; } ;
struct TYPE_3__ {void** active; } ;
struct radeon_device {TYPE_1__ vm_manager; } ;
struct TYPE_4__ {unsigned int id; void* last_id_use; } ;


 void* FUNC_0 (struct radeon_fence*) ;
 int FUNC_1 (void**) ;

void FUNC_2(struct radeon_device *VAR_0,
       struct radeon_vm *VAR_1,
       struct radeon_fence *VAR_2)
{
 unsigned VAR_3 = VAR_1->ids[VAR_2->ring].id;

 FUNC_1(&VAR_0->vm_manager.active[VAR_3]);
 VAR_0->vm_manager.active[VAR_3] = FUNC_0(VAR_2);

 FUNC_1(&VAR_1->ids[VAR_2->ring].last_id_use);
 VAR_1->ids[VAR_2->ring].last_id_use = FUNC_0(VAR_2);
}
