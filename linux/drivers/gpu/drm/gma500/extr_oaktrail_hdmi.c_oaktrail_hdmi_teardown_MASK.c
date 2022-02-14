
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct oaktrail_hdmi_dev {int regs; struct pci_dev* dev; } ;
struct drm_psb_private {struct oaktrail_hdmi_dev* hdmi_priv; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct oaktrail_hdmi_dev*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,int *) ;

void FUNC_5(struct drm_device *VAR_0)
{
 struct drm_psb_private *VAR_1 = VAR_0->dev_private;
 struct oaktrail_hdmi_dev *VAR_2 = VAR_1->hdmi_priv;
 struct pci_dev *VAR_3;

 if (VAR_2) {
  VAR_3 = VAR_2->dev;
  FUNC_4(VAR_3, ((void*)0));
  FUNC_2(VAR_3);
  FUNC_0(VAR_2->regs);
  FUNC_1(VAR_2);
  FUNC_3(VAR_3);
 }
}
