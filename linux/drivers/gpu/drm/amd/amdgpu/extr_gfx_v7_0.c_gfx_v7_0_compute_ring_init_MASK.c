
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct amdgpu_ring {int me; int pipe; int queue; int use_doorbell; int name; scalar_t__ doorbell_index; int * ring_obj; } ;
struct TYPE_5__ {int num_pipe_per_mec; } ;
struct TYPE_6__ {int eop_irq; TYPE_2__ mec; struct amdgpu_ring* compute_ring; } ;
struct TYPE_4__ {scalar_t__ mec_ring0; } ;
struct amdgpu_device {TYPE_3__ gfx; TYPE_1__ doorbell_index; } ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*,struct amdgpu_ring*,int,int *,unsigned int) ;
 int FUNC_1 (int ,char*,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct amdgpu_device *VAR_1, int VAR_2,
     int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6;
 unsigned VAR_7;
 struct amdgpu_ring *VAR_8 = &VAR_1->gfx.compute_ring[VAR_2];


 VAR_8->me = VAR_3 + 1;
 VAR_8->pipe = VAR_4;
 VAR_8->queue = VAR_5;

 VAR_8->ring_obj = ((void*)0);
 VAR_8->use_doorbell = 1;
 VAR_8->doorbell_index = VAR_1->doorbell_index.mec_ring0 + VAR_2;
 FUNC_1(VAR_8->name, "comp_%d.%d.%d", VAR_8->me, VAR_8->pipe, VAR_8->queue);

 VAR_7 = VAR_0
  + ((VAR_8->me - 1) * VAR_1->gfx.mec.num_pipe_per_mec)
  + VAR_8->pipe;


 VAR_6 = FUNC_0(VAR_1, VAR_8, 1024,
   &VAR_1->gfx.eop_irq, VAR_7);
 if (VAR_6)
  return VAR_6;


 return 0;
}
