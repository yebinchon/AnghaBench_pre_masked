
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amdgpu_ring {int dummy; } ;
struct TYPE_4__ {int num_compute_rings; struct amdgpu_ring* compute_ring; struct amdgpu_ring* gfx_ring; } ;
struct TYPE_3__ {scalar_t__ load_type; } ;
struct amdgpu_device {int flags; scalar_t__ asic_type; TYPE_2__ gfx; TYPE_1__ firmware; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct amdgpu_ring*) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*,int) ;
 int FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_7(struct amdgpu_device *VAR_3)
{
 int VAR_4, VAR_5;
 struct amdgpu_ring *VAR_6;

 if (!(VAR_3->flags & VAR_1))
  FUNC_4(VAR_3, 0);

 if (VAR_3->firmware.load_type != VAR_0) {
  if (VAR_3->asic_type != VAR_2) {

   VAR_4 = FUNC_2(VAR_3);
   if (VAR_4)
    return VAR_4;
  }

  VAR_4 = FUNC_1(VAR_3);
  if (VAR_4)
   return VAR_4;
 }

 VAR_4 = FUNC_6(VAR_3);
 if (VAR_4)
  return VAR_4;

 if (VAR_3->asic_type != VAR_2) {
  VAR_4 = FUNC_3(VAR_3);
  if (VAR_4)
   return VAR_4;
 }

 VAR_4 = FUNC_5(VAR_3);
 if (VAR_4)
  return VAR_4;

 if (VAR_3->asic_type != VAR_2) {
  VAR_6 = &VAR_3->gfx.gfx_ring[0];
  VAR_4 = FUNC_0(VAR_6);
  if (VAR_4)
   return VAR_4;
 }

 for (VAR_5 = 0; VAR_5 < VAR_3->gfx.num_compute_rings; VAR_5++) {
  VAR_6 = &VAR_3->gfx.compute_ring[VAR_5];
  FUNC_0(VAR_6);
 }

 FUNC_4(VAR_3, 1);

 return 0;
}
