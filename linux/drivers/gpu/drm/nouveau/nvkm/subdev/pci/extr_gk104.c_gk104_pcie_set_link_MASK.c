
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nvkm_subdev {int dummy; } ;
struct nvkm_pci {struct nvkm_subdev subdev; } ;
typedef enum nvkm_pcie_speed { ____Placeholder_nvkm_pcie_speed } nvkm_pcie_speed ;


 int FUNC_0 (struct nvkm_pci*) ;
 int FUNC_1 (struct nvkm_pci*) ;
 int FUNC_2 (struct nvkm_pci*,int) ;
 int FUNC_3 (struct nvkm_subdev*,char*) ;

__attribute__((used)) static int
FUNC_4(struct nvkm_pci *VAR_0, enum nvkm_pcie_speed VAR_1, u8 VAR_2)
{
 struct nvkm_subdev *VAR_3 = &VAR_0->subdev;
 enum nvkm_pcie_speed VAR_4 = FUNC_1(VAR_0);
 enum nvkm_pcie_speed VAR_5 = FUNC_0(VAR_0);

 if (VAR_1 > VAR_5) {
  VAR_1 = VAR_5;
  FUNC_3(VAR_3, "dropping requested speed due too low cap"
     " speed\n");
 }

 if (VAR_1 > VAR_4) {
  VAR_1 = VAR_4;
  FUNC_3(VAR_3, "dropping requested speed due too low"
     " lnkctl speed\n");
 }

 FUNC_2(VAR_0, VAR_1);
 return 0;
}
