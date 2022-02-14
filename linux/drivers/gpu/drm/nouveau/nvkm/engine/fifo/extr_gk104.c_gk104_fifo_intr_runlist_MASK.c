
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_device {int dummy; } ;
struct TYPE_5__ {struct nvkm_device* device; } ;
struct TYPE_6__ {TYPE_1__ subdev; } ;
struct TYPE_7__ {TYPE_2__ engine; } ;
struct gk104_fifo {TYPE_4__* runlist; TYPE_3__ base; } ;
struct TYPE_8__ {int wait; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct nvkm_device*,int) ;
 int FUNC_2 (struct nvkm_device*,int,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct gk104_fifo *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->base.engine.subdev.device;
 u32 VAR_2 = FUNC_1(VAR_1, 0x002a00);
 while (VAR_2) {
  int VAR_3 = FUNC_0(VAR_2);
  FUNC_3(&VAR_0->runlist[VAR_3].wait);
  FUNC_2(VAR_1, 0x002a00, 1 << VAR_3);
  VAR_2 &= ~(1 << VAR_3);
 }
}
