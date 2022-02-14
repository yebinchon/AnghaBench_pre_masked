
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nvkm_device {scalar_t__ card_type; int chipset; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct nvkm_device*,int,int) ;
 int FUNC_1 (struct nvkm_device*,int ,int,int) ;

void
FUNC_2(struct nvkm_device *VAR_1, u8 VAR_2)
{
 if (VAR_1->card_type < VAR_0) {
  u8 VAR_3 = (VAR_2 == 1) ? 3 : VAR_2;
  if (VAR_1->chipset == 0x11) {

   FUNC_0(VAR_1, 0, 0x1f);
   FUNC_0(VAR_1, 1, 0x1f);
  }

  FUNC_1(VAR_1, 0, 0x44, VAR_3);

  if (VAR_1->chipset == 0x11) {
   FUNC_1(VAR_1, 0, 0x2e, VAR_3);
   FUNC_1(VAR_1, 0, 0x2e, VAR_3);
  }
 }
}
