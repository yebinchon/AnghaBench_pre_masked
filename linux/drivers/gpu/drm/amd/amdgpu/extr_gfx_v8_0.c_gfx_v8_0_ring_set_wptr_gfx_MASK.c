
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_ring {size_t wptr_offs; int wptr; int doorbell_index; scalar_t__ use_doorbell; struct amdgpu_device* adev; } ;
struct TYPE_2__ {int * wb; } ;
struct amdgpu_device {TYPE_1__ wb; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct amdgpu_ring *VAR_1)
{
 struct amdgpu_device *VAR_2 = VAR_1->adev;

 if (VAR_1->use_doorbell) {

  VAR_2->wb.wb[VAR_1->wptr_offs] = FUNC_3(VAR_1->wptr);
  FUNC_1(VAR_1->doorbell_index, FUNC_3(VAR_1->wptr));
 } else {
  FUNC_2(VAR_0, FUNC_3(VAR_1->wptr));
  (void)FUNC_0(VAR_0);
 }
}
