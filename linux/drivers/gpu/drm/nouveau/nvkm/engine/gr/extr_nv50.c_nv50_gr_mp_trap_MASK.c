
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


 int VAR_0 ;
 int FUNC_0 (struct nvkm_subdev*,char*,int,...) ;
 int FUNC_1 (struct nvkm_device*,int) ;
 int FUNC_2 (char*,int,int ,int) ;
 int FUNC_3 (struct nvkm_device*,int,int) ;

__attribute__((used)) static void
FUNC_4(struct nv50_gr *VAR_1, int VAR_2, int VAR_3)
{
 struct nvkm_subdev *VAR_4 = &VAR_1->base.engine.subdev;
 struct nvkm_device *VAR_5 = VAR_4->device;
 u32 VAR_6 = FUNC_1(VAR_5, 0x1540);
 u32 VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 char VAR_13[128];
 int VAR_14;
 int VAR_15 = 0;
 for (VAR_14 = 0; VAR_14 < 4; VAR_14++) {
  if (!(VAR_6 & 1 << (VAR_14+24)))
   continue;
  if (VAR_5->chipset < 0xa0)
   VAR_7 = 0x408200 + (VAR_2 << 12) + (VAR_14 << 7);
  else
   VAR_7 = 0x408100 + (VAR_2 << 11) + (VAR_14 << 7);
  VAR_8 = FUNC_1(VAR_5, VAR_7 + 0x10);
  VAR_9 = FUNC_1(VAR_5, VAR_7 + 0x14);
  if (!VAR_9)
   continue;
  if (VAR_3) {
   FUNC_1(VAR_5, VAR_7 + 0x20);
   VAR_10 = FUNC_1(VAR_5, VAR_7 + 0x24);
   VAR_11 = FUNC_1(VAR_5, VAR_7 + 0x70);
   VAR_12 = FUNC_1(VAR_5, VAR_7 + 0x74);
   FUNC_2(VAR_13, sizeof(VAR_13),
           VAR_0, VAR_9);
   FUNC_0(VAR_4, "TRAP_MP_EXEC - TP %d MP %d: "
        "%08x [%s] at %06x warp %d, "
        "opcode %08x %08x\n",
       VAR_2, VAR_14, VAR_9, VAR_13, VAR_10 & 0xffffff,
       VAR_10 >> 24, VAR_11, VAR_12);
  }
  FUNC_3(VAR_5, VAR_7 + 0x10, VAR_8);
  FUNC_3(VAR_5, VAR_7 + 0x14, 0);
  VAR_15++;
 }
 if (!VAR_15 && VAR_3)
  FUNC_0(VAR_4, "TRAP_MP_EXEC - TP %d: "
    "No MPs claiming errors?\n", VAR_2);
}
