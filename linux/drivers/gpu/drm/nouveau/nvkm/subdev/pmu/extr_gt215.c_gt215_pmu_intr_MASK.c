
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct TYPE_2__ {int work; } ;
struct nvkm_pmu {TYPE_1__ recv; struct nvkm_subdev subdev; } ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (struct nvkm_subdev*,char*,int,...) ;
 int FUNC_1 (struct nvkm_subdev*,char*,int,int) ;
 int FUNC_2 (struct nvkm_device*,int) ;
 int FUNC_3 (struct nvkm_device*,int,int) ;
 int FUNC_4 (int *) ;

void
FUNC_5(struct nvkm_pmu *VAR_0)
{
 struct nvkm_subdev *VAR_1 = &VAR_0->subdev;
 struct nvkm_device *VAR_2 = VAR_1->device;
 u32 VAR_3 = FUNC_2(VAR_2, 0x10a01c);
 u32 VAR_4 = FUNC_2(VAR_2, 0x10a008) & VAR_3 & ~(VAR_3 >> 16);

 if (VAR_4 & 0x00000020) {
  u32 VAR_5 = FUNC_2(VAR_2, 0x10a16c);
  if (VAR_5 & 0x80000000) {
   FUNC_0(VAR_1, "UAS fault at %06x addr %08x\n",
       VAR_5 & 0x00ffffff,
       FUNC_2(VAR_2, 0x10a168));
   FUNC_3(VAR_2, 0x10a16c, 0x00000000);
   VAR_4 &= ~0x00000020;
  }
 }

 if (VAR_4 & 0x00000040) {
  FUNC_4(&VAR_0->recv.work);
  FUNC_3(VAR_2, 0x10a004, 0x00000040);
  VAR_4 &= ~0x00000040;
 }

 if (VAR_4 & 0x00000080) {
  FUNC_1(VAR_1, "wr32 %06x %08x\n",
     FUNC_2(VAR_2, 0x10a7a0),
     FUNC_2(VAR_2, 0x10a7a4));
  FUNC_3(VAR_2, 0x10a004, 0x00000080);
  VAR_4 &= ~0x00000080;
 }

 if (VAR_4) {
  FUNC_0(VAR_1, "intr %08x\n", VAR_4);
  FUNC_3(VAR_2, 0x10a004, VAR_4);
 }
}
