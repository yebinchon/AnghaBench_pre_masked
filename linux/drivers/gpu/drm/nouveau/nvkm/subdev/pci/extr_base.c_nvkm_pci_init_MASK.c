
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_subdev {int dummy; } ;
struct TYPE_3__ {scalar_t__ bridge; } ;
struct nvkm_pci {TYPE_2__* func; scalar_t__ msi; int pdev; TYPE_1__ agp; } ;
struct TYPE_4__ {int (* msi_rearm ) (struct nvkm_pci*) ;int (* init ) (struct nvkm_pci*) ;} ;


 int FUNC_0 (struct nvkm_pci*) ;
 struct nvkm_pci* FUNC_1 (struct nvkm_subdev*) ;
 int FUNC_2 (struct nvkm_pci*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct nvkm_pci*) ;
 int FUNC_5 (struct nvkm_pci*) ;

__attribute__((used)) static int
FUNC_6(struct nvkm_subdev *VAR_0)
{
 struct nvkm_pci *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 if (VAR_1->agp.bridge) {
  VAR_2 = FUNC_0(VAR_1);
  if (VAR_2)
   return VAR_2;
 } else if (FUNC_3(VAR_1->pdev)) {
  FUNC_2(VAR_1);
 }

 if (VAR_1->func->init)
  VAR_1->func->init(VAR_1);




 if (VAR_1->msi)
  VAR_1->func->msi_rearm(VAR_1);

 return 0;
}
