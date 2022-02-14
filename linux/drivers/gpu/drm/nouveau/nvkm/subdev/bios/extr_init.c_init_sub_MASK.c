
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef void* u16 ;
struct nvkm_bios {int dummy; } ;
struct nvbios_init {void* offset; TYPE_2__* subdev; } ;
struct TYPE_4__ {TYPE_1__* device; } ;
struct TYPE_3__ {struct nvkm_bios* bios; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct nvbios_init*) ;
 void* FUNC_2 (struct nvkm_bios*,int ) ;
 scalar_t__ FUNC_3 (struct nvbios_init*) ;
 int FUNC_4 (struct nvkm_bios*,void*) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static void
FUNC_6(struct nvbios_init *VAR_0)
{
 struct nvkm_bios *VAR_1 = VAR_0->subdev->device->bios;
 u8 VAR_2 = FUNC_4(VAR_1, VAR_0->offset + 1);
 u16 VAR_3, VAR_4;

 FUNC_5("SUB\t0x%02x\n", VAR_2);

 VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (VAR_3 && FUNC_1(VAR_0)) {
  VAR_4 = VAR_0->offset;
  VAR_0->offset = VAR_3;
  if (FUNC_3(VAR_0)) {
   FUNC_0("error parsing sub-table\n");
   return;
  }
  VAR_0->offset = VAR_4;
 }

 VAR_0->offset += 2;
}
