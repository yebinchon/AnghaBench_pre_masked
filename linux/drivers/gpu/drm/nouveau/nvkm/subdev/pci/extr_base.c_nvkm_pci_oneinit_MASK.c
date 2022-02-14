
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int irq; } ;
struct nvkm_subdev {int dummy; } ;
struct nvkm_pci {int irq; struct pci_dev* pdev; } ;


 int VAR_0 ;
 struct nvkm_pci* FUNC_0 (struct nvkm_subdev*) ;
 int VAR_1 ;
 int FUNC_1 (struct nvkm_pci*) ;
 scalar_t__ FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (int ,int ,int ,char*,struct nvkm_pci*) ;

__attribute__((used)) static int
FUNC_4(struct nvkm_subdev *VAR_2)
{
 struct nvkm_pci *VAR_3 = FUNC_0(VAR_2);
 struct pci_dev *VAR_4 = VAR_3->pdev;
 int VAR_5;

 if (FUNC_2(VAR_3->pdev)) {
  VAR_5 = FUNC_1(VAR_3);
  if (VAR_5)
   return VAR_5;
 }

 VAR_5 = FUNC_3(VAR_4->irq, VAR_1, VAR_0, "nvkm", VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_3->irq = VAR_4->irq;
 return 0;
}
