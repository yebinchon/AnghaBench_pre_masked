
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_sync {int * last_vm_update; int ** sync_to; int ** semaphores; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

void FUNC_0(struct radeon_sync *VAR_2)
{
 unsigned VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3)
  VAR_2->semaphores[VAR_3] = ((void*)0);

 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3)
  VAR_2->sync_to[VAR_3] = ((void*)0);

 VAR_2->last_vm_update = ((void*)0);
}
