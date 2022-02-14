
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_device {int dummy; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct TYPE_6__ {TYPE_2__ engine; } ;
struct gk104_fifo {int pbdma_nr; TYPE_3__ base; } ;


 int FUNC_0 (struct nvkm_device*,int,int,int) ;

__attribute__((used)) static void
FUNC_1(struct gk104_fifo *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->base.engine.subdev.device;
 const u32 VAR_2 = (1 << VAR_0->pbdma_nr) - 1;

 FUNC_0(VAR_1, 0xb65000, 0x80000fff, 0x80000000 | VAR_2);
}
