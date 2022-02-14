
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_subdev {int dummy; } ;
struct nvkm_device {int mpeg; } ;
struct TYPE_2__ {struct nvkm_subdev subdev; } ;
struct nv31_mpeg {TYPE_1__ engine; } ;


 struct nv31_mpeg* FUNC_0 (int ) ;
 int FUNC_1 (struct nvkm_subdev*,char*,int,int,int,int) ;
 int FUNC_2 (struct nvkm_device*,int,int,int) ;
 int FUNC_3 (struct nvkm_device*,int) ;
 int FUNC_4 (struct nvkm_device*,int,int) ;

__attribute__((used)) static bool
FUNC_5(struct nvkm_device *VAR_0, u32 VAR_1, u32 VAR_2)
{
 struct nv31_mpeg *VAR_3 = FUNC_0(VAR_0->mpeg);
 struct nvkm_subdev *VAR_4 = &VAR_3->engine.subdev;
 u32 VAR_5 = VAR_2 << 4;
 u32 VAR_6 = FUNC_3(VAR_0, 0x700000 + VAR_5);
 u32 VAR_7 = FUNC_3(VAR_0, 0x700004 + VAR_5);
 u32 VAR_8 = FUNC_3(VAR_0, 0x700008 + VAR_5);
 u32 VAR_9 = (VAR_8 & 0xfffff000) | (VAR_6 >> 20);
 u32 VAR_10 = VAR_7 + 1;


 if (!(VAR_6 & 0x00002000)) {
  FUNC_1(VAR_4, "inst %08x dma0 %08x dma1 %08x dma2 %08x\n",
      VAR_5, VAR_6, VAR_7, VAR_8);
  return 0;
 }

 if (VAR_1 == 0x0190) {

  FUNC_2(VAR_0, 0x00b300, 0x00010000,
      (VAR_6 & 0x00030000) ? 0x00010000 : 0);
  FUNC_4(VAR_0, 0x00b334, VAR_9);
  FUNC_4(VAR_0, 0x00b324, VAR_10);
 } else
 if (VAR_1 == 0x01a0) {

  FUNC_2(VAR_0, 0x00b300, 0x00020000,
      (VAR_6 & 0x00030000) ? 0x00020000 : 0);
  FUNC_4(VAR_0, 0x00b360, VAR_9);
  FUNC_4(VAR_0, 0x00b364, VAR_10);
 } else {

  if (VAR_6 & 0x00030000)
   return 0;

  FUNC_4(VAR_0, 0x00b370, VAR_9);
  FUNC_4(VAR_0, 0x00b374, VAR_10);
 }

 return 1;
}
