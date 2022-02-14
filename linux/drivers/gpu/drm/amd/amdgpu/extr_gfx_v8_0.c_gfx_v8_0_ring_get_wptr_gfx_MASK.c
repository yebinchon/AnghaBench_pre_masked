
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct amdgpu_ring {size_t wptr_offs; struct amdgpu_device* adev; scalar_t__ use_doorbell; } ;
struct TYPE_2__ {int * wb; } ;
struct amdgpu_device {TYPE_1__ wb; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static u64 FUNC_1(struct amdgpu_ring *VAR_1)
{
 struct amdgpu_device *VAR_2 = VAR_1->adev;

 if (VAR_1->use_doorbell)

  return VAR_1->adev->wb.wb[VAR_1->wptr_offs];
 else
  return FUNC_0(VAR_0);
}
