
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct amdgpu_ring {int me; int pipe; int queue; int use_doorbell; int name; scalar_t__ eop_gpu_addr; scalar_t__ doorbell_index; int * ring_obj; } ;
struct TYPE_5__ {int num_pipe_per_mec; scalar_t__ hpd_eop_gpu_addr; } ;
struct TYPE_6__ {int eop_irq; TYPE_2__ mec; struct amdgpu_ring* compute_ring; } ;
struct TYPE_4__ {scalar_t__ mec_ring0; } ;
struct amdgpu_device {TYPE_3__ gfx; TYPE_1__ doorbell_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amdgpu_device*,struct amdgpu_ring*,int,int *,unsigned int) ;
 int FUNC_1 (int ,char*,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct amdgpu_device *VAR_2, int VAR_3,
     int VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7;
 unsigned VAR_8;
 struct amdgpu_ring *VAR_9 = &VAR_2->gfx.compute_ring[VAR_3];

 VAR_9 = &VAR_2->gfx.compute_ring[VAR_3];


 VAR_9->me = VAR_4 + 1;
 VAR_9->pipe = VAR_5;
 VAR_9->queue = VAR_6;

 VAR_9->ring_obj = ((void*)0);
 VAR_9->use_doorbell = 1;
 VAR_9->doorbell_index = VAR_2->doorbell_index.mec_ring0 + VAR_3;
 VAR_9->eop_gpu_addr = VAR_2->gfx.mec.hpd_eop_gpu_addr
    + (VAR_3 * VAR_1);
 FUNC_1(VAR_9->name, "comp_%d.%d.%d", VAR_9->me, VAR_9->pipe, VAR_9->queue);

 VAR_8 = VAR_0
  + ((VAR_9->me - 1) * VAR_2->gfx.mec.num_pipe_per_mec)
  + VAR_9->pipe;


 VAR_7 = FUNC_0(VAR_2, VAR_9, 1024,
   &VAR_2->gfx.eop_irq, VAR_8);
 if (VAR_7)
  return VAR_7;


 return 0;
}
