
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct nvkm_bios {int dummy; } ;
struct nvbios_init {scalar_t__ offset; TYPE_2__* subdev; } ;
struct TYPE_4__ {TYPE_1__* device; } ;
struct TYPE_3__ {struct nvkm_bios* bios; } ;


 scalar_t__ FUNC_0 (struct nvbios_init*,scalar_t__) ;
 int FUNC_1 (struct nvbios_init*) ;
 int FUNC_2 (struct nvbios_init*,int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int,int) ;
 scalar_t__ FUNC_5 (struct nvkm_bios*,scalar_t__) ;
 int FUNC_6 (char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_7(struct nvbios_init *VAR_0)
{
 struct nvkm_bios *VAR_1 = VAR_0->subdev->device->bios;
 u8 VAR_2 = FUNC_5(VAR_1, VAR_0->offset + 1);
 u8 VAR_3 = FUNC_5(VAR_1, VAR_0->offset + 2);
 u8 VAR_4 = FUNC_4((u16)VAR_3 * 50, 100);

 FUNC_6("CONDITION_TIME\t0x%02x 0x%02x\n", VAR_2, VAR_3);
 VAR_0->offset += 3;

 if (!FUNC_1(VAR_0))
  return;

 while (VAR_4--) {
  if (FUNC_0(VAR_0, VAR_2))
   return;
  FUNC_3(20);
 }

 FUNC_2(VAR_0, 0);
}
