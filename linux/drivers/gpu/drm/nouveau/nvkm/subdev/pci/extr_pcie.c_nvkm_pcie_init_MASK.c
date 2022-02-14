
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvkm_subdev {int dummy; } ;
struct TYPE_6__ {int speed; int width; } ;
struct nvkm_pci {TYPE_3__ pcie; TYPE_2__* func; struct nvkm_subdev subdev; } ;
struct TYPE_4__ {int (* init ) (struct nvkm_pci*) ;} ;
struct TYPE_5__ {TYPE_1__ pcie; } ;


 int FUNC_0 (struct nvkm_subdev*,char*,int) ;
 int FUNC_1 (struct nvkm_pci*) ;
 int FUNC_2 (struct nvkm_pci*) ;
 int FUNC_3 (struct nvkm_pci*,int,int ) ;
 int FUNC_4 (struct nvkm_pci*,int) ;
 int FUNC_5 (struct nvkm_pci*) ;

int
FUNC_6(struct nvkm_pci *VAR_0)
{
 struct nvkm_subdev *VAR_1 = &VAR_0->subdev;
 int VAR_2;


 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2 > 0) {
  int VAR_3 = FUNC_1(VAR_0);
  if (VAR_3 > 0 && VAR_3 > VAR_2)
   VAR_2 = FUNC_4(VAR_0, VAR_3);

  if (VAR_2 < VAR_3)
   FUNC_0(VAR_1, "couldn't raise version: %i\n", VAR_2);
 }

 if (VAR_0->func->pcie.init)
  VAR_0->func->pcie.init(VAR_0);

 if (VAR_0->pcie.speed != -1)
  FUNC_3(VAR_0, VAR_0->pcie.speed, VAR_0->pcie.width);

 return 0;
}
