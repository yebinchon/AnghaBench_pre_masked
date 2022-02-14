
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amdgpu_ring {int doorbell_index; } ;
struct TYPE_3__ {struct amdgpu_ring ring; } ;
struct TYPE_4__ {int num_compute_rings; struct amdgpu_ring* compute_ring; TYPE_1__ kiq; } ;
struct amdgpu_device {TYPE_2__ gfx; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct amdgpu_ring*,int) ;
 int FUNC_8 (struct amdgpu_ring*) ;
 int FUNC_9 (struct amdgpu_ring*,int) ;

__attribute__((used)) static int FUNC_10(struct amdgpu_device *VAR_1)
{
 int VAR_2, VAR_3;
 struct amdgpu_ring *VAR_4 = &VAR_1->gfx.kiq.ring;

 VAR_2 = FUNC_7(VAR_4, 6 * VAR_1->gfx.num_compute_rings);
 if (VAR_2)
  FUNC_0("Failed to lock KIQ (%d).\n", VAR_2);

 for (VAR_3 = 0; VAR_3 < VAR_1->gfx.num_compute_rings; VAR_3++) {
  struct amdgpu_ring *VAR_5 = &VAR_1->gfx.compute_ring[VAR_3];

  FUNC_9(VAR_4, FUNC_1(VAR_0, 4));
  FUNC_9(VAR_4,
      FUNC_2(1) |
      FUNC_6(0) |
      FUNC_4(0) |
      FUNC_5(1));
  FUNC_9(VAR_4, FUNC_3(VAR_5->doorbell_index));
  FUNC_9(VAR_4, 0);
  FUNC_9(VAR_4, 0);
  FUNC_9(VAR_4, 0);
 }
 VAR_2 = FUNC_8(VAR_4);
 if (VAR_2)
  FUNC_0("KCQ disable failed\n");

 return VAR_2;
}
