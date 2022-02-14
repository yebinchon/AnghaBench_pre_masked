
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct pci_dev {int dummy; } ;
struct TYPE_2__ {struct pci_dev* pdev; } ;
struct drm_i915_private {TYPE_1__ drm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drm_i915_private*,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct pci_dev*,int ) ;
 int FUNC_4 (struct pci_dev*,int ) ;

__attribute__((used)) static void FUNC_5(struct drm_i915_private *VAR_3,
           u8 VAR_4, bool VAR_5)
{
 struct pci_dev *VAR_6 = VAR_3->drm.pdev;
 if (VAR_5) {
  FUNC_3(VAR_6, VAR_2);
  FUNC_2(FUNC_1(VAR_0), VAR_1);
  FUNC_4(VAR_6, VAR_2);
 }

 if (VAR_4)
  FUNC_0(VAR_3, VAR_4);
}
