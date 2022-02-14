
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct nvkm_bios {int dummy; } ;
struct nvbios_init {scalar_t__ offset; TYPE_2__* subdev; } ;
struct TYPE_4__ {TYPE_1__* device; } ;
struct TYPE_3__ {struct nvkm_bios* bios; } ;


 scalar_t__ FUNC_0 (struct nvbios_init*,int ) ;
 int FUNC_1 (struct nvbios_init*,scalar_t__,int ) ;
 int FUNC_2 (struct nvkm_bios*,scalar_t__) ;
 int FUNC_3 (char*,int ,...) ;

__attribute__((used)) static void
FUNC_4(struct nvbios_init *VAR_0)
{
 struct nvkm_bios *VAR_1 = VAR_0->subdev->device->bios;
 u8 VAR_2 = FUNC_2(VAR_1, VAR_0->offset + 1);
 u8 VAR_3 = FUNC_2(VAR_1, VAR_0->offset + 2);
 u32 VAR_4 = FUNC_0(VAR_0, VAR_2);

 FUNC_3("TMDS_ZM_GROUP\tT[0x%02x]\n", VAR_2);
 VAR_0->offset += 3;

 while (VAR_3--) {
  u8 VAR_5 = FUNC_2(VAR_1, VAR_0->offset + 0);
  u8 VAR_6 = FUNC_2(VAR_1, VAR_0->offset + 1);

  FUNC_3("\t[0x%02x] = 0x%02x\n", VAR_5, VAR_6);
  VAR_0->offset += 2;

  FUNC_1(VAR_0, VAR_4 + 4, VAR_6);
  FUNC_1(VAR_0, VAR_4 + 0, VAR_5);
 }
}
