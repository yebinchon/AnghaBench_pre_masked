
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct nvkm_bios {int dummy; } ;
struct nvbios_init {scalar_t__ offset; TYPE_2__* subdev; } ;
struct TYPE_4__ {TYPE_1__* device; } ;
struct TYPE_3__ {struct nvkm_bios* bios; } ;


 int FUNC_0 (struct nvbios_init*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (struct nvbios_init*) ;
 scalar_t__ FUNC_2 (struct nvbios_init*) ;
 scalar_t__ FUNC_3 (struct nvkm_bios*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct nvkm_bios*,scalar_t__) ;
 int FUNC_5 (char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_6(struct nvbios_init *VAR_0)
{
 struct nvkm_bios *VAR_1 = VAR_0->subdev->device->bios;
 u8 VAR_2 = FUNC_3(VAR_1, VAR_0->offset + 1);
 u8 VAR_3 = FUNC_2(VAR_0);
 u8 VAR_4 = FUNC_1(VAR_0);
 u8 VAR_5;

 FUNC_5("RAM_RESTRICT_PLL\t0x%02x\n", VAR_2);
 VAR_0->offset += 2;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  u32 VAR_6 = FUNC_4(VAR_1, VAR_0->offset);

  if (VAR_5 == VAR_4) {
   FUNC_5("%dkHz *\n", VAR_6);
   FUNC_0(VAR_0, VAR_2, VAR_6);
  } else {
   FUNC_5("%dkHz\n", VAR_6);
  }

  VAR_0->offset += 4;
 }
}
