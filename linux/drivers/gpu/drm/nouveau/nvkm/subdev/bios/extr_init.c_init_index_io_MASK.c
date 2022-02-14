
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef void* u16 ;
struct nvkm_bios {int dummy; } ;
struct nvbios_init {scalar_t__ offset; TYPE_2__* subdev; } ;
struct TYPE_4__ {TYPE_1__* device; } ;
struct TYPE_3__ {struct nvkm_bios* bios; } ;


 int FUNC_0 (struct nvbios_init*,void*,int) ;
 int FUNC_1 (struct nvbios_init*,void*,int,int) ;
 int FUNC_2 (struct nvkm_bios*,scalar_t__) ;
 void* FUNC_3 (struct nvkm_bios*,scalar_t__) ;
 int FUNC_4 (char*,void*,int,int,int) ;

__attribute__((used)) static void
FUNC_5(struct nvbios_init *VAR_0)
{
 struct nvkm_bios *VAR_1 = VAR_0->subdev->device->bios;
 u16 VAR_2 = FUNC_3(VAR_1, VAR_0->offset + 1);
 u8 VAR_3 = FUNC_3(VAR_1, VAR_0->offset + 3);
 u8 VAR_4 = FUNC_2(VAR_1, VAR_0->offset + 4);
 u8 VAR_5 = FUNC_2(VAR_1, VAR_0->offset + 5);
 u8 VAR_6;

 FUNC_4("INDEX_IO\tI[0x%04x][0x%02x] &= 0x%02x |= 0x%02x\n",
       VAR_2, VAR_3, VAR_4, VAR_5);
 VAR_0->offset += 6;

 VAR_6 = FUNC_0(VAR_0, VAR_2, VAR_3) & VAR_4;
 FUNC_1(VAR_0, VAR_2, VAR_3, VAR_5 | VAR_6);
}
