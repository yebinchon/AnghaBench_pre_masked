
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pll_mapping {int dummy; } ;
struct nvkm_device {int card_type; int chipset; } ;
struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_bios {TYPE_1__ subdev; } ;
 struct pll_mapping* VAR_0 ;
 struct pll_mapping* VAR_1 ;
 struct pll_mapping* VAR_2 ;
 struct pll_mapping* VAR_3 ;

__attribute__((used)) static struct pll_mapping *
FUNC_0(struct nvkm_bios *VAR_4)
{
 struct nvkm_device *VAR_5 = VAR_4->subdev.device;
 switch (VAR_5->card_type) {
 case 134:
 case 133:
 case 132:
 case 131:
 case 130:
  return VAR_1;
  break;
 case 129:
  return VAR_2;
 case 128:
  if (VAR_5->chipset == 0x50)
   return VAR_3;
  else
  if (VAR_5->chipset < 0xa3 ||
      VAR_5->chipset == 0xaa ||
      VAR_5->chipset == 0xac)
   return VAR_0;

 default:
  return ((void*)0);
 }
}
