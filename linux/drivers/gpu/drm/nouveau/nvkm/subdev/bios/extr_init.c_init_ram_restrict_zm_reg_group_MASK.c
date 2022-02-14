
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct nvkm_bios {int dummy; } ;
struct nvbios_init {scalar_t__ offset; TYPE_2__* subdev; } ;
struct TYPE_4__ {TYPE_1__* device; } ;
struct TYPE_3__ {struct nvkm_bios* bios; } ;


 scalar_t__ FUNC_0 (struct nvbios_init*) ;
 scalar_t__ FUNC_1 (struct nvbios_init*) ;
 int FUNC_2 (struct nvbios_init*,int ,int ) ;
 scalar_t__ FUNC_3 (struct nvkm_bios*,scalar_t__) ;
 int FUNC_4 (struct nvkm_bios*,scalar_t__) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static void
FUNC_6(struct nvbios_init *VAR_0)
{
 struct nvkm_bios *VAR_1 = VAR_0->subdev->device->bios;
 u32 VAR_2 = FUNC_4(VAR_1, VAR_0->offset + 1);
 u8 VAR_3 = FUNC_3(VAR_1, VAR_0->offset + 5);
 u8 VAR_4 = FUNC_3(VAR_1, VAR_0->offset + 6);
 u8 VAR_5 = FUNC_1(VAR_0);
 u8 VAR_6 = FUNC_0(VAR_0);
 u8 VAR_7, VAR_8;

 FUNC_5("RAM_RESTRICT_ZM_REG_GROUP\t"
       "R[0x%08x] 0x%02x 0x%02x\n", VAR_2, VAR_3, VAR_4);
 VAR_0->offset += 7;

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  FUNC_5("\tR[0x%06x] = {\n", VAR_2);
  for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
   u32 VAR_9 = FUNC_4(VAR_1, VAR_0->offset);

   if (VAR_8 == VAR_6) {
    FUNC_5("\t\t0x%08x *\n", VAR_9);
    FUNC_2(VAR_0, VAR_2, VAR_9);
   } else {
    FUNC_5("\t\t0x%08x\n", VAR_9);
   }

   VAR_0->offset += 4;
  }
  FUNC_5("\t}\n");
  VAR_2 += VAR_3;
 }
}
