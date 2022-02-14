
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
struct nv50_disp {TYPE_2__ base; } ;


 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (struct nvkm_device*,int) ;
 int FUNC_2 (struct nvkm_subdev*,char*,int) ;
 int FUNC_3 (struct nvkm_device*,int,int) ;

__attribute__((used)) static void
FUNC_4(struct nv50_disp *VAR_0, int VAR_1)
{
 struct nvkm_subdev *VAR_2 = &VAR_0->base.engine.subdev;
 struct nvkm_device *VAR_3 = VAR_2->device;
 u32 VAR_4 = FUNC_1(VAR_3, 0x611800 + (VAR_1 * 0x04));


 if (VAR_4 & 0x00000003) {
  FUNC_3(VAR_3, 0x611800 + (VAR_1 * 0x04), VAR_4 & 0x00000003);
  VAR_4 &= ~0x00000003;
 }

 if (VAR_4 & 0x00000004) {
  FUNC_0(&VAR_0->base, VAR_1);
  FUNC_3(VAR_3, 0x611800 + (VAR_1 * 0x04), 0x00000004);
  VAR_4 &= ~0x00000004;
 }

 if (VAR_4) {
  FUNC_2(VAR_2, "head %08x\n", VAR_4);
  FUNC_3(VAR_3, 0x611800 + (VAR_1 * 0x04), VAR_4);
 }
}
