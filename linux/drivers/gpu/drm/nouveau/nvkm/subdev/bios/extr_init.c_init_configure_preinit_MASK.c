
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int major; } ;
struct nvkm_bios {TYPE_3__ version; } ;
struct nvbios_init {int offset; TYPE_2__* subdev; } ;
struct TYPE_5__ {TYPE_1__* device; } ;
struct TYPE_4__ {struct nvkm_bios* bios; } ;


 int FUNC_0 (struct nvbios_init*) ;
 int FUNC_1 (struct nvbios_init*,int) ;
 int FUNC_2 (struct nvbios_init*,int) ;
 int FUNC_3 (struct nvbios_init*,int,int,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(struct nvbios_init *VAR_0)
{
 struct nvkm_bios *VAR_1 = VAR_0->subdev->device->bios;
 u32 VAR_2;

 FUNC_4("CONFIGURE_PREINIT\n");
 VAR_0->offset += 1;

 if (VAR_1->version.major > 2) {
  FUNC_0(VAR_0);
  return;
 }
 FUNC_1(VAR_0, 1);

 VAR_2 = FUNC_2(VAR_0, 0x101000);
 VAR_2 = ((VAR_2 << 2) & 0xf0) | ((VAR_2 & 0x40) >> 6);
 FUNC_3(VAR_0, 0x03d4, 0x3c, VAR_2);

 FUNC_1(VAR_0, 0);
}
