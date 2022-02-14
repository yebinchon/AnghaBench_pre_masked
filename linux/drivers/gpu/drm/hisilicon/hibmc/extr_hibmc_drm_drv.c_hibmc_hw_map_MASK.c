
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct hibmc_drm_private {void* fb_size; void* fb_base; int fb_map; int mmio; struct drm_device* dev; } ;
struct drm_device {int dev; struct pci_dev* pdev; } ;
typedef void* resource_size_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,void*,void*) ;
 int FUNC_2 (int ,void*,void*) ;
 void* FUNC_3 (struct pci_dev*,int) ;
 void* FUNC_4 (struct pci_dev*,int) ;

__attribute__((used)) static int FUNC_5(struct hibmc_drm_private *VAR_1)
{
 struct drm_device *VAR_2 = VAR_1->dev;
 struct pci_dev *VAR_3 = VAR_2->pdev;
 resource_size_t VAR_4, VAR_5, VAR_6, VAR_7;

 VAR_6 = FUNC_4(VAR_3, 1);
 VAR_7 = FUNC_3(VAR_3, 1);
 VAR_1->mmio = FUNC_2(VAR_2->dev, VAR_6, VAR_7);
 if (!VAR_1->mmio) {
  FUNC_0("Cannot map mmio region\n");
  return -VAR_0;
 }

 VAR_4 = FUNC_4(VAR_3, 0);
 VAR_5 = FUNC_3(VAR_3, 0);
 VAR_1->fb_map = FUNC_1(VAR_2->dev, VAR_4, VAR_5);
 if (!VAR_1->fb_map) {
  FUNC_0("Cannot map framebuffer\n");
  return -VAR_0;
 }
 VAR_1->fb_base = VAR_4;
 VAR_1->fb_size = VAR_5;

 return 0;
}
