
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct amdgpu_vm_update_params {TYPE_2__* vm; TYPE_3__* adev; } ;
struct amdgpu_bo {int dummy; } ;
struct TYPE_6__ {scalar_t__ asic_type; } ;
struct TYPE_5__ {TYPE_1__* update_funcs; } ;
struct TYPE_4__ {int (* update ) (struct amdgpu_vm_update_params*,struct amdgpu_bo*,int,int,unsigned int,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_3__*,unsigned int,int*,int*) ;
 int FUNC_1 (struct amdgpu_vm_update_params*,struct amdgpu_bo*,int,int,unsigned int,int ,int) ;

__attribute__((used)) static void FUNC_2(struct amdgpu_vm_update_params *VAR_6,
       struct amdgpu_bo *VAR_7, unsigned VAR_8,
       uint64_t VAR_9, uint64_t VAR_10,
       unsigned VAR_11, uint32_t VAR_12,
       uint64_t VAR_13)

{
 if (VAR_8 != VAR_4) {
  VAR_13 |= VAR_0;
  FUNC_0(VAR_6->adev, VAR_8, &VAR_10, &VAR_13);

 } else if (VAR_6->adev->asic_type >= VAR_5 &&
     !(VAR_13 & VAR_3) &&
     !(VAR_13 & VAR_2)) {


  VAR_13 |= VAR_1;
 }

 VAR_6->vm->update_funcs->update(VAR_6, VAR_7, VAR_9, VAR_10, VAR_11, VAR_12,
      VAR_13);
}
