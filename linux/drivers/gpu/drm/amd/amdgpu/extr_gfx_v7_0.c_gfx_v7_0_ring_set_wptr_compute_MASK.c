
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_ring {size_t wptr_offs; int wptr; int doorbell_index; struct amdgpu_device* adev; } ;
struct TYPE_2__ {int * wb; } ;
struct amdgpu_device {TYPE_1__ wb; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct amdgpu_ring *VAR_0)
{
 struct amdgpu_device *VAR_1 = VAR_0->adev;


 VAR_1->wb.wb[VAR_0->wptr_offs] = FUNC_1(VAR_0->wptr);
 FUNC_0(VAR_0->doorbell_index, FUNC_1(VAR_0->wptr));
}
