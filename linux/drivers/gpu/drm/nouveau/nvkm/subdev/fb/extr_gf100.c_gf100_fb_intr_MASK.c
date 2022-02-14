
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_fb {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_2__ {struct nvkm_subdev subdev; } ;
struct gf100_fb {TYPE_1__ base; } ;


 struct gf100_fb* FUNC_0 (struct nvkm_fb*) ;
 int FUNC_1 (struct nvkm_subdev*,char*) ;
 int FUNC_2 (struct nvkm_device*,int) ;

void
FUNC_3(struct nvkm_fb *VAR_0)
{
 struct gf100_fb *VAR_1 = FUNC_0(VAR_0);
 struct nvkm_subdev *VAR_2 = &VAR_1->base.subdev;
 struct nvkm_device *VAR_3 = VAR_2->device;
 u32 VAR_4 = FUNC_2(VAR_3, 0x000100);
 if (VAR_4 & 0x08000000)
  FUNC_1(VAR_2, "PFFB intr\n");
 if (VAR_4 & 0x00002000)
  FUNC_1(VAR_2, "PBFB intr\n");
}
