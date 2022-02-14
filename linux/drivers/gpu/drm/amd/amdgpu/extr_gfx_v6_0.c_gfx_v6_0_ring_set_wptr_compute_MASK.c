
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_ring {int wptr; struct amdgpu_device* adev; } ;
struct TYPE_2__ {struct amdgpu_ring* compute_ring; } ;
struct amdgpu_device {TYPE_1__ gfx; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(struct amdgpu_ring *VAR_2)
{
 struct amdgpu_device *VAR_3 = VAR_2->adev;

 if (VAR_2 == &VAR_3->gfx.compute_ring[0]) {
  FUNC_2(VAR_0, FUNC_3(VAR_2->wptr));
  (void)FUNC_1(VAR_0);
 } else if (VAR_2 == &VAR_3->gfx.compute_ring[1]) {
  FUNC_2(VAR_1, FUNC_3(VAR_2->wptr));
  (void)FUNC_1(VAR_1);
 } else {
  FUNC_0();
 }

}
