
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_subdev {int dummy; } ;
struct nvkm_pci {struct nvkm_subdev subdev; } ;
typedef enum nvkm_pcie_speed { ____Placeholder_nvkm_pcie_speed } nvkm_pcie_speed ;


 int FUNC_0 (struct nvkm_pci*) ;
 int FUNC_1 (struct nvkm_pci*) ;
 int FUNC_2 (struct nvkm_pci*) ;
 int FUNC_3 (struct nvkm_pci*) ;
 int FUNC_4 (struct nvkm_pci*,int) ;
 int FUNC_5 (struct nvkm_pci*,int) ;
 int FUNC_6 (struct nvkm_subdev*,char*) ;
 int FUNC_7 (struct nvkm_subdev*,char*) ;
 int FUNC_8 (struct nvkm_subdev*,char*) ;
 int FUNC_9 (struct nvkm_subdev*,char*) ;

__attribute__((used)) static int
FUNC_10(struct nvkm_pci * VAR_0)
{
 enum nvkm_pcie_speed VAR_1, VAR_2, VAR_3;
 struct nvkm_subdev *VAR_4 = &VAR_0->subdev;

 if (FUNC_0(VAR_0) < 2)
  return 0;

 VAR_1 = FUNC_2(VAR_0);
 VAR_2 = FUNC_3(VAR_0);
 VAR_3 = FUNC_1(VAR_0);

 if (VAR_3 != VAR_2) {
  FUNC_8(VAR_4, "adjusting cap to max speed\n");
  FUNC_4(VAR_0, VAR_2);
  VAR_3 = FUNC_1(VAR_0);
  if (VAR_3 != VAR_2)
   FUNC_9(VAR_4, "failed to adjust cap speed\n");
 }

 if (VAR_1 != VAR_2) {
  FUNC_6(VAR_4, "adjusting lnkctl to max speed\n");
  FUNC_5(VAR_0, VAR_2);
  VAR_1 = FUNC_2(VAR_0);
  if (VAR_1 != VAR_2)
   FUNC_7(VAR_4, "failed to adjust lnkctl speed\n");
 }

 return 0;
}
