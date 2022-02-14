
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
struct gf100_fifo {TYPE_3__ base; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct gf100_fifo*,int) ;
 int FUNC_2 (struct nvkm_device*,int) ;

void
FUNC_3(struct gf100_fifo *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->base.engine.subdev.device;
 u32 VAR_2 = FUNC_2(VAR_1, 0x0025a4);
 while (VAR_2) {
  u32 VAR_3 = FUNC_0(VAR_2);
  FUNC_1(VAR_0, VAR_3);
  VAR_2 &= ~(1 << VAR_3);
 }
}
