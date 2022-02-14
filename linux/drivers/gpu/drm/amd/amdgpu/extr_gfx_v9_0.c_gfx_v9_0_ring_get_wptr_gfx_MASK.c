
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct amdgpu_ring {size_t wptr_offs; scalar_t__ use_doorbell; struct amdgpu_device* adev; } ;
struct TYPE_2__ {int * wb; } ;
struct amdgpu_device {TYPE_1__ wb; } ;
typedef int atomic64_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static u64 FUNC_2(struct amdgpu_ring *VAR_3)
{
 struct amdgpu_device *VAR_4 = VAR_3->adev;
 u64 VAR_5;


 if (VAR_3->use_doorbell) {
  VAR_5 = FUNC_1((atomic64_t *)&VAR_4->wb.wb[VAR_3->wptr_offs]);
 } else {
  VAR_5 = FUNC_0(VAR_0, 0, VAR_1);
  VAR_5 += (u64)FUNC_0(VAR_0, 0, VAR_2) << 32;
 }

 return VAR_5;
}
