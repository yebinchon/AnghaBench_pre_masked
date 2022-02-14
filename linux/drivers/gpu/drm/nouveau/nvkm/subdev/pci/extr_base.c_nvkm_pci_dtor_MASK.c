
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_subdev {int dummy; } ;
struct nvkm_pci {int irq; int pdev; scalar_t__ msi; } ;


 int FUNC_0 (int,struct nvkm_pci*) ;
 int FUNC_1 (struct nvkm_pci*) ;
 void* FUNC_2 (struct nvkm_subdev*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void *
FUNC_4(struct nvkm_subdev *VAR_0)
{
 struct nvkm_pci *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(VAR_1);

 if (VAR_1->irq >= 0) {



  int VAR_2 = VAR_1->irq;
  VAR_1->irq = -1;
  FUNC_0(VAR_2, VAR_1);
 }

 if (VAR_1->msi)
  FUNC_3(VAR_1->pdev);

 return FUNC_2(VAR_0);
}
