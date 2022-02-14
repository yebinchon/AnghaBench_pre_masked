
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct nvkm_bios {int dummy; } ;
struct nvbios_init {scalar_t__ offset; TYPE_2__* subdev; } ;
struct TYPE_4__ {TYPE_1__* device; } ;
struct TYPE_3__ {struct nvkm_bios* bios; } ;


 int FUNC_0 (struct nvbios_init*,int ,int ) ;
 int FUNC_1 (struct nvkm_bios*,scalar_t__) ;
 int FUNC_2 (struct nvkm_bios*,scalar_t__) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static void
FUNC_4(struct nvbios_init *VAR_0)
{
 struct nvkm_bios *VAR_1 = VAR_0->subdev->device->bios;
 u32 VAR_2 = FUNC_2(VAR_1, VAR_0->offset + 1);
 u8 VAR_3 = FUNC_1(VAR_1, VAR_0->offset + 5);

 FUNC_3("ZM_REG_GROUP\tR[0x%06x] =\n", VAR_2);
 VAR_0->offset += 6;

 while (VAR_3--) {
  u32 VAR_4 = FUNC_2(VAR_1, VAR_0->offset);
  FUNC_3("\t0x%08x\n", VAR_4);
  FUNC_0(VAR_0, VAR_2, VAR_4);
  VAR_0->offset += 4;
 }
}
