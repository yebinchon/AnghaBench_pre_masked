
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct amdgpu_ring {size_t rptr_offs; TYPE_2__* adev; } ;
struct TYPE_3__ {int* wb; } ;
struct TYPE_4__ {TYPE_1__ wb; } ;



__attribute__((used)) static uint64_t FUNC_0(struct amdgpu_ring *VAR_0)
{

 return VAR_0->adev->wb.wb[VAR_0->rptr_offs] >> 2;
}
