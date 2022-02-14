
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
 int FUNC_1 (struct nvbios_init*,int,int) ;
 int FUNC_2 (struct nvkm_bios*,int) ;
 int FUNC_3 (struct nvkm_bios*,int) ;

__attribute__((used)) static bool
FUNC_4(struct nvbios_init *VAR_0, u8 VAR_1)
{
 struct nvkm_bios *VAR_2 = VAR_0->subdev->device->bios;
 u16 VAR_3 = FUNC_0(VAR_0);
 if (VAR_3) {
  u16 VAR_4 = FUNC_3(VAR_2, VAR_3 + (VAR_1 * 9) + 0);
  u8 VAR_5 = FUNC_2(VAR_2, VAR_3 + (VAR_1 * 9) + 2);
  u8 VAR_6 = FUNC_2(VAR_2, VAR_3 + (VAR_1 * 9) + 3);
  u8 VAR_7 = FUNC_2(VAR_2, VAR_3 + (VAR_1 * 9) + 4);
  u16 VAR_8 = FUNC_3(VAR_2, VAR_3 + (VAR_1 * 9) + 5);
  u8 VAR_9 = FUNC_2(VAR_2, VAR_3 + (VAR_1 * 9) + 7);
  u8 VAR_10 = FUNC_2(VAR_2, VAR_3 + (VAR_1 * 9) + 8);
  u8 VAR_11 = (FUNC_1(VAR_0, VAR_4, VAR_5) & VAR_6) >> VAR_7;
  return (FUNC_2(VAR_2, VAR_8 + VAR_11) & VAR_9) == VAR_10;
 }
 return 0;
}
