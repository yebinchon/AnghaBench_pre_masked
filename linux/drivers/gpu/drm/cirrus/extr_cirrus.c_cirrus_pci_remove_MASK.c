
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct drm_device {struct cirrus_device* dev_private; } ;
struct cirrus_device {int vram; int mmio; } ;


 int FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct cirrus_device*) ;
 struct drm_device* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_7(struct pci_dev *VAR_0)
{
 struct drm_device *VAR_1 = FUNC_5(VAR_0);
 struct cirrus_device *VAR_2 = VAR_1->dev_private;

 FUNC_1(VAR_1);
 FUNC_2(VAR_1);
 FUNC_3(VAR_2->mmio);
 FUNC_3(VAR_2->vram);
 FUNC_0(VAR_1);
 FUNC_4(VAR_2);
 FUNC_6(VAR_0);
}
