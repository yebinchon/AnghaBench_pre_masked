
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_sync {int * last_vm_update; int fences; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct amdgpu_sync *VAR_0)
{
 FUNC_0(VAR_0->fences);
 VAR_0->last_vm_update = ((void*)0);
}
