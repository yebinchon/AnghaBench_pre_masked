
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct amdgpu_ring {struct amdgpu_device* adev; } ;
struct TYPE_2__ {struct amdgpu_ring* compute_ring; struct amdgpu_ring* gfx_ring; } ;
struct amdgpu_device {TYPE_1__ gfx; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static u64 FUNC_2(struct amdgpu_ring *VAR_3)
{
 struct amdgpu_device *VAR_4 = VAR_3->adev;

 if (VAR_3 == &VAR_4->gfx.gfx_ring[0])
  return FUNC_1(VAR_0);
 else if (VAR_3 == &VAR_4->gfx.compute_ring[0])
  return FUNC_1(VAR_1);
 else if (VAR_3 == &VAR_4->gfx.compute_ring[1])
  return FUNC_1(VAR_2);
 else
  FUNC_0();
}
