
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_pci {TYPE_1__ subdev; } ;
struct nvkm_device {int dummy; } ;
typedef enum nvkm_pcie_speed { ____Placeholder_nvkm_pcie_speed } nvkm_pcie_speed ;





 int FUNC_0 (struct nvkm_device*,int,int,int) ;

__attribute__((used)) static void
FUNC_1(struct nvkm_pci *VAR_0, enum nvkm_pcie_speed VAR_1)
{
 struct nvkm_device *VAR_2 = VAR_0->subdev.device;
 u32 VAR_3;

 switch (VAR_1) {
 case 128:
  VAR_3 = 0x00000;
  break;
 case 129:
  VAR_3 = 0x40000;
  break;
 case 130:
 default:
  VAR_3 = 0x80000;
  break;
 }

 FUNC_0(VAR_2, 0x8c040, 0xc0000, VAR_3);
 FUNC_0(VAR_2, 0x8c040, 0x1, 0x1);
}
