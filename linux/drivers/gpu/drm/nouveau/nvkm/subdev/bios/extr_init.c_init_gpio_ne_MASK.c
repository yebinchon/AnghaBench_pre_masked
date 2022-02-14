
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct nvkm_gpio {int dummy; } ;
struct TYPE_8__ {TYPE_3__* device; } ;
struct nvkm_bios {TYPE_4__ subdev; } ;
struct nvbios_init {scalar_t__ offset; TYPE_2__* subdev; } ;
struct dcb_gpio_func {scalar_t__ func; } ;
struct TYPE_7__ {struct nvkm_gpio* gpio; } ;
struct TYPE_6__ {TYPE_1__* device; } ;
struct TYPE_5__ {struct nvkm_bios* bios; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (struct nvkm_bios*,int ,int ,scalar_t__*,scalar_t__*,struct dcb_gpio_func*) ;
 scalar_t__ FUNC_2 (struct nvbios_init*) ;
 scalar_t__ FUNC_3 (struct nvkm_bios*,scalar_t__) ;
 int FUNC_4 (struct nvkm_gpio*,scalar_t__) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static void
FUNC_6(struct nvbios_init *VAR_1)
{
 struct nvkm_bios *VAR_2 = VAR_1->subdev->device->bios;
 struct nvkm_gpio *VAR_3 = VAR_2->subdev.device->gpio;
 struct dcb_gpio_func VAR_4;
 u8 VAR_5 = FUNC_3(VAR_2, VAR_1->offset + 1);
 u8 VAR_6 = 0, VAR_7, VAR_8;
 u16 VAR_9, VAR_10;

 FUNC_5("GPIO_NE\t");
 VAR_1->offset += 2;

 for (VAR_10 = VAR_1->offset; VAR_10 < VAR_1->offset + VAR_5; VAR_10++)
  FUNC_0("0x%02x ", FUNC_3(VAR_2, VAR_10));
 FUNC_0("\n");

 while ((VAR_9 = FUNC_1(VAR_2, 0, VAR_6++, &VAR_7, &VAR_8, &VAR_4))) {
  if (VAR_4.func != VAR_0) {
   for (VAR_10 = VAR_1->offset; VAR_10 < VAR_1->offset + VAR_5; VAR_10++) {
    if (VAR_4.func == FUNC_3(VAR_2, VAR_10))
     break;
   }

   FUNC_5("\tFUNC[0x%02x]", VAR_4.func);
   if (VAR_10 == (VAR_1->offset + VAR_5)) {
    FUNC_0(" *");
    if (FUNC_2(VAR_1))
     FUNC_4(VAR_3, VAR_4.func);
   }
   FUNC_0("\n");
  }
 }

 VAR_1->offset += VAR_5;
}
