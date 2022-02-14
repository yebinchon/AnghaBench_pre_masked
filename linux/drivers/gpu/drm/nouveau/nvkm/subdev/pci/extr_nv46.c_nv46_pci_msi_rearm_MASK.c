
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct nvkm_pci {TYPE_1__ subdev; } ;
struct nvkm_device {TYPE_2__* func; } ;
struct TYPE_6__ {struct pci_dev* pdev; } ;
struct TYPE_5__ {TYPE_3__* (* pci ) (struct nvkm_device*) ;} ;


 int FUNC_0 (struct pci_dev*,int,int) ;
 TYPE_3__* FUNC_1 (struct nvkm_device*) ;

void
FUNC_2(struct nvkm_pci *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->subdev.device;
 struct pci_dev *VAR_2 = VAR_1->func->pci(VAR_1)->pdev;
 FUNC_0(VAR_2, 0x68, 0xff);
}
