
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {int major; } ;
struct nvkm_bios {TYPE_1__ version; } ;
struct nvbios_init {int offset; TYPE_3__* subdev; } ;
struct TYPE_6__ {TYPE_2__* device; } ;
struct TYPE_5__ {struct nvkm_bios* bios; } ;


 int FUNC_0 (struct nvbios_init*) ;
 int FUNC_1 (struct nvbios_init*) ;
 int FUNC_2 (struct nvbios_init*,int) ;
 int FUNC_3 (struct nvbios_init*,int,int) ;
 int FUNC_4 (struct nvkm_bios*,int) ;
 int FUNC_5 (struct nvkm_bios*,int) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7(struct nvbios_init *VAR_0)
{
 struct nvkm_bios *VAR_1 = VAR_0->subdev->device->bios;
 u16 VAR_2, VAR_3;

 FUNC_6("CONFIGURE_CLK\n");
 VAR_0->offset += 1;

 if (VAR_1->version.major > 2) {
  FUNC_1(VAR_0);
  return;
 }
 FUNC_2(VAR_0, 1);

 VAR_2 = FUNC_0(VAR_0);


 VAR_3 = FUNC_5(VAR_1, VAR_2 + 4) * 10;
 FUNC_3(VAR_0, 0x680500, VAR_3);


 VAR_3 = FUNC_5(VAR_1, VAR_2 + 2) * 10;
 if (FUNC_4(VAR_1, VAR_2) & 0x01)
  VAR_3 *= 2;
 FUNC_3(VAR_0, 0x680504, VAR_3);

 FUNC_2(VAR_0, 0);
}
