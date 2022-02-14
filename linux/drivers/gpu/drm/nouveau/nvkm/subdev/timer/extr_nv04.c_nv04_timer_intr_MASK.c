
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_timer {struct nvkm_subdev subdev; } ;
struct nvkm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_subdev*,char*,int) ;
 int FUNC_1 (struct nvkm_device*,int ) ;
 int FUNC_2 (struct nvkm_timer*) ;
 int FUNC_3 (struct nvkm_device*,int ,int) ;

void
FUNC_4(struct nvkm_timer *VAR_1)
{
 struct nvkm_subdev *VAR_2 = &VAR_1->subdev;
 struct nvkm_device *VAR_3 = VAR_2->device;
 u32 VAR_4 = FUNC_1(VAR_3, VAR_0);

 if (VAR_4 & 0x00000001) {
  FUNC_3(VAR_3, VAR_0, 0x00000001);
  FUNC_2(VAR_1);
  VAR_4 &= ~0x00000001;
 }

 if (VAR_4) {
  FUNC_0(VAR_2, "intr %08x\n", VAR_4);
  FUNC_3(VAR_3, VAR_0, VAR_4);
 }
}
