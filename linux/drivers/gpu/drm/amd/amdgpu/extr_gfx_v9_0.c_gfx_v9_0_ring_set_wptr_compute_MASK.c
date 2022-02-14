
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_ring {size_t wptr_offs; int wptr; int doorbell_index; scalar_t__ use_doorbell; struct amdgpu_device* adev; } ;
struct TYPE_2__ {int * wb; } ;
struct amdgpu_device {TYPE_1__ wb; } ;
typedef int atomic64_t ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(struct amdgpu_ring *VAR_0)
{
 struct amdgpu_device *VAR_1 = VAR_0->adev;


 if (VAR_0->use_doorbell) {
  FUNC_2((atomic64_t*)&VAR_1->wb.wb[VAR_0->wptr_offs], VAR_0->wptr);
  FUNC_1(VAR_0->doorbell_index, VAR_0->wptr);
 } else{
  FUNC_0();
 }
}
