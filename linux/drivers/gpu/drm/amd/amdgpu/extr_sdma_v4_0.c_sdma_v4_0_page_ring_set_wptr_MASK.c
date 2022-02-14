
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u64 ;
struct amdgpu_ring {size_t wptr_offs; int wptr; int me; int doorbell_index; scalar_t__ use_doorbell; struct amdgpu_device* adev; } ;
struct TYPE_2__ {int * wb; } ;
struct amdgpu_device {TYPE_1__ wb; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct amdgpu_ring *VAR_2)
{
 struct amdgpu_device *VAR_3 = VAR_2->adev;

 if (VAR_2->use_doorbell) {
  u64 *VAR_4 = (u64 *)&VAR_3->wb.wb[VAR_2->wptr_offs];


  FUNC_2(*VAR_4, (VAR_2->wptr << 2));
  FUNC_0(VAR_2->doorbell_index, VAR_2->wptr << 2);
 } else {
  uint64_t VAR_5 = VAR_2->wptr << 2;

  FUNC_1(VAR_2->me, VAR_0,
       FUNC_3(VAR_5));
  FUNC_1(VAR_2->me, VAR_1,
       FUNC_4(VAR_5));
 }
}
