
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct pci_dev {int dummy; } ;
struct drm_psb_private {int iLVDS_enable; int is_lvds_on; int is_mipi_on; int video_device_fuse; int fuse_reg_value; int core_freq; } ;
struct drm_device {int dev; TYPE_1__* pdev; struct drm_psb_private* dev_private; } ;
struct TYPE_2__ {int bus; } ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (int ) ;
 struct pci_dev* FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (struct pci_dev*,int,int*) ;
 int FUNC_9 (struct pci_dev*,int,int ) ;

__attribute__((used)) static void FUNC_10(struct drm_device *VAR_5)
{
 struct drm_psb_private *VAR_6 = VAR_5->dev_private;
 struct pci_dev *VAR_7 =
  FUNC_7(FUNC_6(VAR_5->pdev->bus),
         0, 0);
 uint32_t VAR_8 = 0;
 uint32_t VAR_9 = 0;
 if (VAR_7 == ((void*)0)) {
  FUNC_2(1);
  return;
 }


 FUNC_9(VAR_7, 0xD0, 0xD0810600);
 FUNC_8(VAR_7, 0xD4, &VAR_8);


 if (FUNC_1(VAR_5))
  VAR_6->iLVDS_enable = VAR_8 & (1 << 11);

 FUNC_0("internal display is %s\n",
   VAR_6->iLVDS_enable ? "LVDS display" : "MIPI display");


  if (VAR_6->iLVDS_enable) {
  VAR_6->is_lvds_on = 1;
  VAR_6->is_mipi_on = 0;
 } else {
  VAR_6->is_mipi_on = 1;
  VAR_6->is_lvds_on = 0;
 }

 VAR_6->video_device_fuse = VAR_8;

 FUNC_9(VAR_7, 0xD0, 0xD0810900);
 FUNC_8(VAR_7, 0xD4, &VAR_8);

 FUNC_3(VAR_5->dev, "SKU values is 0x%x.\n", VAR_8);
 VAR_9 = (VAR_8 & 0x7000) >> 12;

 VAR_6->fuse_reg_value = VAR_8;

 switch (VAR_9) {
 case 0:
  VAR_6->core_freq = 200;
  break;
 case 1:
  VAR_6->core_freq = 100;
  break;
 case 2:
  VAR_6->core_freq = 166;
  break;
 default:
  FUNC_4(VAR_5->dev, "Invalid SKU values, SKU value = 0x%08x\n",
        VAR_9);
  VAR_6->core_freq = 0;
 }
 FUNC_3(VAR_5->dev, "LNC core clk is %dMHz.\n", VAR_6->core_freq);
 FUNC_5(VAR_7);
}
