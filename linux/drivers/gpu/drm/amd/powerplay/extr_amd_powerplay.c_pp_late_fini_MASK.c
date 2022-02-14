
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ smu_prv_buffer; } ;
struct amdgpu_device {TYPE_1__ pm; } ;


 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (scalar_t__*,int *,int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct amdgpu_device *VAR_1 = VAR_0;

 if (VAR_1->pm.smu_prv_buffer)
  FUNC_1(&VAR_1->pm.smu_prv_buffer, ((void*)0), ((void*)0));
 FUNC_0(VAR_1);
}
