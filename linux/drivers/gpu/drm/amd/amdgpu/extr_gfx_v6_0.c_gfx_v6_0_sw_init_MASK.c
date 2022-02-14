
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct amdgpu_ring {int use_doorbell; int me; int pipe; int queue; int name; scalar_t__ doorbell_index; int * ring_obj; } ;
struct TYPE_5__ {TYPE_1__* funcs; } ;
struct TYPE_6__ {int num_gfx_rings; int num_compute_rings; int eop_irq; struct amdgpu_ring* compute_ring; struct amdgpu_ring* gfx_ring; TYPE_2__ rlc; int priv_inst_irq; int priv_reg_irq; } ;
struct amdgpu_device {TYPE_3__ gfx; } ;
struct TYPE_4__ {int (* init ) (struct amdgpu_device*) ;} ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct amdgpu_device*,int ,int,int *) ;
 int FUNC_2 (struct amdgpu_device*,struct amdgpu_ring*,int,int *,unsigned int) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_7(void *VAR_4)
{
 struct amdgpu_ring *VAR_5;
 struct amdgpu_device *VAR_6 = (struct amdgpu_device *)VAR_4;
 int VAR_7, VAR_8;

 VAR_8 = FUNC_1(VAR_6, VAR_2, 181, &VAR_6->gfx.eop_irq);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_1(VAR_6, VAR_2, 184, &VAR_6->gfx.priv_reg_irq);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_1(VAR_6, VAR_2, 185, &VAR_6->gfx.priv_inst_irq);
 if (VAR_8)
  return VAR_8;

 FUNC_4(VAR_6);

 VAR_8 = FUNC_3(VAR_6);
 if (VAR_8) {
  FUNC_0("Failed to load gfx firmware!\n");
  return VAR_8;
 }

 VAR_8 = VAR_6->gfx.rlc.funcs->init(VAR_6);
 if (VAR_8) {
  FUNC_0("Failed to init rlc BOs!\n");
  return VAR_8;
 }

 for (VAR_7 = 0; VAR_7 < VAR_6->gfx.num_gfx_rings; VAR_7++) {
  VAR_5 = &VAR_6->gfx.gfx_ring[VAR_7];
  VAR_5->ring_obj = ((void*)0);
  FUNC_5(VAR_5->name, "gfx");
  VAR_8 = FUNC_2(VAR_6, VAR_5, 1024,
         &VAR_6->gfx.eop_irq, VAR_1);
  if (VAR_8)
   return VAR_8;
 }

 for (VAR_7 = 0; VAR_7 < VAR_6->gfx.num_compute_rings; VAR_7++) {
  unsigned VAR_9;

  if ((VAR_7 >= 32) || (VAR_7 >= VAR_3)) {
   FUNC_0("Too many (%d) compute rings!\n", VAR_7);
   break;
  }
  VAR_5 = &VAR_6->gfx.compute_ring[VAR_7];
  VAR_5->ring_obj = ((void*)0);
  VAR_5->use_doorbell = 0;
  VAR_5->doorbell_index = 0;
  VAR_5->me = 1;
  VAR_5->pipe = VAR_7;
  VAR_5->queue = VAR_7;
  FUNC_5(VAR_5->name, "comp_%d.%d.%d", VAR_5->me, VAR_5->pipe, VAR_5->queue);
  VAR_9 = VAR_0 + VAR_5->pipe;
  VAR_8 = FUNC_2(VAR_6, VAR_5, 1024,
         &VAR_6->gfx.eop_irq, VAR_9);
  if (VAR_8)
   return VAR_8;
 }

 return VAR_8;
}
