
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_pci {TYPE_2__* func; int subdev; } ;
struct TYPE_3__ {int (* set_version ) (struct nvkm_pci*,int) ;} ;
struct TYPE_4__ {TYPE_1__ pcie; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_pci*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct nvkm_pci*,int) ;

__attribute__((used)) static int
FUNC_3(struct nvkm_pci *VAR_1, int VAR_2)
{
 if (!VAR_1->func->pcie.set_version)
  return -VAR_0;

 FUNC_1(&VAR_1->subdev, "set to version %i\n", VAR_2);
 VAR_1->func->pcie.set_version(VAR_1, VAR_2);
 return FUNC_0(VAR_1);
}
