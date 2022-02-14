
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_ring {int pipe; int me; } ;
struct TYPE_2__ {int num_gfx_rings; int num_compute_rings; int pipe_reserve_mutex; int pipe_reserve_bitmap; struct amdgpu_ring* compute_ring; struct amdgpu_ring* gfx_ring; } ;
struct amdgpu_device {TYPE_1__ gfx; } ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*,int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct amdgpu_ring*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int,int ) ;

__attribute__((used)) static void FUNC_8(struct amdgpu_device *VAR_1,
         struct amdgpu_ring *VAR_2,
         bool VAR_3)
{
 int VAR_4, VAR_5;
 bool VAR_6;
 struct amdgpu_ring *VAR_7;

 FUNC_4(&VAR_1->gfx.pipe_reserve_mutex);
 VAR_5 = FUNC_0(VAR_1, VAR_2->me, VAR_2->pipe, 0);
 if (VAR_3)
  FUNC_6(VAR_5, VAR_1->gfx.pipe_reserve_bitmap);
 else
  FUNC_2(VAR_5, VAR_1->gfx.pipe_reserve_bitmap);

 if (!FUNC_1(VAR_1->gfx.pipe_reserve_bitmap, VAR_0)) {

  for (VAR_4 = 0; VAR_4 < VAR_1->gfx.num_gfx_rings; ++VAR_4)
   FUNC_3(&VAR_1->gfx.gfx_ring[VAR_4],
             1);

  for (VAR_4 = 0; VAR_4 < VAR_1->gfx.num_compute_rings; ++VAR_4)
   FUNC_3(&VAR_1->gfx.compute_ring[VAR_4],
             1);
 } else {

  for (VAR_4 = 0; VAR_4 < VAR_1->gfx.num_gfx_rings; ++VAR_4) {
   VAR_7 = &VAR_1->gfx.gfx_ring[VAR_4];
   VAR_5 = FUNC_0(VAR_1,
          VAR_7->me,
          VAR_7->pipe,
          0);
   VAR_6 = FUNC_7(VAR_5, VAR_1->gfx.pipe_reserve_bitmap);
   FUNC_3(VAR_7, VAR_6);
  }

  for (VAR_4 = 0; VAR_4 < VAR_1->gfx.num_compute_rings; ++VAR_4) {
   VAR_7 = &VAR_1->gfx.compute_ring[VAR_4];
   VAR_5 = FUNC_0(VAR_1,
          VAR_7->me,
          VAR_7->pipe,
          0);
   VAR_6 = FUNC_7(VAR_5, VAR_1->gfx.pipe_reserve_bitmap);
   FUNC_3(VAR_7, VAR_6);
  }
 }

 FUNC_5(&VAR_1->gfx.pipe_reserve_mutex);
}
