
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int device; } ;
struct nvkm_pci {TYPE_1__ subdev; } ;
typedef enum nvkm_pcie_speed { ____Placeholder_nvkm_pcie_speed } nvkm_pcie_speed ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nvkm_pci*) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static enum nvkm_pcie_speed
FUNC_2(struct nvkm_pci *VAR_4)
{
 int VAR_5 = FUNC_0(VAR_4);

 if (VAR_5 == 0)
  return VAR_1;

 if (VAR_5 >= 1) {
  int VAR_6 = FUNC_1(VAR_4->subdev.device, 0x8c1c0) & 0x30000;
  switch (VAR_6) {
  case 0x00000:
  case 0x10000:
   return VAR_1;
  case 0x20000:
   return VAR_2;
  case 0x30000:
   return VAR_3;
  }
 }

 return -VAR_0;
}
