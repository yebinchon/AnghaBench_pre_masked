
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct amdgpu_ring {size_t wptr_offs; size_t me; int wptr; scalar_t__ use_pollmem; int doorbell_index; scalar_t__ use_doorbell; struct amdgpu_device* adev; } ;
struct TYPE_2__ {int * wb; } ;
struct amdgpu_device {TYPE_1__ wb; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__* VAR_1 ;

__attribute__((used)) static void FUNC_4(struct amdgpu_ring *VAR_2)
{
 struct amdgpu_device *VAR_3 = VAR_2->adev;

 if (VAR_2->use_doorbell) {
  u32 *VAR_4 = (u32 *)&VAR_3->wb.wb[VAR_2->wptr_offs];

  FUNC_2(*VAR_4, (FUNC_3(VAR_2->wptr) << 2));
  FUNC_0(VAR_2->doorbell_index, FUNC_3(VAR_2->wptr) << 2);
 } else if (VAR_2->use_pollmem) {
  u32 *VAR_5 = (u32 *)&VAR_3->wb.wb[VAR_2->wptr_offs];

  FUNC_2(*VAR_5, (FUNC_3(VAR_2->wptr) << 2));
 } else {
  FUNC_1(VAR_0 + VAR_1[VAR_2->me], FUNC_3(VAR_2->wptr) << 2);
 }
}
