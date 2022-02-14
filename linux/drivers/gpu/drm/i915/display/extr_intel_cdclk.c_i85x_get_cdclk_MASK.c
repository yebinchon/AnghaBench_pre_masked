
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {int revision; int bus; } ;
struct intel_cdclk_state {int cdclk; } ;
struct TYPE_2__ {struct pci_dev* pdev; } ;
struct drm_i915_private {TYPE_1__ drm; } ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int ,int*) ;

__attribute__((used)) static void FUNC_2(struct drm_i915_private *VAR_2,
      struct intel_cdclk_state *VAR_3)
{
 struct pci_dev *VAR_4 = VAR_2->drm.pdev;
 u16 VAR_5 = 0;






 if (VAR_4->revision == 0x1) {
  VAR_3->cdclk = 133333;
  return;
 }

 FUNC_1(VAR_4->bus,
     FUNC_0(0, 3), VAR_1, &VAR_5);




 switch (VAR_5 & VAR_0) {
 case 133:
 case 132:
 case 134:
  VAR_3->cdclk = 200000;
  break;
 case 129:
  VAR_3->cdclk = 250000;
  break;
 case 135:
  VAR_3->cdclk = 133333;
  break;
 case 131:
 case 130:
 case 128:
  VAR_3->cdclk = 266667;
  break;
 }
}
