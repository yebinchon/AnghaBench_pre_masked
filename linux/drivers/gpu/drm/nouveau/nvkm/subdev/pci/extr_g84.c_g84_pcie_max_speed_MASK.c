
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_pci {int dummy; } ;
typedef enum nvkm_pcie_speed { ____Placeholder_nvkm_pcie_speed } nvkm_pcie_speed ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nvkm_pci*,int) ;

enum nvkm_pcie_speed
FUNC_1(struct nvkm_pci *VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_2, 0x460) & 0x3300;
 if (VAR_3 == 0x2200)
  return VAR_1;
 return VAR_0;
}
