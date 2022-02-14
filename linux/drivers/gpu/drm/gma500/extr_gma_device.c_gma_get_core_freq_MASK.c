
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct pci_dev {int dummy; } ;
struct drm_psb_private {int core_freq; } ;
struct drm_device {struct drm_psb_private* dev_private; TYPE_1__* pdev; } ;
struct TYPE_2__ {int bus; } ;


 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (int ) ;
 struct pci_dev* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct pci_dev*,int,int*) ;
 int FUNC_4 (struct pci_dev*,int,int) ;

void FUNC_5(struct drm_device *VAR_0)
{
 uint32_t VAR_1;
 struct pci_dev *VAR_2 =
  FUNC_2(FUNC_1(VAR_0->pdev->bus),
         0, 0);
 struct drm_psb_private *VAR_3 = VAR_0->dev_private;




 FUNC_4(VAR_2, 0xD0, 0xD0050300);
 FUNC_3(VAR_2, 0xD4, &VAR_1);
 FUNC_0(VAR_2);

 switch (VAR_1 & 0x07) {
 case 0:
  VAR_3->core_freq = 100;
  break;
 case 1:
  VAR_3->core_freq = 133;
  break;
 case 2:
  VAR_3->core_freq = 150;
  break;
 case 3:
  VAR_3->core_freq = 178;
  break;
 case 4:
  VAR_3->core_freq = 200;
  break;
 case 5:
 case 6:
 case 7:
  VAR_3->core_freq = 266;
  break;
 default:
  VAR_3->core_freq = 0;
 }
}
