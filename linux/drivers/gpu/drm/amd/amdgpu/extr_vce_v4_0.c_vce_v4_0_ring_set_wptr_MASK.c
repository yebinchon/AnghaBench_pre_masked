
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_ring {size_t wptr_offs; int me; int wptr; int doorbell_index; scalar_t__ use_doorbell; struct amdgpu_device* adev; } ;
struct TYPE_2__ {int * wb; } ;
struct amdgpu_device {TYPE_1__ wb; } ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(struct amdgpu_ring *VAR_4)
{
 struct amdgpu_device *VAR_5 = VAR_4->adev;

 if (VAR_4->use_doorbell) {

  VAR_5->wb.wb[VAR_4->wptr_offs] = FUNC_3(VAR_4->wptr);
  FUNC_1(VAR_4->doorbell_index, FUNC_3(VAR_4->wptr));
  return;
 }

 if (VAR_4->me == 0)
  FUNC_2(FUNC_0(VAR_0, 0, VAR_1),
   FUNC_3(VAR_4->wptr));
 else if (VAR_4->me == 1)
  FUNC_2(FUNC_0(VAR_0, 0, VAR_2),
   FUNC_3(VAR_4->wptr));
 else
  FUNC_2(FUNC_0(VAR_0, 0, VAR_3),
   FUNC_3(VAR_4->wptr));
}
