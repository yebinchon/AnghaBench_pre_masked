
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_sync {struct radeon_fence* last_vm_update; struct radeon_fence** sync_to; } ;
struct radeon_fence {size_t ring; scalar_t__ is_vm_update; } ;


 void* FUNC_0 (struct radeon_fence*,struct radeon_fence*) ;

void FUNC_1(struct radeon_sync *VAR_0,
         struct radeon_fence *VAR_1)
{
 struct radeon_fence *VAR_2;

 if (!VAR_1)
  return;

 VAR_2 = VAR_0->sync_to[VAR_1->ring];
 VAR_0->sync_to[VAR_1->ring] = FUNC_0(VAR_1, VAR_2);

 if (VAR_1->is_vm_update) {
  VAR_2 = VAR_0->last_vm_update;
  VAR_0->last_vm_update = FUNC_0(VAR_1, VAR_2);
 }
}
