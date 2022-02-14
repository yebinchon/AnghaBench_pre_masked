
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct amdgpu_ring {size_t wptr_offs; TYPE_2__* adev; scalar_t__ use_doorbell; } ;
typedef int atomic64_t ;
struct TYPE_3__ {int * wb; } ;
struct TYPE_4__ {TYPE_1__ wb; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;

__attribute__((used)) static u64 FUNC_2(struct amdgpu_ring *VAR_0)
{
 u64 VAR_1;


 if (VAR_0->use_doorbell)
  VAR_1 = FUNC_1((atomic64_t *)&VAR_0->adev->wb.wb[VAR_0->wptr_offs]);
 else
  FUNC_0();
 return VAR_1;
}
