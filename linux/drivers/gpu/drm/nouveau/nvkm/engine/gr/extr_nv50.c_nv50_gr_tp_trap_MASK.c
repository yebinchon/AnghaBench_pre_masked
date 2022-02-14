
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_device {int chipset; } ;
struct TYPE_3__ {struct nvkm_subdev subdev; } ;
struct TYPE_4__ {TYPE_1__ engine; } ;
struct nv50_gr {TYPE_2__ base; } ;
typedef int msg ;


 int FUNC_0 (struct nv50_gr*,int,int) ;
 int FUNC_1 (struct nv50_gr*,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct nvkm_subdev*,char*,...) ;
 int FUNC_3 (struct nvkm_device*,int) ;
 int FUNC_4 (char*,int,int ,int) ;
 int FUNC_5 (struct nvkm_subdev*,char*,char const*) ;
 int FUNC_6 (struct nvkm_device*,int,int) ;

__attribute__((used)) static void
FUNC_7(struct nv50_gr *VAR_2, int VAR_3, u32 VAR_4,
    u32 VAR_5, int VAR_6, const char *VAR_7)
{
 struct nvkm_subdev *VAR_8 = &VAR_2->base.engine.subdev;
 struct nvkm_device *VAR_9 = VAR_8->device;
 u32 VAR_10 = FUNC_3(VAR_9, 0x1540);
 int VAR_11 = 0;
 int VAR_12, VAR_13;
 char VAR_14[128];
 u32 VAR_15, VAR_16;
 for (VAR_12 = 0; VAR_12 < 16; VAR_12++) {
  if (!(VAR_10 & (1 << VAR_12)))
   continue;
  if (VAR_9->chipset < 0xa0)
   VAR_15 = VAR_4 + (VAR_12 << 12);
  else
   VAR_15 = VAR_5 + (VAR_12 << 11);
  VAR_16 = FUNC_3(VAR_9, VAR_15) & 0x7fffffff;
  if (!VAR_16)
   continue;
  VAR_11++;
  switch (VAR_3) {
  case 6:
   if (VAR_6) {
    FUNC_2(VAR_8, "magic set %d:\n", VAR_12);
    for (VAR_13 = VAR_15 + 4; VAR_13 <= VAR_15 + 0x10; VAR_13 += 4)
     FUNC_2(VAR_8, "\t%08x: %08x\n", VAR_13,
         FUNC_3(VAR_9, VAR_13));
    if (VAR_16) {
     FUNC_4(VAR_14, sizeof(VAR_14),
             VAR_1, VAR_16);
     FUNC_2(VAR_8,
         "%s - TP%d: %08x [%s]\n",
         VAR_7, VAR_12, VAR_16, VAR_14);
     VAR_16 = 0;
    }
   }
   break;
  case 7:
   if (VAR_16 & 0x04030000) {
    FUNC_0(VAR_2, VAR_12, VAR_6);
    VAR_16 &= ~0x04030000;
   }
   if (VAR_16 && VAR_6) {
    FUNC_4(VAR_14, sizeof(VAR_14),
            VAR_0, VAR_16);
    FUNC_2(VAR_8, "%s - TP%d: %08x [%s]\n",
        VAR_7, VAR_12, VAR_16, VAR_14);
    VAR_16 = 0;
   }
   break;
  case 8:
   if (VAR_6)
    FUNC_1(
      VAR_2, VAR_15, VAR_16, VAR_12);
   VAR_16 = 0;
   break;
  }
  if (VAR_16) {
   if (VAR_6)
    FUNC_2(VAR_8, "%s - TP%d: Unhandled ustatus %08x\n", VAR_7, VAR_12, VAR_16);
  }
  FUNC_6(VAR_9, VAR_15, 0xc0000000);
 }

 if (!VAR_11 && VAR_6)
  FUNC_5(VAR_8, "%s - No TPs claiming errors?\n", VAR_7);
}
