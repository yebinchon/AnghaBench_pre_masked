
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct amdgpu_ring {int dummy; } ;
struct TYPE_3__ {int num_mec; int num_pipe_per_mec; } ;
struct TYPE_4__ {int num_compute_rings; struct amdgpu_ring* compute_ring; TYPE_1__ mec; } ;
struct amdgpu_device {TYPE_2__ gfx; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct amdgpu_ring*) ;
 int FUNC_3 (struct amdgpu_device*,int,int) ;
 int FUNC_4 (struct amdgpu_device*,int) ;
 int FUNC_5 (struct amdgpu_device*,int) ;
 int FUNC_6 (struct amdgpu_device*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_7(struct amdgpu_device *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;
 u32 VAR_5;
 struct amdgpu_ring *VAR_6;


 VAR_5 = FUNC_0(VAR_0);
 VAR_5 |= (1 << 23);
 FUNC_1(VAR_0, VAR_5);


 for (VAR_3 = 0; VAR_3 < VAR_1->gfx.mec.num_mec; VAR_3++)
  for (VAR_4 = 0; VAR_4 < VAR_1->gfx.mec.num_pipe_per_mec; VAR_4++)
   FUNC_3(VAR_1, VAR_3, VAR_4);


 for (VAR_3 = 0; VAR_3 < VAR_1->gfx.num_compute_rings; VAR_3++) {
  VAR_2 = FUNC_4(VAR_1, VAR_3);
  if (VAR_2) {
   FUNC_6(VAR_1);
   return VAR_2;
  }
 }

 FUNC_5(VAR_1, 1);

 for (VAR_3 = 0; VAR_3 < VAR_1->gfx.num_compute_rings; VAR_3++) {
  VAR_6 = &VAR_1->gfx.compute_ring[VAR_3];
  FUNC_2(VAR_6);
 }

 return 0;
}
