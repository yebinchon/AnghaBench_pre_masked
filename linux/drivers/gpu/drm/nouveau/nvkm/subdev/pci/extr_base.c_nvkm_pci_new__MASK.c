
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nvkm_pci_func {scalar_t__ msi_rearm; } ;
struct TYPE_6__ {int speed; int width; } ;
struct nvkm_pci {int irq; int msi; int subdev; TYPE_4__* pdev; TYPE_2__ pcie; struct nvkm_pci_func const* func; } ;
struct nvkm_device {scalar_t__ type; int cfgopt; int chipset; TYPE_1__* func; } ;
struct TYPE_8__ {int device; } ;
struct TYPE_7__ {TYPE_4__* pdev; } ;
struct TYPE_5__ {TYPE_3__* (* pci ) (struct nvkm_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct nvkm_pci* FUNC_0 (int,int ) ;
 int FUNC_1 (struct nvkm_pci*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int *,char*) ;
 int VAR_3 ;
 int FUNC_4 (int *,struct nvkm_device*,int,int *) ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;
 TYPE_3__* FUNC_6 (struct nvkm_device*) ;

int
FUNC_7(const struct nvkm_pci_func *VAR_4, struct nvkm_device *VAR_5,
       int VAR_6, struct nvkm_pci **VAR_7)
{
 struct nvkm_pci *VAR_8;

 if (!(VAR_8 = *VAR_7 = FUNC_0(sizeof(**VAR_7), VAR_1)))
  return -VAR_0;
 FUNC_4(&VAR_3, VAR_5, VAR_6, &VAR_8->subdev);
 VAR_8->func = VAR_4;
 VAR_8->pdev = VAR_5->func->pci(VAR_5)->pdev;
 VAR_8->irq = -1;
 VAR_8->pcie.speed = -1;
 VAR_8->pcie.width = -1;

 if (VAR_5->type == VAR_2)
  FUNC_1(VAR_8);

 switch (VAR_8->pdev->device & 0x0ff0) {
 case 0x00f0:
 case 0x02e0:

  break;
 default:
  switch (VAR_5->chipset) {
  case 0xaa:

   break;
  default:
   VAR_8->msi = 1;
   break;
  }
 }





 VAR_8->msi = FUNC_2(VAR_5->cfgopt, "NvMSI", VAR_8->msi);
 if (VAR_8->msi && VAR_4->msi_rearm) {
  VAR_8->msi = FUNC_5(VAR_8->pdev) == 0;
  if (VAR_8->msi)
   FUNC_3(&VAR_8->subdev, "MSI enabled\n");
 } else {
  VAR_8->msi = 0;
 }

 return 0;
}
