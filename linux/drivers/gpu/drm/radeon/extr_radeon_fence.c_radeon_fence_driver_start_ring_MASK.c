
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_9__ {scalar_t__ gpu_addr; int * wb; scalar_t__ use_event; } ;
struct TYPE_8__ {int reg_base; } ;
struct TYPE_7__ {scalar_t__ gpu_addr; int * cpu_addr; } ;
struct radeon_device {TYPE_5__* fence_drv; int dev; TYPE_4__ wb; TYPE_3__ scratch; TYPE_2__ uvd; TYPE_1__* uvd_fw; int * ring; } ;
struct TYPE_10__ {int scratch_reg; int initialized; int * cpu_addr; scalar_t__ gpu_addr; int last_seq; } ;
struct TYPE_6__ {int size; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,int,scalar_t__,int *) ;
 int FUNC_4 (struct radeon_device*,int ,int) ;
 int FUNC_5 (struct radeon_device*,int *) ;
 int FUNC_6 (struct radeon_device*,int) ;
 int FUNC_7 (struct radeon_device*,int*) ;

int FUNC_8(struct radeon_device *VAR_3, int VAR_4)
{
 uint64_t VAR_5;
 int VAR_6;

 FUNC_6(VAR_3, VAR_3->fence_drv[VAR_4].scratch_reg);
 if (VAR_3->wb.use_event || !FUNC_5(VAR_3, &VAR_3->ring[VAR_4])) {
  VAR_3->fence_drv[VAR_4].scratch_reg = 0;
  if (VAR_4 != VAR_0) {
   VAR_5 = VAR_1 + VAR_4 * 4;
   VAR_3->fence_drv[VAR_4].cpu_addr = &VAR_3->wb.wb[VAR_5/4];
   VAR_3->fence_drv[VAR_4].gpu_addr = VAR_3->wb.gpu_addr +
        VAR_5;

  } else {

   VAR_5 = FUNC_0(VAR_3->uvd_fw->size, 8);
   VAR_3->fence_drv[VAR_4].cpu_addr = VAR_3->uvd.cpu_addr + VAR_5;
   VAR_3->fence_drv[VAR_4].gpu_addr = VAR_3->uvd.gpu_addr + VAR_5;
  }

 } else {
  VAR_6 = FUNC_7(VAR_3, &VAR_3->fence_drv[VAR_4].scratch_reg);
  if (VAR_6) {
   FUNC_2(VAR_3->dev, "fence failed to get scratch register\n");
   return VAR_6;
  }
  VAR_5 = VAR_2 +
   VAR_3->fence_drv[VAR_4].scratch_reg -
   VAR_3->scratch.reg_base;
  VAR_3->fence_drv[VAR_4].cpu_addr = &VAR_3->wb.wb[VAR_5/4];
  VAR_3->fence_drv[VAR_4].gpu_addr = VAR_3->wb.gpu_addr + VAR_5;
 }
 FUNC_4(VAR_3, FUNC_1(&VAR_3->fence_drv[VAR_4].last_seq), VAR_4);
 VAR_3->fence_drv[VAR_4].initialized = 1;
 FUNC_3(VAR_3->dev, "fence driver on ring %d use gpu addr 0x%016llx and cpu addr 0x%p\n",
   VAR_4, VAR_3->fence_drv[VAR_4].gpu_addr, VAR_3->fence_drv[VAR_4].cpu_addr);
 return 0;
}
