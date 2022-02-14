
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct drm_device {struct pci_dev* pdev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int VAR_1 ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 struct drm_device* FUNC_5 (int *,int *) ;
 int FUNC_6 (struct drm_device*) ;
 int FUNC_7 (struct drm_device*,int ) ;
 int FUNC_8 (struct pci_dev*,int ,char*) ;
 int FUNC_9 (struct drm_device*,int) ;
 int FUNC_10 (struct pci_dev*) ;
 unsigned long FUNC_11 (struct pci_dev*,int ) ;
 int FUNC_12 (struct pci_dev*,struct drm_device*) ;

__attribute__((used)) static int FUNC_13(struct pci_dev *VAR_2,
      const struct pci_device_id *VAR_3)
{
 struct drm_device *VAR_4;
 unsigned long VAR_5;
 int VAR_6;

 VAR_5 = FUNC_11(VAR_2, 0);
 if (VAR_5 < 4 * 1024 * 1024) {
  FUNC_0("less than 4 MB video memory, ignoring device\n");
  return -VAR_0;
 }

 VAR_6 = FUNC_8(VAR_2, 0, "bochsdrmfb");
 if (VAR_6)
  return VAR_6;

 VAR_4 = FUNC_5(&VAR_1, &VAR_2->dev);
 if (FUNC_1(VAR_4))
  return FUNC_2(VAR_4);

 VAR_6 = FUNC_10(VAR_2);
 if (VAR_6)
  goto err_free_dev;

 VAR_4->pdev = VAR_2;
 FUNC_12(VAR_2, VAR_4);

 VAR_6 = FUNC_3(VAR_4);
 if (VAR_6)
  goto err_free_dev;

 VAR_6 = FUNC_7(VAR_4, 0);
 if (VAR_6)
  goto err_unload;

 FUNC_9(VAR_4, 32);
 return VAR_6;

err_unload:
 FUNC_4(VAR_4);
err_free_dev:
 FUNC_6(VAR_4);
 return VAR_6;
}
