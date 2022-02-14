
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct nvkm_bios {int dummy; } ;
struct nvbios_init {TYPE_2__* subdev; } ;
struct TYPE_4__ {TYPE_1__* device; } ;
struct TYPE_3__ {struct nvkm_bios* bios; } ;


 int FUNC_0 (struct nvbios_init*) ;
 int FUNC_1 (struct nvkm_bios*,int) ;
 int FUNC_2 (struct nvkm_bios*,int) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static u8
FUNC_4(struct nvbios_init *VAR_0, u8 VAR_1, u8 VAR_2)
{
 struct nvkm_bios *VAR_3 = VAR_0->subdev->device->bios;
 u16 VAR_4 = FUNC_0(VAR_0);
 if (VAR_4) {
  u16 VAR_5 = FUNC_2(VAR_3, VAR_4 + (VAR_1 * 2));
  if (VAR_5)
   return FUNC_1(VAR_3, VAR_5 + VAR_2);
  FUNC_3("xlat table pointer %d invalid\n", VAR_1);
 }
 return 0x00;
}
