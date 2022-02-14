
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
struct pci_dev {int dummy; } ;
struct drm_psb_private {scalar_t__ platform_rev_id; TYPE_2__* dev; } ;
struct TYPE_4__ {int dev; TYPE_1__* pdev; } ;
struct TYPE_3__ {int bus; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (int ) ;
 struct pci_dev* FUNC_5 (int,int ,int ) ;
 int FUNC_6 (struct pci_dev*,int,scalar_t__*) ;

__attribute__((used)) static void FUNC_7(struct drm_psb_private *VAR_0)
{
 uint32_t VAR_1 = 0;
 int VAR_2 = FUNC_4(VAR_0->dev->pdev->bus);
 struct pci_dev *VAR_3 =
  FUNC_5(VAR_2, 0, FUNC_0(2, 0));

 if (VAR_3 == ((void*)0)) {
  FUNC_1(1);
  return;
 }
 FUNC_6(VAR_3, 0x08, &VAR_1);
 VAR_0->platform_rev_id = (uint8_t) VAR_1;
 FUNC_3(VAR_3);
 FUNC_2(VAR_0->dev->dev, "platform_rev_id is %x\n",
     VAR_0->platform_rev_id);
}
