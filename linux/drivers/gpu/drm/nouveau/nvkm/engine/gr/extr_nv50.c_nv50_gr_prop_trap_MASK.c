
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
struct nv50_gr {TYPE_2__ base; } ;
typedef int msg ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_subdev*,char*,int,int,...) ;
 int FUNC_1 (struct nvkm_device*,int) ;
 int FUNC_2 (char*,int,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct nv50_gr *VAR_1, u32 VAR_2, u32 VAR_3, u32 VAR_4)
{
 struct nvkm_subdev *VAR_5 = &VAR_1->base.engine.subdev;
 struct nvkm_device *VAR_6 = VAR_5->device;
 u32 VAR_7 = FUNC_1(VAR_6, VAR_2 + 0x04);
 u32 VAR_8 = FUNC_1(VAR_6, VAR_2 + 0x08);
 u32 VAR_9 = FUNC_1(VAR_6, VAR_2 + 0x0c);
 u32 VAR_10 = FUNC_1(VAR_6, VAR_2 + 0x10);
 u32 VAR_11 = FUNC_1(VAR_6, VAR_2 + 0x14);
 u32 VAR_12 = FUNC_1(VAR_6, VAR_2 + 0x18);
 u32 VAR_13 = FUNC_1(VAR_6, VAR_2 + 0x1c);
 char VAR_14[128];


 if (VAR_3 & 0x00000080) {
  if (VAR_10 & 0x80000000) {

   FUNC_0(VAR_5, "TRAP_PROP - TP %d - CUDA_FAULT - Global read fault at address %02x%08x\n",
      VAR_4, VAR_9, VAR_8 | ((VAR_10 >> 24) & 0x1f));
   VAR_10 &= ~0x1f000000;
  } else if (VAR_10 & 0xc) {

   FUNC_0(VAR_5, "TRAP_PROP - TP %d - CUDA_FAULT - Global write fault at address %02x%08x\n",
     VAR_4, VAR_9, VAR_8 | ((VAR_10 >> 7) & 0x1f));
   VAR_10 &= ~0x00000f80;
  } else {
   FUNC_0(VAR_5, "TRAP_PROP - TP %d - Unknown CUDA fault at address %02x%08x\n",
     VAR_4, VAR_9, VAR_8);
  }
  VAR_3 &= ~0x00000080;
 }
 if (VAR_3) {
  FUNC_2(VAR_14, sizeof(VAR_14), VAR_0, VAR_3);
  FUNC_0(VAR_5, "TRAP_PROP - TP %d - %08x [%s] - "
       "Address %02x%08x\n",
      VAR_4, VAR_3, VAR_14, VAR_9, VAR_8);
 }
 FUNC_0(VAR_5, "TRAP_PROP - TP %d - e0c: %08x, e18: %08x, e1c: %08x, e20: %08x, e24: %08x\n",
   VAR_4, VAR_7, VAR_10, VAR_11, VAR_12, VAR_13);
}
