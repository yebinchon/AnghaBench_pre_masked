
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_subdev {int dummy; } ;
struct nvkm_instmem {int dummy; } ;
struct nvkm_device {int mpeg; struct nvkm_instmem* imem; } ;
struct TYPE_2__ {struct nvkm_subdev subdev; } ;
struct nv31_mpeg {TYPE_1__ engine; } ;


 struct nv31_mpeg* FUNC_0 (int ) ;
 int FUNC_1 (struct nvkm_subdev*,char*,int,int,int,int) ;
 int FUNC_2 (struct nvkm_instmem*,int) ;
 int FUNC_3 (struct nvkm_device*,int,int,int) ;
 int FUNC_4 (struct nvkm_device*,int,int) ;

bool
FUNC_5(struct nvkm_device *VAR_0, u32 VAR_1, u32 VAR_2)
{
 struct nvkm_instmem *VAR_3 = VAR_0->imem;
 struct nv31_mpeg *VAR_4 = FUNC_0(VAR_0->mpeg);
 struct nvkm_subdev *VAR_5 = &VAR_4->engine.subdev;
 u32 VAR_6 = VAR_2 << 4;
 u32 VAR_7 = FUNC_2(VAR_3, VAR_6 + 0);
 u32 VAR_8 = FUNC_2(VAR_3, VAR_6 + 4);
 u32 VAR_9 = FUNC_2(VAR_3, VAR_6 + 8);
 u32 VAR_10 = (VAR_9 & 0xfffff000) | (VAR_7 >> 20);
 u32 VAR_11 = VAR_8 + 1;


 if (!(VAR_7 & 0x00002000)) {
  FUNC_1(VAR_5, "inst %08x dma0 %08x dma1 %08x dma2 %08x\n",
      VAR_6, VAR_7, VAR_8, VAR_9);
  return 0;
 }

 if (VAR_1 == 0x0190) {

  FUNC_3(VAR_0, 0x00b300, 0x00030000, (VAR_7 & 0x00030000));
  FUNC_4(VAR_0, 0x00b334, VAR_10);
  FUNC_4(VAR_0, 0x00b324, VAR_11);
 } else
 if (VAR_1 == 0x01a0) {

  FUNC_3(VAR_0, 0x00b300, 0x000c0000, (VAR_7 & 0x00030000) << 2);
  FUNC_4(VAR_0, 0x00b360, VAR_10);
  FUNC_4(VAR_0, 0x00b364, VAR_11);
 } else {

  if (VAR_7 & 0x00030000)
   return 0;

  FUNC_4(VAR_0, 0x00b370, VAR_10);
  FUNC_4(VAR_0, 0x00b374, VAR_11);
 }

 return 1;
}
