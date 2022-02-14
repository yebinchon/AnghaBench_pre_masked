
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_pci {int dummy; } ;
typedef enum nvkm_pcie_speed { ____Placeholder_nvkm_pcie_speed } nvkm_pcie_speed ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nvkm_pci*,int) ;

enum nvkm_pcie_speed
FUNC_1(struct nvkm_pci *VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_3, 0x88) & 0x30000;
 switch (VAR_4) {
 case 0x30000:
  return VAR_2;
 case 0x20000:
  return VAR_1;
 case 0x10000:
 default:
  return VAR_0;
 }
}
