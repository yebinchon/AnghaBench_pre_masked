
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
struct TYPE_4__ {struct nvkm_subdev subdev; } ;
struct TYPE_5__ {TYPE_1__ engine; } ;
struct gf100_gr {TYPE_3__* func; TYPE_2__ base; } ;
struct TYPE_6__ {int (* trap_mp ) (struct gf100_gr*,int,int) ;} ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (struct nvkm_subdev*,char*,int,int,int) ;
 int FUNC_2 (struct nvkm_device*,int ) ;
 int FUNC_3 (struct nvkm_device*,int ,int) ;
 int FUNC_4 (struct gf100_gr*,int,int) ;

__attribute__((used)) static void
FUNC_5(struct gf100_gr *VAR_0, int VAR_1, int VAR_2)
{
 struct nvkm_subdev *VAR_3 = &VAR_0->base.engine.subdev;
 struct nvkm_device *VAR_4 = VAR_3->device;
 u32 VAR_5 = FUNC_2(VAR_4, FUNC_0(VAR_1, VAR_2, 0x0508));

 if (VAR_5 & 0x00000001) {
  u32 VAR_6 = FUNC_2(VAR_4, FUNC_0(VAR_1, VAR_2, 0x0224));
  FUNC_1(VAR_3, "GPC%d/TPC%d/TEX: %08x\n", VAR_1, VAR_2, VAR_6);
  FUNC_3(VAR_4, FUNC_0(VAR_1, VAR_2, 0x0224), 0xc0000000);
  VAR_5 &= ~0x00000001;
 }

 if (VAR_5 & 0x00000002) {
  VAR_0->func->trap_mp(VAR_0, VAR_1, VAR_2);
  VAR_5 &= ~0x00000002;
 }

 if (VAR_5 & 0x00000004) {
  u32 VAR_7 = FUNC_2(VAR_4, FUNC_0(VAR_1, VAR_2, 0x0084));
  FUNC_1(VAR_3, "GPC%d/TPC%d/POLY: %08x\n", VAR_1, VAR_2, VAR_7);
  FUNC_3(VAR_4, FUNC_0(VAR_1, VAR_2, 0x0084), 0xc0000000);
  VAR_5 &= ~0x00000004;
 }

 if (VAR_5 & 0x00000008) {
  u32 VAR_8 = FUNC_2(VAR_4, FUNC_0(VAR_1, VAR_2, 0x048c));
  FUNC_1(VAR_3, "GPC%d/TPC%d/L1C: %08x\n", VAR_1, VAR_2, VAR_8);
  FUNC_3(VAR_4, FUNC_0(VAR_1, VAR_2, 0x048c), 0xc0000000);
  VAR_5 &= ~0x00000008;
 }

 if (VAR_5 & 0x00000010) {
  u32 VAR_9 = FUNC_2(VAR_4, FUNC_0(VAR_1, VAR_2, 0x0430));
  FUNC_1(VAR_3, "GPC%d/TPC%d/MPC: %08x\n", VAR_1, VAR_2, VAR_9);
  FUNC_3(VAR_4, FUNC_0(VAR_1, VAR_2, 0x0430), 0xc0000000);
  VAR_5 &= ~0x00000010;
 }

 if (VAR_5) {
  FUNC_1(VAR_3, "GPC%d/TPC%d/%08x: unknown\n", VAR_1, VAR_2, VAR_5);
 }
}
