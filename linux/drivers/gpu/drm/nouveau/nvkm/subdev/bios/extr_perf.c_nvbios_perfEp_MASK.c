
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_4__ {TYPE_1__* device; } ;
struct nvkm_bios {TYPE_2__ subdev; } ;
struct nvbios_perfE {int pstate; int core; int memory; int fanspeed; int voltage; int shader; int script; int vdec; int disp; int pcie_width; int pcie_speed; } ;
struct TYPE_3__ {int chipset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nvbios_perfE*,int,int) ;
 scalar_t__ FUNC_1 (struct nvkm_bios*,int,int*,int*,int*,int*) ;
 int FUNC_2 (struct nvkm_bios*,scalar_t__) ;
 int FUNC_3 (struct nvkm_bios*,scalar_t__) ;
 int FUNC_4 (struct nvkm_bios*,scalar_t__) ;

u32
FUNC_5(struct nvkm_bios *VAR_3, int VAR_4,
       u8 *VAR_5, u8 *VAR_6, u8 *VAR_7, u8 *VAR_8, struct nvbios_perfE *VAR_9)
{
 u32 VAR_10 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
 FUNC_0(VAR_9, 0x00, sizeof(*VAR_9));
 VAR_9->pstate = FUNC_2(VAR_3, VAR_10 + 0x00);
 switch (!!VAR_10 * *VAR_5) {
 case 0x12:
 case 0x13:
 case 0x14:
  VAR_9->core = FUNC_4(VAR_3, VAR_10 + 0x01) * 10;
  VAR_9->memory = FUNC_4(VAR_3, VAR_10 + 0x05) * 20;
  VAR_9->fanspeed = FUNC_2(VAR_3, VAR_10 + 0x37);
  if (*VAR_6 > 0x38)
   VAR_9->voltage = FUNC_2(VAR_3, VAR_10 + 0x38);
  break;
 case 0x21:
 case 0x23:
 case 0x24:
  VAR_9->fanspeed = FUNC_2(VAR_3, VAR_10 + 0x04);
  VAR_9->voltage = FUNC_2(VAR_3, VAR_10 + 0x05);
  VAR_9->shader = FUNC_3(VAR_3, VAR_10 + 0x06) * 1000;
  VAR_9->core = VAR_9->shader + (signed char)
     FUNC_2(VAR_3, VAR_10 + 0x08) * 1000;
  switch (VAR_3->subdev.device->chipset) {
  case 0x49:
  case 0x4b:
   VAR_9->memory = FUNC_3(VAR_3, VAR_10 + 0x0b) * 1000;
   break;
  default:
   VAR_9->memory = FUNC_3(VAR_3, VAR_10 + 0x0b) * 2000;
   break;
  }
  break;
 case 0x25:
  VAR_9->fanspeed = FUNC_2(VAR_3, VAR_10 + 0x04);
  VAR_9->voltage = FUNC_2(VAR_3, VAR_10 + 0x05);
  VAR_9->core = FUNC_3(VAR_3, VAR_10 + 0x06) * 1000;
  VAR_9->shader = FUNC_3(VAR_3, VAR_10 + 0x0a) * 1000;
  VAR_9->memory = FUNC_3(VAR_3, VAR_10 + 0x0c) * 1000;
  break;
 case 0x30:
  VAR_9->script = FUNC_3(VAR_3, VAR_10 + 0x02);

 case 0x35:
  VAR_9->fanspeed = FUNC_2(VAR_3, VAR_10 + 0x06);
  VAR_9->voltage = FUNC_2(VAR_3, VAR_10 + 0x07);
  VAR_9->core = FUNC_3(VAR_3, VAR_10 + 0x08) * 1000;
  VAR_9->shader = FUNC_3(VAR_3, VAR_10 + 0x0a) * 1000;
  VAR_9->memory = FUNC_3(VAR_3, VAR_10 + 0x0c) * 1000;
  VAR_9->vdec = FUNC_3(VAR_3, VAR_10 + 0x10) * 1000;
  VAR_9->disp = FUNC_3(VAR_3, VAR_10 + 0x14) * 1000;
  break;
 case 0x40:
  VAR_9->voltage = FUNC_2(VAR_3, VAR_10 + 0x02);
  switch (FUNC_2(VAR_3, VAR_10 + 0xb) & 0x3) {
  case 0:
   VAR_9->pcie_speed = VAR_1;
   break;
  case 3:
  case 1:
   VAR_9->pcie_speed = VAR_0;
   break;
  case 2:
   VAR_9->pcie_speed = VAR_2;
   break;
  default:
   break;
  }
  VAR_9->pcie_width = 0xff;
  break;
 default:
  return 0;
 }
 return VAR_10;
}
