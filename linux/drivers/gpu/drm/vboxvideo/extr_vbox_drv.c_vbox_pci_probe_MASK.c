
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct vbox_private* dev_private; struct pci_dev* pdev; } ;
struct vbox_private {TYPE_1__ ddev; int num_crtcs; int fb_helper; int hw_mutex; } ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int *,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int *,int *,int,int ) ;
 int FUNC_4 (struct vbox_private*) ;
 struct vbox_private* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*,struct vbox_private*) ;
 int FUNC_10 (int ) ;
 int VAR_5 ;
 int FUNC_11 (struct vbox_private*) ;
 int FUNC_12 (struct vbox_private*) ;
 int FUNC_13 (struct vbox_private*) ;
 int FUNC_14 (struct vbox_private*) ;
 int FUNC_15 (struct vbox_private*) ;
 int FUNC_16 (struct vbox_private*) ;
 int FUNC_17 (struct vbox_private*) ;
 int FUNC_18 (struct vbox_private*) ;
 int FUNC_19 (struct vbox_private*) ;

__attribute__((used)) static int FUNC_20(struct pci_dev *VAR_6, const struct pci_device_id *VAR_7)
{
 struct vbox_private *VAR_8;
 int VAR_9 = 0;

 if (!FUNC_10(VAR_3))
  return -VAR_0;

 VAR_8 = FUNC_5(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_9 = FUNC_0(&VAR_8->ddev, &VAR_4, &VAR_6->dev);
 if (VAR_9) {
  FUNC_4(VAR_8);
  return VAR_9;
 }

 VAR_8->ddev.pdev = VAR_6;
 VAR_8->ddev.dev_private = VAR_8;
 FUNC_9(VAR_6, VAR_8);
 FUNC_6(&VAR_8->hw_mutex);

 VAR_9 = FUNC_8(VAR_6);
 if (VAR_9)
  goto err_dev_put;

 VAR_9 = FUNC_13(VAR_8);
 if (VAR_9)
  goto err_pci_disable;

 VAR_9 = FUNC_17(VAR_8);
 if (VAR_9)
  goto err_hw_fini;

 VAR_9 = FUNC_19(VAR_8);
 if (VAR_9)
  goto err_mm_fini;

 VAR_9 = FUNC_15(VAR_8);
 if (VAR_9)
  goto err_mode_fini;

 VAR_9 = FUNC_3(&VAR_8->ddev, &VAR_8->fb_helper,
     &VAR_5, 32,
     VAR_8->num_crtcs);
 if (VAR_9)
  goto err_irq_fini;

 VAR_9 = FUNC_2(&VAR_8->ddev, 0);
 if (VAR_9)
  goto err_fbdev_fini;

 return 0;

err_fbdev_fini:
 FUNC_11(VAR_8);
err_irq_fini:
 FUNC_14(VAR_8);
err_mode_fini:
 FUNC_18(VAR_8);
err_mm_fini:
 FUNC_16(VAR_8);
err_hw_fini:
 FUNC_12(VAR_8);
err_pci_disable:
 FUNC_7(VAR_6);
err_dev_put:
 FUNC_1(&VAR_8->ddev);
 return VAR_9;
}
