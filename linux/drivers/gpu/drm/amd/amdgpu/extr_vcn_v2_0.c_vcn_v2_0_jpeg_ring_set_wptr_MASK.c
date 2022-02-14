
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_ring {size_t wptr_offs; int wptr; int doorbell_index; scalar_t__ use_doorbell; struct amdgpu_device* adev; } ;
struct TYPE_2__ {int * wb; } ;
struct amdgpu_device {TYPE_1__ wb; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct amdgpu_ring *VAR_2)
{
 struct amdgpu_device *VAR_3 = VAR_2->adev;

 if (VAR_2->use_doorbell) {
  VAR_3->wb.wb[VAR_2->wptr_offs] = FUNC_2(VAR_2->wptr);
  FUNC_0(VAR_2->doorbell_index, FUNC_2(VAR_2->wptr));
 } else {
  FUNC_1(VAR_0, 0, VAR_1, FUNC_2(VAR_2->wptr));
 }
}
