
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nvkm_pci {int dummy; } ;
typedef enum nvkm_pcie_speed { ____Placeholder_nvkm_pcie_speed } nvkm_pcie_speed ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nvkm_pci*,int) ;

__attribute__((used)) static enum nvkm_pcie_speed
FUNC_1(struct nvkm_pci *VAR_3)
{
 u8 VAR_4 = FUNC_0(VAR_3, 0xa8) & 0x3;
 switch (VAR_4) {
 case 0:
 case 1:
  return VAR_0;
 case 2:
  return VAR_1;
 case 3:
  return VAR_2;
 }
 return -1;
}
