
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_pci {TYPE_1__ subdev; } ;
struct nvkm_device {int dummy; } ;
typedef enum nvkm_pcie_speed { ____Placeholder_nvkm_pcie_speed } nvkm_pcie_speed ;





 int FUNC_0 (struct nvkm_pci*,int) ;
 int FUNC_1 (struct nvkm_device*,int,int,int) ;

__attribute__((used)) static void
FUNC_2(struct nvkm_pci *VAR_0, enum nvkm_pcie_speed VAR_1)
{
 struct nvkm_device *VAR_2 = VAR_0->subdev.device;

 switch (VAR_1) {
 case 130:
  FUNC_0(VAR_0, 0);
  FUNC_1(VAR_2, 0x8c1c0, 0x30000, 0x10000);
  break;
 case 129:
  FUNC_0(VAR_0, 1);
  FUNC_1(VAR_2, 0x8c1c0, 0x30000, 0x20000);
  break;
 case 128:
  FUNC_0(VAR_0, 1);
  FUNC_1(VAR_2, 0x8c1c0, 0x30000, 0x30000);
  break;
 }
}
