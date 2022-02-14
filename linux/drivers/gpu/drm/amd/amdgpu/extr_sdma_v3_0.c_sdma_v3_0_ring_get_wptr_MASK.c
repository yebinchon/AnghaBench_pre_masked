
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u32 ;
struct amdgpu_ring {size_t wptr_offs; size_t me; struct amdgpu_device* adev; scalar_t__ use_pollmem; scalar_t__ use_doorbell; } ;
struct TYPE_2__ {int* wb; } ;
struct amdgpu_device {TYPE_1__ wb; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__* VAR_1 ;

__attribute__((used)) static uint64_t FUNC_1(struct amdgpu_ring *VAR_2)
{
 struct amdgpu_device *VAR_3 = VAR_2->adev;
 u32 VAR_4;

 if (VAR_2->use_doorbell || VAR_2->use_pollmem) {

  VAR_4 = VAR_2->adev->wb.wb[VAR_2->wptr_offs] >> 2;
 } else {
  VAR_4 = FUNC_0(VAR_0 + VAR_1[VAR_2->me]) >> 2;
 }

 return VAR_4;
}
