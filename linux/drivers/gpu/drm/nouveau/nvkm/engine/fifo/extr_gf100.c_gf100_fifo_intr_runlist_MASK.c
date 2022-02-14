
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_6__ {int wait; } ;
struct TYPE_4__ {struct nvkm_subdev subdev; } ;
struct TYPE_5__ {TYPE_1__ engine; } ;
struct gf100_fifo {TYPE_3__ runlist; TYPE_2__ base; } ;


 int FUNC_0 (struct nvkm_subdev*,char*,int) ;
 int FUNC_1 (struct nvkm_device*,int) ;
 int FUNC_2 (struct nvkm_device*,int,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct gf100_fifo *VAR_0)
{
 struct nvkm_subdev *VAR_1 = &VAR_0->base.engine.subdev;
 struct nvkm_device *VAR_2 = VAR_1->device;
 u32 VAR_3 = FUNC_1(VAR_2, 0x002a00);

 if (VAR_3 & 0x10000000) {
  FUNC_3(&VAR_0->runlist.wait);
  FUNC_2(VAR_2, 0x002a00, 0x10000000);
  VAR_3 &= ~0x10000000;
 }

 if (VAR_3) {
  FUNC_0(VAR_1, "RUNLIST %08x\n", VAR_3);
  FUNC_2(VAR_2, 0x002a00, VAR_3);
 }
}
