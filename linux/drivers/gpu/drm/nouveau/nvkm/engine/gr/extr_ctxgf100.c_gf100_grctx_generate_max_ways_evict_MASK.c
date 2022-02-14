
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
struct gf100_gr {TYPE_3__ base; } ;


 int FUNC_0 (struct nvkm_device*,int,int,int) ;
 int FUNC_1 (struct nvkm_device*,int) ;

void
FUNC_2(struct gf100_gr *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->base.engine.subdev.device;
 u32 VAR_2 = FUNC_1(VAR_1, 0x121c74);
 if (VAR_2 == 1)
  FUNC_0(VAR_1, 0x17e91c, 0x001f0000, 0x00090000);
}
