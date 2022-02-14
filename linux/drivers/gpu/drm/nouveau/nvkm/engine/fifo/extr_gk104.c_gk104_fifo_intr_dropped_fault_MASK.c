
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_3__ {struct nvkm_subdev subdev; } ;
struct TYPE_4__ {TYPE_1__ engine; } ;
struct gk104_fifo {TYPE_2__ base; } ;


 int FUNC_0 (struct nvkm_subdev*,char*,int ) ;
 int FUNC_1 (struct nvkm_device*,int) ;

__attribute__((used)) static void
FUNC_2(struct gk104_fifo *VAR_0)
{
 struct nvkm_subdev *VAR_1 = &VAR_0->base.engine.subdev;
 struct nvkm_device *VAR_2 = VAR_1->device;
 u32 VAR_3 = FUNC_1(VAR_2, 0x00259c);
 FUNC_0(VAR_1, "DROPPED_MMU_FAULT %08x\n", VAR_3);
}
