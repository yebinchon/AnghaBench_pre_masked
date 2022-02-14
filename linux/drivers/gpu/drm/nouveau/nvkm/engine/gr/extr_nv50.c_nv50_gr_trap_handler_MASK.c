
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_3__ {struct nvkm_subdev subdev; } ;
struct TYPE_4__ {TYPE_1__ engine; } ;
struct nv50_gr {TYPE_2__ base; } ;
typedef int msg ;


 int FUNC_0 (struct nv50_gr*,int,int,int,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct nvkm_subdev*,char*,...) ;
 int FUNC_2 (struct nvkm_device*,int) ;
 int FUNC_3 (char*,int,int ,int) ;
 int FUNC_4 (struct nvkm_device*,int,int) ;

__attribute__((used)) static int
FUNC_5(struct nv50_gr *VAR_4, u32 VAR_5,
       int VAR_6, u64 VAR_7, const char *VAR_8)
{
 struct nvkm_subdev *VAR_9 = &VAR_4->base.engine.subdev;
 struct nvkm_device *VAR_10 = VAR_9->device;
 u32 VAR_11 = FUNC_2(VAR_10, 0x400108);
 u32 VAR_12;
 char VAR_13[128];

 if (!VAR_11 && VAR_5) {
  FUNC_1(VAR_9, "TRAP: no units reporting traps?\n");
  return 1;
 }




 if (VAR_11 & 0x001) {
  VAR_12 = FUNC_2(VAR_10, 0x400804) & 0x7fffffff;
  if (!VAR_12 && VAR_5) {
   FUNC_1(VAR_9, "TRAP_DISPATCH - no ustatus?\n");
  }

  FUNC_4(VAR_10, 0x400500, 0x00000000);


  if (VAR_12 & 0x00000001) {
   u32 VAR_14 = FUNC_2(VAR_10, 0x400808);
   u32 VAR_15 = (VAR_14 & 0x00070000) >> 16;
   u32 VAR_16 = (VAR_14 & 0x00001ffc);
   u32 VAR_17 = FUNC_2(VAR_10, 0x40080c);
   u32 VAR_18 = FUNC_2(VAR_10, 0x400810);
   u32 VAR_19 = FUNC_2(VAR_10, 0x400814);
   u32 VAR_20 = FUNC_2(VAR_10, 0x400848);

   FUNC_1(VAR_9, "TRAP DISPATCH_FAULT\n");
   if (VAR_5 && (VAR_14 & 0x80000000)) {
    FUNC_1(VAR_9,
        "ch %d [%010llx %s] subc %d "
        "class %04x mthd %04x data %08x%08x "
        "400808 %08x 400848 %08x\n",
        VAR_6, VAR_7, VAR_8, VAR_15, VAR_19, VAR_16,
        VAR_18, VAR_17, VAR_14, VAR_20);
   } else
   if (VAR_5) {
    FUNC_1(VAR_9, "no stuck command?\n");
   }

   FUNC_4(VAR_10, 0x400808, 0);
   FUNC_4(VAR_10, 0x4008e8, FUNC_2(VAR_10, 0x4008e8) & 3);
   FUNC_4(VAR_10, 0x400848, 0);
   VAR_12 &= ~0x00000001;
  }

  if (VAR_12 & 0x00000002) {
   u32 VAR_21 = FUNC_2(VAR_10, 0x40084c);
   u32 VAR_22 = (VAR_21 & 0x00070000) >> 16;
   u32 VAR_23 = (VAR_21 & 0x00001ffc);
   u32 VAR_24 = FUNC_2(VAR_10, 0x40085c);
   u32 VAR_25 = FUNC_2(VAR_10, 0x400814);

   FUNC_1(VAR_9, "TRAP DISPATCH_QUERY\n");
   if (VAR_5 && (VAR_21 & 0x80000000)) {
    FUNC_1(VAR_9,
        "ch %d [%010llx %s] subc %d "
        "class %04x mthd %04x data %08x "
        "40084c %08x\n", VAR_6, VAR_7, VAR_8,
        VAR_22, VAR_25, VAR_23, VAR_24, VAR_21);
   } else
   if (VAR_5) {
    FUNC_1(VAR_9, "no stuck command?\n");
   }

   FUNC_4(VAR_10, 0x40084c, 0);
   VAR_12 &= ~0x00000002;
  }

  if (VAR_12 && VAR_5) {
   FUNC_1(VAR_9, "TRAP_DISPATCH "
        "(unknown %08x)\n", VAR_12);
  }

  FUNC_4(VAR_10, 0x400804, 0xc0000000);
  FUNC_4(VAR_10, 0x400108, 0x001);
  VAR_11 &= ~0x001;
  if (!VAR_11)
   return 0;
 }


 if (VAR_11 & 0x002) {
  u32 VAR_26 = FUNC_2(VAR_10, 0x406800) & 0x7fffffff;
  if (VAR_5) {
   FUNC_3(VAR_13, sizeof(VAR_13),
           VAR_1, VAR_26);
   FUNC_1(VAR_9, "TRAP_M2MF %08x [%s]\n",
       VAR_26, VAR_13);
   FUNC_1(VAR_9, "TRAP_M2MF %08x %08x %08x %08x\n",
       FUNC_2(VAR_10, 0x406804),
       FUNC_2(VAR_10, 0x406808),
       FUNC_2(VAR_10, 0x40680c),
       FUNC_2(VAR_10, 0x406810));
  }


  FUNC_4(VAR_10, 0x400040, 2);
  FUNC_4(VAR_10, 0x400040, 0);
  FUNC_4(VAR_10, 0x406800, 0xc0000000);
  FUNC_4(VAR_10, 0x400108, 0x002);
  VAR_11 &= ~0x002;
 }


 if (VAR_11 & 0x004) {
  u32 VAR_27 = FUNC_2(VAR_10, 0x400c04) & 0x7fffffff;
  if (VAR_5) {
   FUNC_3(VAR_13, sizeof(VAR_13),
           VAR_3, VAR_27);
   FUNC_1(VAR_9, "TRAP_VFETCH %08x [%s]\n",
       VAR_27, VAR_13);
   FUNC_1(VAR_9, "TRAP_VFETCH %08x %08x %08x %08x\n",
       FUNC_2(VAR_10, 0x400c00),
       FUNC_2(VAR_10, 0x400c08),
       FUNC_2(VAR_10, 0x400c0c),
       FUNC_2(VAR_10, 0x400c10));
  }

  FUNC_4(VAR_10, 0x400c04, 0xc0000000);
  FUNC_4(VAR_10, 0x400108, 0x004);
  VAR_11 &= ~0x004;
 }


 if (VAR_11 & 0x008) {
  VAR_12 = FUNC_2(VAR_10, 0x401800) & 0x7fffffff;
  if (VAR_5) {
   FUNC_3(VAR_13, sizeof(VAR_13),
           VAR_2, VAR_12);
   FUNC_1(VAR_9, "TRAP_STRMOUT %08x [%s]\n",
       VAR_12, VAR_13);
   FUNC_1(VAR_9, "TRAP_STRMOUT %08x %08x %08x %08x\n",
       FUNC_2(VAR_10, 0x401804),
       FUNC_2(VAR_10, 0x401808),
       FUNC_2(VAR_10, 0x40180c),
       FUNC_2(VAR_10, 0x401810));
  }


  FUNC_4(VAR_10, 0x400040, 0x80);
  FUNC_4(VAR_10, 0x400040, 0);
  FUNC_4(VAR_10, 0x401800, 0xc0000000);
  FUNC_4(VAR_10, 0x400108, 0x008);
  VAR_11 &= ~0x008;
 }


 if (VAR_11 & 0x010) {
  VAR_12 = FUNC_2(VAR_10, 0x405018) & 0x7fffffff;
  if (VAR_5) {
   FUNC_3(VAR_13, sizeof(VAR_13),
           VAR_0, VAR_12);
   FUNC_1(VAR_9, "TRAP_CCACHE %08x [%s]\n",
       VAR_12, VAR_13);
   FUNC_1(VAR_9, "TRAP_CCACHE %08x %08x %08x %08x "
        "%08x %08x %08x\n",
       FUNC_2(VAR_10, 0x405000),
       FUNC_2(VAR_10, 0x405004),
       FUNC_2(VAR_10, 0x405008),
       FUNC_2(VAR_10, 0x40500c),
       FUNC_2(VAR_10, 0x405010),
       FUNC_2(VAR_10, 0x405014),
       FUNC_2(VAR_10, 0x40501c));
  }

  FUNC_4(VAR_10, 0x405018, 0xc0000000);
  FUNC_4(VAR_10, 0x400108, 0x010);
  VAR_11 &= ~0x010;
 }




 if (VAR_11 & 0x20) {
  VAR_12 = FUNC_2(VAR_10, 0x402000) & 0x7fffffff;
  if (VAR_5)
   FUNC_1(VAR_9, "TRAP_UNKC04 %08x\n", VAR_12);
  FUNC_4(VAR_10, 0x402000, 0xc0000000);

 }


 if (VAR_11 & 0x040) {
  FUNC_0(VAR_4, 6, 0x408900, 0x408600, VAR_5,
        "TRAP_TEXTURE");
  FUNC_4(VAR_10, 0x400108, 0x040);
  VAR_11 &= ~0x040;
 }


 if (VAR_11 & 0x080) {
  FUNC_0(VAR_4, 7, 0x408314, 0x40831c, VAR_5,
        "TRAP_MP");
  FUNC_4(VAR_10, 0x400108, 0x080);
  VAR_11 &= ~0x080;
 }



 if (VAR_11 & 0x100) {
  FUNC_0(VAR_4, 8, 0x408e08, 0x408708, VAR_5,
        "TRAP_PROP");
  FUNC_4(VAR_10, 0x400108, 0x100);
  VAR_11 &= ~0x100;
 }

 if (VAR_11) {
  if (VAR_5)
   FUNC_1(VAR_9, "TRAP: unknown %08x\n", VAR_11);
  FUNC_4(VAR_10, 0x400108, VAR_11);
 }

 return 1;
}
