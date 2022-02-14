
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_pci {int dummy; } ;
typedef enum nvkm_pcie_speed { ____Placeholder_nvkm_pcie_speed } nvkm_pcie_speed ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_pci*,int,int,int) ;

void
FUNC_1(struct nvkm_pci *VAR_1, enum nvkm_pcie_speed VAR_2)
{
 u32 VAR_3;

 if (VAR_2 == VAR_0)
  VAR_3 = 0x20;
 else
  VAR_3 = 0x10;

 FUNC_0(VAR_1, 0x460, 0x30, VAR_3);
 FUNC_0(VAR_1, 0x460, 0x1, 0x1);
}
