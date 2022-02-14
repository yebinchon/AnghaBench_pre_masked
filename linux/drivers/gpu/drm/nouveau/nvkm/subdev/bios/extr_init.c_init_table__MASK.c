
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct nvkm_bios {int dummy; } ;
struct nvbios_init {TYPE_2__* subdev; } ;
struct TYPE_4__ {TYPE_1__* device; } ;
struct TYPE_3__ {struct nvkm_bios* bios; } ;


 scalar_t__ FUNC_0 (struct nvkm_bios*,scalar_t__*) ;
 scalar_t__ FUNC_1 (struct nvkm_bios*,scalar_t__) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static u16
FUNC_3(struct nvbios_init *VAR_0, u16 VAR_1, const char *VAR_2)
{
 struct nvkm_bios *VAR_3 = VAR_0->subdev->device->bios;
 u16 VAR_4, VAR_5 = FUNC_0(VAR_3, &VAR_4);
 if (VAR_5) {
  if (VAR_4 >= VAR_1 + 2) {
   VAR_5 = FUNC_1(VAR_3, VAR_5 + VAR_1);
   if (VAR_5)
    return VAR_5;

   FUNC_2("%s pointer invalid\n", VAR_2);
   return 0x0000;
  }

  FUNC_2("init data too short for %s pointer", VAR_2);
  return 0x0000;
 }

 FUNC_2("init data not found\n");
 return 0x0000;
}
