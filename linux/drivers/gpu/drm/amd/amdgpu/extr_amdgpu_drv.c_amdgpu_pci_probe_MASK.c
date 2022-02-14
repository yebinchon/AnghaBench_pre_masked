
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {unsigned long driver_data; } ;
struct pci_dev {int dev; } ;
struct drm_device {struct pci_dev* pdev; int driver_features; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (unsigned long) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int *,char*) ;
 struct drm_device* FUNC_5 (int *,int *) ;
 int FUNC_6 (struct drm_device*) ;
 int FUNC_7 (struct drm_device*,unsigned long) ;
 int FUNC_8 (struct pci_dev*,int ,char*) ;
 int VAR_9 ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (struct pci_dev*,struct drm_device*) ;

__attribute__((used)) static int FUNC_13(struct pci_dev *VAR_10,
       const struct pci_device_id *VAR_11)
{
 struct drm_device *VAR_12;
 unsigned long VAR_13 = VAR_11->driver_data;
 int VAR_14, VAR_15 = 0;
 bool VAR_16 = 0;

 if (!VAR_8 &&
     FUNC_3(VAR_13 & VAR_0))
  VAR_16 = 1;

 if ((VAR_13 & VAR_1) && !VAR_6) {
  FUNC_0("This hardware requires experimental hardware support.\n"
    "See modparam exp_hw_support\n");
  return -VAR_4;
 }
 VAR_14 = FUNC_8(VAR_10, 0, "amdgpudrmfb");
 if (VAR_14)
  return VAR_14;

 VAR_12 = FUNC_5(&VAR_9, &VAR_10->dev);
 if (FUNC_1(VAR_12))
  return FUNC_2(VAR_12);

 if (!VAR_16)
  VAR_12->driver_features &= ~VAR_2;

 VAR_14 = FUNC_11(VAR_10);
 if (VAR_14)
  goto err_free;

 VAR_12->pdev = VAR_10;

 FUNC_12(VAR_10, VAR_12);

retry_init:
 VAR_14 = FUNC_7(VAR_12, VAR_11->driver_data);
 if (VAR_14 == -VAR_3 && ++VAR_15 <= 3) {
  FUNC_0("retry init %d\n", VAR_15);

  FUNC_9(5000);
  goto retry_init;
 } else if (VAR_14)
  goto err_pci;

 return 0;

err_pci:
 FUNC_10(VAR_10);
err_free:
 FUNC_6(VAR_12);
 return VAR_14;
}
