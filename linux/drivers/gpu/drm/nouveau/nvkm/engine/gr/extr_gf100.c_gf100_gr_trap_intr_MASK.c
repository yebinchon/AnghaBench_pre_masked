
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
struct gf100_gr {int gpc_nr; int rop_nr; TYPE_2__ base; } ;
typedef int error ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct gf100_gr*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct nvkm_subdev*,char*,int,...) ;
 int FUNC_3 (struct nvkm_device*,int) ;
 int FUNC_4 (char*,int,int ,int) ;
 int FUNC_5 (struct nvkm_device*,int,int) ;

__attribute__((used)) static void
FUNC_6(struct gf100_gr *VAR_6)
{
 struct nvkm_subdev *VAR_7 = &VAR_6->base.engine.subdev;
 struct nvkm_device *VAR_8 = VAR_7->device;
 char VAR_9[128];
 u32 VAR_10 = FUNC_3(VAR_8, 0x400108);
 int VAR_11, VAR_12;

 if (VAR_10 & 0x00000001) {
  u32 VAR_13 = FUNC_3(VAR_8, 0x404000);

  FUNC_4(VAR_9, sizeof(VAR_9), VAR_1,
          VAR_13 & 0x3fffffff);
  FUNC_2(VAR_7, "DISPATCH %08x [%s]\n", VAR_13, VAR_9);
  FUNC_5(VAR_8, 0x404000, 0xc0000000);
  FUNC_5(VAR_8, 0x400108, 0x00000001);
  VAR_10 &= ~0x00000001;
 }

 if (VAR_10 & 0x00000002) {
  u32 VAR_14 = FUNC_3(VAR_8, 0x404600);

  FUNC_4(VAR_9, sizeof(VAR_9), VAR_2,
          VAR_14 & 0x3fffffff);
  FUNC_2(VAR_7, "M2MF %08x [%s]\n", VAR_14, VAR_9);

  FUNC_5(VAR_8, 0x404600, 0xc0000000);
  FUNC_5(VAR_8, 0x400108, 0x00000002);
  VAR_10 &= ~0x00000002;
 }

 if (VAR_10 & 0x00000008) {
  u32 VAR_15 = FUNC_3(VAR_8, 0x408030);

  FUNC_4(VAR_9, sizeof(VAR_9), VAR_0,
          VAR_15 & 0x3fffffff);
  FUNC_2(VAR_7, "CCACHE %08x [%s]\n", VAR_15, VAR_9);
  FUNC_5(VAR_8, 0x408030, 0xc0000000);
  FUNC_5(VAR_8, 0x400108, 0x00000008);
  VAR_10 &= ~0x00000008;
 }

 if (VAR_10 & 0x00000010) {
  u32 VAR_16 = FUNC_3(VAR_8, 0x405840);
  FUNC_2(VAR_7, "SHADER %08x, sph: 0x%06x, stage: 0x%02x\n",
      VAR_16, VAR_16 & 0xffffff, (VAR_16 >> 24) & 0x3f);
  FUNC_5(VAR_8, 0x405840, 0xc0000000);
  FUNC_5(VAR_8, 0x400108, 0x00000010);
  VAR_10 &= ~0x00000010;
 }

 if (VAR_10 & 0x00000040) {
  u32 VAR_17 = FUNC_3(VAR_8, 0x40601c);

  FUNC_4(VAR_9, sizeof(VAR_9), VAR_4,
          VAR_17 & 0x3fffffff);
  FUNC_2(VAR_7, "UNK6 %08x [%s]\n", VAR_17, VAR_9);

  FUNC_5(VAR_8, 0x40601c, 0xc0000000);
  FUNC_5(VAR_8, 0x400108, 0x00000040);
  VAR_10 &= ~0x00000040;
 }

 if (VAR_10 & 0x00000080) {
  u32 VAR_18 = FUNC_3(VAR_8, 0x404490);
  u32 VAR_19 = FUNC_3(VAR_8, 0x404494);
  u32 VAR_20 = FUNC_3(VAR_8, 0x40449c);

  FUNC_4(VAR_9, sizeof(VAR_9), VAR_3,
          VAR_18 & 0x1fffffff);
  FUNC_2(VAR_7, "MACRO %08x [%s], pc: 0x%03x%s, op: 0x%08x\n",
      VAR_18, VAR_9, VAR_19 & 0x7ff,
      (VAR_19 & 0x10000000) ? "" : " (invalid)",
      VAR_20);

  FUNC_5(VAR_8, 0x404490, 0xc0000000);
  FUNC_5(VAR_8, 0x400108, 0x00000080);
  VAR_10 &= ~0x00000080;
 }

 if (VAR_10 & 0x00000100) {
  u32 VAR_21 = FUNC_3(VAR_8, 0x407020) & 0x3fffffff;

  FUNC_4(VAR_9, sizeof(VAR_9), VAR_5, VAR_21);
  FUNC_2(VAR_7, "SKED: %08x [%s]\n", VAR_21, VAR_9);

  if (VAR_21)
   FUNC_5(VAR_8, 0x407020, 0x40000000);
  FUNC_5(VAR_8, 0x400108, 0x00000100);
  VAR_10 &= ~0x00000100;
 }

 if (VAR_10 & 0x01000000) {
  u32 VAR_22 = FUNC_3(VAR_8, 0x400118);
  for (VAR_12 = 0; VAR_22 && VAR_12 < VAR_6->gpc_nr; VAR_12++) {
   u32 VAR_23 = 0x00000001 << VAR_12;
   if (VAR_22 & VAR_23) {
    FUNC_1(VAR_6, VAR_12);
    FUNC_5(VAR_8, 0x400118, VAR_23);
    VAR_22 &= ~VAR_23;
   }
  }
  FUNC_5(VAR_8, 0x400108, 0x01000000);
  VAR_10 &= ~0x01000000;
 }

 if (VAR_10 & 0x02000000) {
  for (VAR_11 = 0; VAR_11 < VAR_6->rop_nr; VAR_11++) {
   u32 VAR_24 = FUNC_3(VAR_8, FUNC_0(VAR_11, 0x070));
   u32 VAR_25 = FUNC_3(VAR_8, FUNC_0(VAR_11, 0x144));
   FUNC_2(VAR_7, "ROP%d %08x %08x\n",
     VAR_11, VAR_24, VAR_25);
   FUNC_5(VAR_8, FUNC_0(VAR_11, 0x070), 0xc0000000);
   FUNC_5(VAR_8, FUNC_0(VAR_11, 0x144), 0xc0000000);
  }
  FUNC_5(VAR_8, 0x400108, 0x02000000);
  VAR_10 &= ~0x02000000;
 }

 if (VAR_10) {
  FUNC_2(VAR_7, "TRAP UNHANDLED %08x\n", VAR_10);
  FUNC_5(VAR_8, 0x400108, VAR_10);
 }
}
