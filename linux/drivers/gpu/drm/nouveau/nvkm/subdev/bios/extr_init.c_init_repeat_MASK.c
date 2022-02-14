
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct nvkm_bios {int dummy; } ;
struct nvbios_init {scalar_t__ repeat; scalar_t__ repend; scalar_t__ offset; TYPE_2__* subdev; } ;
struct TYPE_4__ {TYPE_1__* device; } ;
struct TYPE_3__ {struct nvkm_bios* bios; } ;


 int FUNC_0 (struct nvbios_init*) ;
 scalar_t__ FUNC_1 (struct nvkm_bios*,scalar_t__) ;
 int FUNC_2 (char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct nvbios_init *VAR_0)
{
 struct nvkm_bios *VAR_1 = VAR_0->subdev->device->bios;
 u8 VAR_2 = FUNC_1(VAR_1, VAR_0->offset + 1);
 u16 VAR_3 = VAR_0->repeat;

 FUNC_2("REPEAT\t0x%02x\n", VAR_2);
 VAR_0->offset += 2;

 VAR_0->repeat = VAR_0->offset;
 VAR_0->repend = VAR_0->offset;
 while (VAR_2--) {
  VAR_0->offset = VAR_0->repeat;
  FUNC_0(VAR_0);
  if (VAR_2)
   FUNC_2("REPEAT\t0x%02x\n", VAR_2);
 }
 VAR_0->offset = VAR_0->repend;
 VAR_0->repeat = VAR_3;
}
