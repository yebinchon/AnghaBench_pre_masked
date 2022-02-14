
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {int dummy; } ;
struct intel_cdclk_state {int vco; int cdclk; } ;
struct TYPE_2__ {struct pci_dev* pdev; } ;
struct drm_i915_private {TYPE_1__ drm; } ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct pci_dev*,int ,int*) ;

__attribute__((used)) static void FUNC_3(struct drm_i915_private *VAR_1,
      struct intel_cdclk_state *VAR_2)
{
 struct pci_dev *VAR_3 = VAR_1->drm.pdev;
 unsigned int VAR_4;
 u16 VAR_5 = 0;

 VAR_2->vco = FUNC_1(VAR_1);

 FUNC_2(VAR_3, VAR_0, &VAR_5);

 VAR_4 = (VAR_5 >> 12) & 0x1;

 switch (VAR_2->vco) {
 case 2666667:
 case 4000000:
 case 5333333:
  VAR_2->cdclk = VAR_4 ? 333333 : 222222;
  break;
 case 3200000:
  VAR_2->cdclk = VAR_4 ? 320000 : 228571;
  break;
 default:
  FUNC_0("Unable to determine CDCLK. HPLL VCO=%u, CFGC=0x%04x\n",
     VAR_2->vco, VAR_5);
  VAR_2->cdclk = 222222;
  break;
 }
}
