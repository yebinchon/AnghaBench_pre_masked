
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct drm_psb_private {scalar_t__ display_count; int suspended; } ;
struct drm_device {int dev; struct drm_psb_private* dev_private; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct drm_device* FUNC_5 (struct pci_dev*) ;
 int VAR_1 ;
 int FUNC_6 (struct drm_device*) ;
 struct pci_dev* FUNC_7 (struct device*) ;

int FUNC_8(struct device *VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_7(VAR_2);
 struct drm_device *VAR_4 = FUNC_5(VAR_3);
 struct drm_psb_private *VAR_5 = VAR_4->dev_private;

 FUNC_3(&VAR_1);
 if (!VAR_5->suspended) {
  if (VAR_5->display_count) {
   FUNC_4(&VAR_1);
   FUNC_0(VAR_4->dev, "GPU hardware busy, cannot suspend\n");
   return -VAR_0;
  }
  FUNC_6(VAR_4);
  FUNC_1(VAR_4);
  FUNC_2(VAR_3);
 }
 FUNC_4(&VAR_1);
 return 0;
}
