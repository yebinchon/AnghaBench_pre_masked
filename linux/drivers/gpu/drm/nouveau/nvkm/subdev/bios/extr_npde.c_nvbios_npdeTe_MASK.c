
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct nvkm_bios {int subdev; } ;
struct nvbios_pcirT {int dummy; } ;


 int FUNC_0 (struct nvkm_bios*,int,int *,int*,struct nvbios_pcirT*) ;
 int FUNC_1 (struct nvkm_bios*,int) ;
 int FUNC_2 (int *,char*,int,int) ;

u32
FUNC_3(struct nvkm_bios *VAR_0, u32 VAR_1)
{
 struct nvbios_pcirT VAR_2;
 u8 VAR_3; u16 VAR_4;
 u32 VAR_5 = FUNC_0(VAR_0, VAR_1, &VAR_3, &VAR_4, &VAR_2);
 if (VAR_5 = (VAR_5 + VAR_4 + 0x0f) & ~0x0f, VAR_5) {
  switch (FUNC_1(VAR_0, VAR_5 + 0x00)) {
  case 0x4544504e:
   break;
  default:
   FUNC_2(&VAR_0->subdev,
       "%08x: NPDE signature (%08x) unknown\n",
       VAR_5, FUNC_1(VAR_0, VAR_5 + 0x00));
   VAR_5 = 0;
   break;
  }
 }
 return VAR_5;
}
