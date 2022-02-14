
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u16 ;
struct nvkm_bios {int dummy; } ;
struct nvbios_init {void* offset; TYPE_2__* subdev; } ;
struct TYPE_4__ {TYPE_1__* device; } ;
struct TYPE_3__ {struct nvkm_bios* bios; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct nvbios_init*) ;
 scalar_t__ FUNC_2 (struct nvbios_init*) ;
 void* FUNC_3 (struct nvkm_bios*,void*) ;
 int FUNC_4 (char*,void*) ;

__attribute__((used)) static void
FUNC_5(struct nvbios_init *VAR_0)
{
 struct nvkm_bios *VAR_1 = VAR_0->subdev->device->bios;
 u16 VAR_2 = FUNC_3(VAR_1, VAR_0->offset + 1);
 u16 VAR_3;

 FUNC_4("SUB_DIRECT\t0x%04x\n", VAR_2);

 if (FUNC_1(VAR_0)) {
  VAR_3 = VAR_0->offset;
  VAR_0->offset = VAR_2;
  if (FUNC_2(VAR_0)) {
   FUNC_0("error parsing sub-table\n");
   return;
  }
  VAR_0->offset = VAR_3;
 }

 VAR_0->offset += 3;
}
