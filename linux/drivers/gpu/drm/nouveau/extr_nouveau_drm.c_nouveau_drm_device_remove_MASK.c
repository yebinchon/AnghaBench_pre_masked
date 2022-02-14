
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct nvkm_client {int device; } ;
struct TYPE_2__ {int base; } ;
struct nouveau_drm {TYPE_1__ client; } ;
struct drm_device {int irq_enabled; struct pci_dev* pdev; } ;


 int FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_device*) ;
 struct nouveau_drm* FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct nvkm_device**) ;
 struct nvkm_device* FUNC_5 (int ) ;
 struct nvkm_client* FUNC_6 (int *) ;
 int FUNC_7 (struct pci_dev*) ;

void
FUNC_8(struct drm_device *VAR_0)
{
 struct pci_dev *VAR_1 = VAR_0->pdev;
 struct nouveau_drm *VAR_2 = FUNC_2(VAR_0);
 struct nvkm_client *VAR_3;
 struct nvkm_device *VAR_4;

 FUNC_1(VAR_0);

 VAR_0->irq_enabled = 0;
 VAR_3 = FUNC_6(&VAR_2->client.base);
 VAR_4 = FUNC_5(VAR_3->device);

 FUNC_3(VAR_0);
 FUNC_7(VAR_1);
 FUNC_0(VAR_0);
 FUNC_4(&VAR_4);
}
