
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
struct gf100_gr {int* tpc_nr; TYPE_2__ base; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct gf100_gr*,int) ;
 int FUNC_2 (struct gf100_gr*,int,int) ;
 int FUNC_3 (struct nvkm_subdev*,char*,int,int) ;
 int FUNC_4 (struct nvkm_device*,int ) ;
 int FUNC_5 (struct nvkm_device*,int ,int) ;

__attribute__((used)) static void
FUNC_6(struct gf100_gr *VAR_0, int VAR_1)
{
 struct nvkm_subdev *VAR_2 = &VAR_0->base.engine.subdev;
 struct nvkm_device *VAR_3 = VAR_2->device;
 u32 VAR_4 = FUNC_4(VAR_3, FUNC_0(VAR_1, 0x2c90));
 int VAR_5;

 if (VAR_4 & 0x00000001) {
  FUNC_1(VAR_0, VAR_1);
  VAR_4 &= ~0x00000001;
 }

 if (VAR_4 & 0x00000002) {
  u32 VAR_6 = FUNC_4(VAR_3, FUNC_0(VAR_1, 0x0900));
  FUNC_3(VAR_2, "GPC%d/ZCULL: %08x\n", VAR_1, VAR_6);
  FUNC_5(VAR_3, FUNC_0(VAR_1, 0x0900), 0xc0000000);
  VAR_4 &= ~0x00000002;
 }

 if (VAR_4 & 0x00000004) {
  u32 VAR_7 = FUNC_4(VAR_3, FUNC_0(VAR_1, 0x1028));
  FUNC_3(VAR_2, "GPC%d/CCACHE: %08x\n", VAR_1, VAR_7);
  FUNC_5(VAR_3, FUNC_0(VAR_1, 0x1028), 0xc0000000);
  VAR_4 &= ~0x00000004;
 }

 if (VAR_4 & 0x00000008) {
  u32 VAR_8 = FUNC_4(VAR_3, FUNC_0(VAR_1, 0x0824));
  FUNC_3(VAR_2, "GPC%d/ESETUP: %08x\n", VAR_1, VAR_8);
  FUNC_5(VAR_3, FUNC_0(VAR_1, 0x0824), 0xc0000000);
  VAR_4 &= ~0x00000009;
 }

 for (VAR_5 = 0; VAR_5 < VAR_0->tpc_nr[VAR_1]; VAR_5++) {
  u32 VAR_9 = 0x00010000 << VAR_5;
  if (VAR_4 & VAR_9) {
   FUNC_2(VAR_0, VAR_1, VAR_5);
   FUNC_5(VAR_3, FUNC_0(VAR_1, 0x2c90), VAR_9);
   VAR_4 &= ~VAR_9;
  }
 }

 if (VAR_4) {
  FUNC_3(VAR_2, "GPC%d/%08x: unknown\n", VAR_1, VAR_4);
 }
}
