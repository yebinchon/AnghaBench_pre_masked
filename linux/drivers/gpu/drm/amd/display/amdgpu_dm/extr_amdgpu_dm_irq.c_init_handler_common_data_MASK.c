
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_dm_irq_handler_data {void (* handler ) (void*) ;struct amdgpu_display_manager* dm; void* handler_arg; } ;
struct amdgpu_display_manager {int dummy; } ;



__attribute__((used)) static void FUNC_0(struct amdgpu_dm_irq_handler_data *VAR_0,
         void (*VAR_1)(void *),
         void *VAR_2,
         struct amdgpu_display_manager *VAR_3)
{
 VAR_0->handler = VAR_1;
 VAR_0->handler_arg = VAR_2;
 VAR_0->dm = VAR_3;
}
