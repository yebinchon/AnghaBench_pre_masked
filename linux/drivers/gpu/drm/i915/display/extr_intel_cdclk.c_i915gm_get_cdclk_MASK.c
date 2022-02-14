
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {int dummy; } ;
struct intel_cdclk_state {int cdclk; } ;
struct TYPE_2__ {struct pci_dev* pdev; } ;
struct drm_i915_private {TYPE_1__ drm; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pci_dev*,int ,int*) ;

__attribute__((used)) static void FUNC_1(struct drm_i915_private *VAR_3,
        struct intel_cdclk_state *VAR_4)
{
 struct pci_dev *VAR_5 = VAR_3->drm.pdev;
 u16 VAR_6 = 0;

 FUNC_0(VAR_5, VAR_0, &VAR_6);

 if (VAR_6 & VAR_2) {
  VAR_4->cdclk = 133333;
  return;
 }

 switch (VAR_6 & VAR_1) {
 case 128:
  VAR_4->cdclk = 333333;
  break;
 default:
 case 129:
  VAR_4->cdclk = 190000;
  break;
 }
}
