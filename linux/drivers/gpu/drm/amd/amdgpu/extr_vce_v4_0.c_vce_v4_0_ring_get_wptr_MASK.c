
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct amdgpu_ring {size_t wptr_offs; int me; scalar_t__ use_doorbell; struct amdgpu_device* adev; } ;
struct TYPE_2__ {int * wb; } ;
struct amdgpu_device {TYPE_1__ wb; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static uint64_t FUNC_2(struct amdgpu_ring *VAR_4)
{
 struct amdgpu_device *VAR_5 = VAR_4->adev;

 if (VAR_4->use_doorbell)
  return VAR_5->wb.wb[VAR_4->wptr_offs];

 if (VAR_4->me == 0)
  return FUNC_0(FUNC_1(VAR_0, 0, VAR_1));
 else if (VAR_4->me == 1)
  return FUNC_0(FUNC_1(VAR_0, 0, VAR_2));
 else
  return FUNC_0(FUNC_1(VAR_0, 0, VAR_3));
}
