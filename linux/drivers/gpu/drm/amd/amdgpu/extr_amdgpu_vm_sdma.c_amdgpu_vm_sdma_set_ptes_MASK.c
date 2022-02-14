
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct amdgpu_vm_update_params {int adev; TYPE_1__* job; } ;
struct amdgpu_ib {int dummy; } ;
struct amdgpu_bo {int dummy; } ;
struct TYPE_2__ {struct amdgpu_ib* ibs; } ;


 scalar_t__ FUNC_0 (struct amdgpu_bo*) ;
 int FUNC_1 (int ,struct amdgpu_ib*,int,int,unsigned int,int ,int) ;
 int FUNC_2 (int ,struct amdgpu_ib*,int,int,unsigned int,int ) ;
 int FUNC_3 (int,int,unsigned int,int ,int) ;

__attribute__((used)) static void FUNC_4(struct amdgpu_vm_update_params *VAR_0,
        struct amdgpu_bo *VAR_1, uint64_t VAR_2,
        uint64_t VAR_3, unsigned VAR_4,
        uint32_t VAR_5, uint64_t VAR_6)
{
 struct amdgpu_ib *VAR_7 = VAR_0->job->ibs;

 VAR_2 += FUNC_0(VAR_1);
 FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_4 < 3) {
  FUNC_2(VAR_0->adev, VAR_7, VAR_2, VAR_3 | VAR_6,
        VAR_4, VAR_5);
 } else {
  FUNC_1(VAR_0->adev, VAR_7, VAR_2, VAR_3,
          VAR_4, VAR_5, VAR_6);
 }
}
