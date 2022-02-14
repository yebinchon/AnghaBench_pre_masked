
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct amdgpu_ring {size_t wptr_offs; int wptr; int doorbell_index; scalar_t__ use_doorbell; struct amdgpu_device* adev; } ;
struct TYPE_6__ {void** wb; } ;
struct TYPE_5__ {TYPE_1__* inst; } ;
struct amdgpu_device {TYPE_3__ wb; TYPE_2__ vcn; } ;
struct TYPE_4__ {struct amdgpu_ring* ring_enc; } ;


 int VAR_0 ;
 int FUNC_0 (int ,void*) ;
 int FUNC_1 (int ,int ,int ,void*) ;
 void* FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(struct amdgpu_ring *VAR_3)
{
 struct amdgpu_device *VAR_4 = VAR_3->adev;

 if (VAR_3 == &VAR_4->vcn.inst->ring_enc[0]) {
  if (VAR_3->use_doorbell) {
   VAR_4->wb.wb[VAR_3->wptr_offs] = FUNC_2(VAR_3->wptr);
   FUNC_0(VAR_3->doorbell_index, FUNC_2(VAR_3->wptr));
  } else {
   FUNC_1(VAR_0, 0, VAR_1, FUNC_2(VAR_3->wptr));
  }
 } else {
  if (VAR_3->use_doorbell) {
   VAR_4->wb.wb[VAR_3->wptr_offs] = FUNC_2(VAR_3->wptr);
   FUNC_0(VAR_3->doorbell_index, FUNC_2(VAR_3->wptr));
  } else {
   FUNC_1(VAR_0, 0, VAR_2, FUNC_2(VAR_3->wptr));
  }
 }
}
