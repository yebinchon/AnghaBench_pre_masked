
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct amdgpu_ring {size_t wptr_offs; int me; scalar_t__ use_doorbell; struct amdgpu_device* adev; } ;
struct TYPE_2__ {int * wb; } ;
struct amdgpu_device {TYPE_1__ wb; } ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static uint64_t FUNC_1(struct amdgpu_ring *VAR_2)
{
 struct amdgpu_device *VAR_3 = VAR_2->adev;

 if (VAR_2->use_doorbell)
  return VAR_3->wb.wb[VAR_2->wptr_offs];
 else
  return FUNC_0(VAR_0, VAR_2->me, VAR_1);
}
