
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_ring {size_t wptr_offs; int wptr; int doorbell_index; scalar_t__ use_doorbell; struct amdgpu_device* adev; } ;
struct TYPE_2__ {int* wb; } ;
struct amdgpu_device {int pg_flags; TYPE_1__ wb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(struct amdgpu_ring *VAR_4)
{
 struct amdgpu_device *VAR_5 = VAR_4->adev;

 if (VAR_5->pg_flags & VAR_0)
  FUNC_1(VAR_1, 0, VAR_3,
   FUNC_2(VAR_4->wptr) | 0x80000000);

 if (VAR_4->use_doorbell) {
  VAR_5->wb.wb[VAR_4->wptr_offs] = FUNC_2(VAR_4->wptr);
  FUNC_0(VAR_4->doorbell_index, FUNC_2(VAR_4->wptr));
 } else {
  FUNC_1(VAR_1, 0, VAR_2, FUNC_2(VAR_4->wptr));
 }
}
