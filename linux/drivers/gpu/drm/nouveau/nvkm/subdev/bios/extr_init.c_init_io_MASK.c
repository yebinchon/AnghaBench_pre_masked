
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_8__ {TYPE_3__* device; } ;
struct nvkm_bios {TYPE_4__ subdev; } ;
struct nvbios_init {scalar_t__ offset; TYPE_2__* subdev; } ;
struct TYPE_7__ {scalar_t__ card_type; } ;
struct TYPE_6__ {TYPE_1__* device; } ;
struct TYPE_5__ {struct nvkm_bios* bios; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct nvbios_init*,int,int,int) ;
 int FUNC_1 (struct nvbios_init*,int) ;
 int FUNC_2 (struct nvbios_init*,int,int) ;
 int FUNC_3 (struct nvbios_init*,int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct nvkm_bios*,scalar_t__) ;
 int FUNC_6 (char*,int,int,int) ;

__attribute__((used)) static void
FUNC_7(struct nvbios_init *VAR_1)
{
 struct nvkm_bios *VAR_2 = VAR_1->subdev->device->bios;
 u16 VAR_3 = FUNC_5(VAR_2, VAR_1->offset + 1);
 u8 VAR_4 = FUNC_5(VAR_2, VAR_1->offset + 3);
 u8 VAR_5 = FUNC_5(VAR_2, VAR_1->offset + 4);
 u8 VAR_6;

 FUNC_6("IO\t\tI[0x%04x] &= 0x%02x |= 0x%02x\n", VAR_3, VAR_4, VAR_5);
 VAR_1->offset += 5;





 if (VAR_2->subdev.device->card_type >= VAR_0 &&
     VAR_3 == 0x03c3 && VAR_5 == 0x01) {
  FUNC_0(VAR_1, 0x614100, 0xf0800000, 0x00800000);
  FUNC_0(VAR_1, 0x00e18c, 0x00020000, 0x00020000);
  FUNC_0(VAR_1, 0x614900, 0xf0800000, 0x00800000);
  FUNC_0(VAR_1, 0x000200, 0x40000000, 0x00000000);
  FUNC_4(10);
  FUNC_0(VAR_1, 0x00e18c, 0x00020000, 0x00000000);
  FUNC_0(VAR_1, 0x000200, 0x40000000, 0x40000000);
  FUNC_2(VAR_1, 0x614100, 0x00800018);
  FUNC_2(VAR_1, 0x614900, 0x00800018);
  FUNC_4(10);
  FUNC_2(VAR_1, 0x614100, 0x10000018);
  FUNC_2(VAR_1, 0x614900, 0x10000018);
 }

 VAR_6 = FUNC_1(VAR_1, VAR_3) & VAR_4;
 FUNC_3(VAR_1, VAR_3, VAR_5 | VAR_6);
}
