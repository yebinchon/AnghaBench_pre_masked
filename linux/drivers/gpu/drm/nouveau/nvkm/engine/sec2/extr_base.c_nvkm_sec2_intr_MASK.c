
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_sec2 {scalar_t__ addr; int work; } ;
struct nvkm_engine {struct nvkm_subdev subdev; } ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (struct nvkm_subdev*,char*,int) ;
 int FUNC_1 (struct nvkm_device*,scalar_t__) ;
 struct nvkm_sec2* FUNC_2 (struct nvkm_engine*) ;
 int FUNC_3 (struct nvkm_device*,scalar_t__,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct nvkm_engine *VAR_0)
{
 struct nvkm_sec2 *VAR_1 = FUNC_2(VAR_0);
 struct nvkm_subdev *VAR_2 = &VAR_0->subdev;
 struct nvkm_device *VAR_3 = VAR_2->device;
 u32 VAR_4 = FUNC_1(VAR_3, VAR_1->addr + 0x01c);
 u32 VAR_5 = FUNC_1(VAR_3, VAR_1->addr + 0x008) & VAR_4 & ~(VAR_4 >> 16);

 if (VAR_5 & 0x00000040) {
  FUNC_4(&VAR_1->work);
  FUNC_3(VAR_3, VAR_1->addr + 0x004, 0x00000040);
  VAR_5 &= ~0x00000040;
 }

 if (VAR_5) {
  FUNC_0(VAR_2, "unhandled intr %08x\n", VAR_5);
  FUNC_3(VAR_3, VAR_1->addr + 0x004, VAR_5);

 }
}
