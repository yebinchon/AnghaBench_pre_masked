
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct amdgpu_vm_update_params {int num_dw_left; int adev; TYPE_1__* job; } ;
struct amdgpu_ib {int gpu_addr; } ;
struct amdgpu_bo {int dummy; } ;
struct TYPE_2__ {struct amdgpu_ib* ibs; } ;


 scalar_t__ FUNC_0 (struct amdgpu_bo*) ;
 int FUNC_1 (int ,struct amdgpu_ib*,int,int,unsigned int) ;
 int FUNC_2 (int,int,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct amdgpu_vm_update_params *VAR_0,
         struct amdgpu_bo *VAR_1, uint64_t VAR_2,
         unsigned VAR_3)
{
 struct amdgpu_ib *VAR_4 = VAR_0->job->ibs;
 uint64_t VAR_5 = VAR_4->gpu_addr;

 VAR_5 += VAR_0->num_dw_left * 4;

 VAR_2 += FUNC_0(VAR_1);
 FUNC_2(VAR_2, VAR_5, VAR_3);

 FUNC_1(VAR_0->adev, VAR_4, VAR_2, VAR_5, VAR_3);
}
