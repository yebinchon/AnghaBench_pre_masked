
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_ring {size_t wptr_offs; int wptr; int doorbell_index; scalar_t__ use_doorbell; struct amdgpu_device* adev; } ;
struct TYPE_2__ {int * wb; } ;
struct amdgpu_device {TYPE_1__ wb; } ;
typedef int atomic64_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct amdgpu_ring *VAR_3)
{
 struct amdgpu_device *VAR_4 = VAR_3->adev;

 if (VAR_3->use_doorbell) {

  FUNC_2((atomic64_t *)&VAR_4->wb.wb[VAR_3->wptr_offs], VAR_3->wptr);
  FUNC_0(VAR_3->doorbell_index, VAR_3->wptr);
 } else {
  FUNC_1(VAR_0, 0, VAR_1, FUNC_3(VAR_3->wptr));
  FUNC_1(VAR_0, 0, VAR_2, FUNC_4(VAR_3->wptr));
 }
}
