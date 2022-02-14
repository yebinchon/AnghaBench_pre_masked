
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


 int FUNC_0 (char*,int) ;
 int VAR_0 ;






 int VAR_1 ;
 int FUNC_1 (struct pci_dev*,int ,int*) ;

__attribute__((used)) static void FUNC_2(struct drm_i915_private *VAR_2,
     struct intel_cdclk_state *VAR_3)
{
 struct pci_dev *VAR_4 = VAR_2->drm.pdev;
 u16 VAR_5 = 0;

 FUNC_1(VAR_4, VAR_0, &VAR_5);

 switch (VAR_5 & VAR_1) {
 case 130:
  VAR_3->cdclk = 266667;
  break;
 case 129:
  VAR_3->cdclk = 333333;
  break;
 case 128:
  VAR_3->cdclk = 444444;
  break;
 case 131:
  VAR_3->cdclk = 200000;
  break;
 default:
  FUNC_0("Unknown pnv display core clock 0x%04x\n", VAR_5);

 case 133:
  VAR_3->cdclk = 133333;
  break;
 case 132:
  VAR_3->cdclk = 166667;
  break;
 }
}
