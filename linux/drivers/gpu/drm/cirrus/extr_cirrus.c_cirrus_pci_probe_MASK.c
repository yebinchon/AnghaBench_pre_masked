
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct TYPE_2__ {int preferred_depth; } ;
struct drm_device {TYPE_1__ mode_config; struct pci_dev* pdev; struct cirrus_device* dev_private; } ;
struct cirrus_device {int * vram; int * mmio; struct drm_device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cirrus_device*) ;
 int VAR_3 ;
 int FUNC_1 (struct cirrus_device*) ;
 int FUNC_2 (struct cirrus_device*) ;
 int FUNC_3 (struct drm_device*,int *,int *) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*,int ) ;
 int FUNC_6 (struct pci_dev*,int ,char*) ;
 int FUNC_7 (struct drm_device*,int ) ;
 int FUNC_8 (struct drm_device*) ;
 int FUNC_9 (struct drm_device*) ;
 void* FUNC_10 (int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct cirrus_device*) ;
 struct cirrus_device* FUNC_13 (int,int ) ;
 int FUNC_14 (struct pci_dev*) ;
 int FUNC_15 (struct pci_dev*) ;
 int FUNC_16 (struct pci_dev*,int ) ;
 int FUNC_17 (struct pci_dev*,int) ;
 int FUNC_18 (struct pci_dev*,int) ;
 int FUNC_19 (struct pci_dev*,struct drm_device*) ;

__attribute__((used)) static int FUNC_20(struct pci_dev *VAR_4,
       const struct pci_device_id *VAR_5)
{
 struct drm_device *VAR_6;
 struct cirrus_device *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_6(VAR_4, 0, "cirrusdrmfb");
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_14(VAR_4);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_16(VAR_4, VAR_0);
 if (VAR_8)
  return VAR_8;

 VAR_8 = -VAR_1;
 VAR_7 = FUNC_13(sizeof(*VAR_7), VAR_2);
 if (VAR_7 == ((void*)0))
  goto err_pci_release;

 VAR_6 = &VAR_7->dev;
 VAR_8 = FUNC_3(VAR_6, &VAR_3, &VAR_4->dev);
 if (VAR_8)
  goto err_free_cirrus;
 VAR_6->dev_private = VAR_7;

 VAR_8 = -VAR_1;
 VAR_7->vram = FUNC_10(FUNC_18(VAR_4, 0),
          FUNC_17(VAR_4, 0));
 if (VAR_7->vram == ((void*)0))
  goto err_dev_put;

 VAR_7->mmio = FUNC_10(FUNC_18(VAR_4, 1),
          FUNC_17(VAR_4, 1));
 if (VAR_7->mmio == ((void*)0))
  goto err_unmap_vram;

 FUNC_1(VAR_7);

 VAR_8 = FUNC_0(VAR_7);
 if (VAR_8 < 0)
  goto err_cleanup;

 VAR_8 = FUNC_2(VAR_7);
 if (VAR_8 < 0)
  goto err_cleanup;

 FUNC_9(VAR_6);

 VAR_6->pdev = VAR_4;
 FUNC_19(VAR_4, VAR_6);
 VAR_8 = FUNC_5(VAR_6, 0);
 if (VAR_8)
  goto err_cleanup;

 FUNC_7(VAR_6, VAR_6->mode_config.preferred_depth);
 return 0;

err_cleanup:
 FUNC_8(VAR_6);
 FUNC_11(VAR_7->mmio);
err_unmap_vram:
 FUNC_11(VAR_7->vram);
err_dev_put:
 FUNC_4(VAR_6);
err_free_cirrus:
 FUNC_12(VAR_7);
err_pci_release:
 FUNC_15(VAR_4);
 return VAR_8;
}
