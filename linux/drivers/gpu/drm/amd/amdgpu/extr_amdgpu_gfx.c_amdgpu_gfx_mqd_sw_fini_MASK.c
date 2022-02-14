
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct amdgpu_ring {int mqd_ptr; int mqd_gpu_addr; int mqd_obj; } ;
struct TYPE_7__ {int * mqd_backup; } ;
struct TYPE_6__ {int * mqd_backup; } ;
struct TYPE_5__ {struct amdgpu_ring ring; } ;
struct TYPE_8__ {int num_gfx_rings; int num_compute_rings; TYPE_3__ mec; TYPE_2__ me; TYPE_1__ kiq; struct amdgpu_ring* compute_ring; struct amdgpu_ring* gfx_ring; } ;
struct amdgpu_device {scalar_t__ asic_type; TYPE_4__ gfx; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct amdgpu_device *VAR_4)
{
 struct amdgpu_ring *VAR_5 = ((void*)0);
 int VAR_6;

 if (VAR_4->asic_type >= VAR_2 && VAR_3) {
  for (VAR_6 = 0; VAR_6 < VAR_4->gfx.num_gfx_rings; VAR_6++) {
   VAR_5 = &VAR_4->gfx.gfx_ring[VAR_6];
   FUNC_1(VAR_4->gfx.me.mqd_backup[VAR_6]);
   FUNC_0(&VAR_5->mqd_obj,
           &VAR_5->mqd_gpu_addr,
           &VAR_5->mqd_ptr);
  }
 }

 for (VAR_6 = 0; VAR_6 < VAR_4->gfx.num_compute_rings; VAR_6++) {
  VAR_5 = &VAR_4->gfx.compute_ring[VAR_6];
  FUNC_1(VAR_4->gfx.mec.mqd_backup[VAR_6]);
  FUNC_0(&VAR_5->mqd_obj,
          &VAR_5->mqd_gpu_addr,
          &VAR_5->mqd_ptr);
 }

 VAR_5 = &VAR_4->gfx.kiq.ring;
 if (VAR_4->asic_type >= VAR_2 && VAR_3)
  FUNC_1(VAR_4->gfx.me.mqd_backup[VAR_1]);
 FUNC_1(VAR_4->gfx.mec.mqd_backup[VAR_0]);
 FUNC_0(&VAR_5->mqd_obj,
         &VAR_5->mqd_gpu_addr,
         &VAR_5->mqd_ptr);
}
