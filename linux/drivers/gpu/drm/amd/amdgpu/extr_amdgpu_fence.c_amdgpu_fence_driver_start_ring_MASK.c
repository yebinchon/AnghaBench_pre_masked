
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_12__ {int gpu_addr; unsigned int irq_type; int initialized; int * cpu_addr; struct amdgpu_irq_src* irq_src; int last_seq; } ;
struct amdgpu_ring {size_t fence_offs; size_t me; TYPE_6__ fence_drv; int name; TYPE_1__* funcs; struct amdgpu_device* adev; } ;
struct amdgpu_irq_src {int dummy; } ;
struct TYPE_11__ {TYPE_4__* inst; TYPE_3__* fw; } ;
struct TYPE_8__ {int gpu_addr; int * wb; } ;
struct amdgpu_device {int dev; TYPE_5__ uvd; TYPE_2__ wb; } ;
struct TYPE_10__ {int gpu_addr; int * cpu_addr; } ;
struct TYPE_9__ {int size; } ;
struct TYPE_7__ {scalar_t__ type; } ;


 int FUNC_0 (int ,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,char*,int ,int,int *) ;
 int FUNC_2 (struct amdgpu_ring*,int ) ;
 int FUNC_3 (struct amdgpu_device*,struct amdgpu_irq_src*,unsigned int) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct amdgpu_ring *VAR_1,
       struct amdgpu_irq_src *VAR_2,
       unsigned VAR_3)
{
 struct amdgpu_device *VAR_4 = VAR_1->adev;
 uint64_t VAR_5;

 if (VAR_1->funcs->type != VAR_0) {
  VAR_1->fence_drv.cpu_addr = &VAR_4->wb.wb[VAR_1->fence_offs];
  VAR_1->fence_drv.gpu_addr = VAR_4->wb.gpu_addr + (VAR_1->fence_offs * 4);
 } else {

  VAR_5 = FUNC_0(VAR_4->uvd.fw->size, 8);
  VAR_1->fence_drv.cpu_addr = VAR_4->uvd.inst[VAR_1->me].cpu_addr + VAR_5;
  VAR_1->fence_drv.gpu_addr = VAR_4->uvd.inst[VAR_1->me].gpu_addr + VAR_5;
 }
 FUNC_2(VAR_1, FUNC_4(&VAR_1->fence_drv.last_seq));
 FUNC_3(VAR_4, VAR_2, VAR_3);

 VAR_1->fence_drv.irq_src = VAR_2;
 VAR_1->fence_drv.irq_type = VAR_3;
 VAR_1->fence_drv.initialized = 1;

 FUNC_1(VAR_4->dev, "fence driver on ring %s use gpu addr "
        "0x%016llx, cpu addr 0x%p\n", VAR_1->name,
        VAR_1->fence_drv.gpu_addr, VAR_1->fence_drv.cpu_addr);
 return 0;
}
