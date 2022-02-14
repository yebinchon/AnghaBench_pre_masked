
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct oaktrail_hdmi_dev {struct pci_dev* dev; int regs; int mmio_len; int mmio; } ;
struct drm_psb_private {struct oaktrail_hdmi_dev* hdmi_priv; } ;
struct drm_device {int dev; struct drm_psb_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct oaktrail_hdmi_dev*) ;
 struct oaktrail_hdmi_dev* FUNC_4 (int,int ) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 struct pci_dev* FUNC_8 (int ,int,int *) ;
 int FUNC_9 (struct pci_dev*,int ) ;
 int FUNC_10 (struct pci_dev*,int ) ;
 int FUNC_11 (struct pci_dev*,struct oaktrail_hdmi_dev*) ;

void FUNC_12(struct drm_device *VAR_2)
{
 struct drm_psb_private *VAR_3 = VAR_2->dev_private;
 struct pci_dev *VAR_4;
 struct oaktrail_hdmi_dev *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_8(VAR_1, 0x080d, ((void*)0));
 if (!VAR_4)
  return;

 VAR_5 = FUNC_4(sizeof(struct oaktrail_hdmi_dev), VAR_0);
 if (!VAR_5) {
  FUNC_0(VAR_2->dev, "failed to allocate memory\n");
  goto out;
 }


 VAR_6 = FUNC_7(VAR_4);
 if (VAR_6) {
  FUNC_0(VAR_2->dev, "failed to enable hdmi controller\n");
  goto free;
 }

 VAR_5->mmio = FUNC_10(VAR_4, 0);
 VAR_5->mmio_len = FUNC_9(VAR_4, 0);
 VAR_5->regs = FUNC_2(VAR_5->mmio, VAR_5->mmio_len);
 if (!VAR_5->regs) {
  FUNC_0(VAR_2->dev, "failed to map hdmi mmio\n");
  goto free;
 }

 VAR_5->dev = VAR_4;
 FUNC_11(VAR_4, VAR_5);


 VAR_6 = FUNC_6(VAR_5->dev);
 if (VAR_6)
  FUNC_0(VAR_2->dev, "HDMI I2C initialization failed\n");

 VAR_3->hdmi_priv = VAR_5;
 FUNC_5(VAR_2);

 FUNC_1(VAR_2->dev, "HDMI hardware present.\n");

 return;

free:
 FUNC_3(VAR_5);
out:
 return;
}
