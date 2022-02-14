
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nvkm_device {scalar_t__ card_type; int chipset; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct nvkm_device*,int) ;
 int FUNC_1 (struct nvkm_device*,int ,int) ;
 int FUNC_2 (struct nvkm_device*,int,int,int) ;

bool
FUNC_3(struct nvkm_device *VAR_1, bool VAR_2)
{
 bool VAR_3 = !FUNC_1(VAR_1, 0, 0x1f);
 u8 VAR_4 = VAR_2 ? 0x99 : 0x57;
 if (VAR_1->card_type < VAR_0)
  FUNC_2(VAR_1, 0, 0x1f, VAR_4);
 else
  FUNC_2(VAR_1, 0, 0x3f, VAR_4);
 if (VAR_1->chipset == 0x11) {
  if (!(FUNC_0(VAR_1, 0x001084) & 0x10000000))
   FUNC_2(VAR_1, 1, 0x1f, VAR_4);
 }
 return VAR_3;
}
