
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct amdgpu_ring {int use_doorbell; int me; int pipe; int queue; int name; int eop_gpu_addr; int doorbell_index; int * ring_obj; int * adev; } ;
struct amdgpu_kiq {int eop_gpu_addr; int ring_lock; } ;
struct amdgpu_irq_src {int dummy; } ;
struct TYPE_6__ {int kiq; } ;
struct TYPE_5__ {int reg_val_offs; } ;
struct TYPE_4__ {struct amdgpu_kiq kiq; } ;
struct amdgpu_device {int dev; TYPE_3__ doorbell_index; TYPE_2__ virt; TYPE_1__ gfx; } ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*,int *) ;
 int FUNC_1 (struct amdgpu_device*,struct amdgpu_ring*) ;
 int FUNC_2 (struct amdgpu_device*,struct amdgpu_ring*,int,struct amdgpu_irq_src*,int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,int,int,int) ;

int FUNC_6(struct amdgpu_device *VAR_1,
        struct amdgpu_ring *VAR_2,
        struct amdgpu_irq_src *VAR_3)
{
 struct amdgpu_kiq *VAR_4 = &VAR_1->gfx.kiq;
 int VAR_5 = 0;

 FUNC_4(&VAR_4->ring_lock);

 VAR_5 = FUNC_0(VAR_1, &VAR_1->virt.reg_val_offs);
 if (VAR_5)
  return VAR_5;

 VAR_2->adev = ((void*)0);
 VAR_2->ring_obj = ((void*)0);
 VAR_2->use_doorbell = 1;
 VAR_2->doorbell_index = VAR_1->doorbell_index.kiq;

 VAR_5 = FUNC_1(VAR_1, VAR_2);
 if (VAR_5)
  return VAR_5;

 VAR_2->eop_gpu_addr = VAR_4->eop_gpu_addr;
 FUNC_5(VAR_2->name, "kiq_%d.%d.%d", VAR_2->me, VAR_2->pipe, VAR_2->queue);
 VAR_5 = FUNC_2(VAR_1, VAR_2, 1024,
        VAR_3, VAR_0);
 if (VAR_5)
  FUNC_3(VAR_1->dev, "(%d) failed to init kiq ring\n", VAR_5);

 return VAR_5;
}
