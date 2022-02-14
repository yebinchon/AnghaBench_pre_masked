
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct nvkm_bios {int dummy; } ;
struct nvbios_init {TYPE_2__* subdev; } ;
struct TYPE_4__ {TYPE_1__* device; } ;
struct TYPE_3__ {struct nvkm_bios* bios; } ;


 scalar_t__ FUNC_0 (struct nvbios_init*) ;
 int FUNC_1 (struct nvbios_init*,scalar_t__,int) ;
 int FUNC_2 (struct nvkm_bios*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct nvkm_bios*,scalar_t__) ;
 int FUNC_4 (char*,int,scalar_t__,int,int,int) ;

__attribute__((used)) static bool
FUNC_5(struct nvbios_init *VAR_0, u8 VAR_1)
{
 struct nvkm_bios *VAR_2 = VAR_0->subdev->device->bios;
 u16 VAR_3 = FUNC_0(VAR_0);
 if (VAR_3) {
  u16 VAR_4 = FUNC_3(VAR_2, VAR_3 + (VAR_1 * 5) + 0);
  u8 VAR_5 = FUNC_2(VAR_2, VAR_3 + (VAR_1 * 5) + 2);
  u8 VAR_6 = FUNC_2(VAR_2, VAR_3 + (VAR_1 * 5) + 3);
  u8 VAR_7 = FUNC_2(VAR_2, VAR_3 + (VAR_1 * 5) + 4);
  FUNC_4("\t[0x%02x] (0x%04x[0x%02x] & 0x%02x) == 0x%02x\n",
        VAR_1, VAR_4, VAR_5, VAR_6, VAR_7);
  return (FUNC_1(VAR_0, VAR_4, VAR_5) & VAR_6) == VAR_7;
 }
 return 0;
}
