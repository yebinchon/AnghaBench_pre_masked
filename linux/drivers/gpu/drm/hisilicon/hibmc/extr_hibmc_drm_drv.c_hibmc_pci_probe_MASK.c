
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct drm_device {struct pci_dev* pdev; } ;


 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 struct drm_device* FUNC_3 (int *,int *) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*,int ) ;
 int VAR_0 ;
 int FUNC_6 (struct drm_device*) ;
 int FUNC_7 (struct drm_device*) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*,struct drm_device*) ;

__attribute__((used)) static int FUNC_11(struct pci_dev *VAR_1,
      const struct pci_device_id *VAR_2)
{
 struct drm_device *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_3(&VAR_0, &VAR_1->dev);
 if (FUNC_1(VAR_3)) {
  FUNC_0("failed to allocate drm_device\n");
  return FUNC_2(VAR_3);
 }

 VAR_3->pdev = VAR_1;
 FUNC_10(VAR_1, VAR_3);

 VAR_4 = FUNC_9(VAR_1);
 if (VAR_4) {
  FUNC_0("failed to enable pci device: %d\n", VAR_4);
  goto err_free;
 }

 VAR_4 = FUNC_6(VAR_3);
 if (VAR_4) {
  FUNC_0("failed to load hibmc: %d\n", VAR_4);
  goto err_disable;
 }

 VAR_4 = FUNC_5(VAR_3, 0);
 if (VAR_4) {
  FUNC_0("failed to register drv for userspace access: %d\n",
     VAR_4);
  goto err_unload;
 }
 return 0;

err_unload:
 FUNC_7(VAR_3);
err_disable:
 FUNC_8(VAR_1);
err_free:
 FUNC_4(VAR_3);

 return VAR_4;
}
