
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amdgpu_ring {int me; int pipe; int queue; int use_doorbell; int doorbell_index; int name; int * ring_obj; } ;
struct TYPE_4__ {int eop_irq; struct amdgpu_ring* gfx_ring; } ;
struct TYPE_3__ {int gfx_ring0; int gfx_ring1; } ;
struct amdgpu_device {TYPE_2__ gfx; TYPE_1__ doorbell_index; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*,struct amdgpu_ring*,int,int *,unsigned int) ;
 int FUNC_1 (int ,char*,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct amdgpu_device *VAR_1, int VAR_2,
       int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6;
 struct amdgpu_ring *VAR_7;
 unsigned int VAR_8;

 VAR_7 = &VAR_1->gfx.gfx_ring[VAR_2];

 VAR_7->me = VAR_3;
 VAR_7->pipe = VAR_4;
 VAR_7->queue = VAR_5;

 VAR_7->ring_obj = ((void*)0);
 VAR_7->use_doorbell = 1;

 if (!VAR_2)
  VAR_7->doorbell_index = VAR_1->doorbell_index.gfx_ring0 << 1;
 else
  VAR_7->doorbell_index = VAR_1->doorbell_index.gfx_ring1 << 1;
 FUNC_1(VAR_7->name, "gfx_%d.%d.%d", VAR_7->me, VAR_7->pipe, VAR_7->queue);

 VAR_8 = VAR_0 + VAR_7->pipe;
 VAR_6 = FUNC_0(VAR_1, VAR_7, 1024,
        &VAR_1->gfx.eop_irq, VAR_8);
 if (VAR_6)
  return VAR_6;
 return 0;
}
