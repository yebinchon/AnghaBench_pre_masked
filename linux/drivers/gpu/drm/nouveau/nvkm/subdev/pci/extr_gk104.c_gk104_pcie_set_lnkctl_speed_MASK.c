
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nvkm_pci {int dummy; } ;
typedef enum nvkm_pcie_speed { ____Placeholder_nvkm_pcie_speed } nvkm_pcie_speed ;





 int FUNC_0 (struct nvkm_pci*,int,int,int) ;

__attribute__((used)) static void
FUNC_1(struct nvkm_pci *VAR_0, enum nvkm_pcie_speed VAR_1)
{
 u8 VAR_2 = 0;
 switch (VAR_1) {
 case 130:
  VAR_2 = 1;
  break;
 case 129:
  VAR_2 = 2;
  break;
 case 128:
  VAR_2 = 3;
  break;
 }
 FUNC_0(VAR_0, 0xa8, 0x3, VAR_2);
}
