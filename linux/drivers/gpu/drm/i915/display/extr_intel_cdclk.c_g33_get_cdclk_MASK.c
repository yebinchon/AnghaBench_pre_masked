
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct intel_cdclk_state {int vco; int cdclk; } ;
struct TYPE_2__ {struct pci_dev* pdev; } ;
struct drm_i915_private {TYPE_1__ drm; } ;


 unsigned int FUNC_0 (int const*) ;
 int FUNC_1 (int,int const) ;
 int FUNC_2 (char*,int,int) ;
 int VAR_0 ;
 int FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct pci_dev*,int ,int*) ;

__attribute__((used)) static void FUNC_5(struct drm_i915_private *VAR_1,
     struct intel_cdclk_state *VAR_2)
{
 struct pci_dev *VAR_3 = VAR_1->drm.pdev;
 static const u8 VAR_4[] = { 12, 10, 8, 7, 5, 16 };
 static const u8 VAR_5[] = { 14, 12, 10, 8, 6, 20 };
 static const u8 VAR_6[] = { 20, 14, 12, 10, 8, 24 };
 static const u8 VAR_7[] = { 20, 16, 12, 12, 8, 28 };
 const u8 *VAR_8;
 unsigned int VAR_9;
 u16 VAR_10 = 0;

 VAR_2->vco = FUNC_3(VAR_1);

 FUNC_4(VAR_3, VAR_0, &VAR_10);

 VAR_9 = (VAR_10 >> 4) & 0x7;

 if (VAR_9 >= FUNC_0(VAR_4))
  goto fail;

 switch (VAR_2->vco) {
 case 3200000:
  VAR_8 = VAR_4;
  break;
 case 4000000:
  VAR_8 = VAR_5;
  break;
 case 4800000:
  VAR_8 = VAR_6;
  break;
 case 5333333:
  VAR_8 = VAR_7;
  break;
 default:
  goto fail;
 }

 VAR_2->cdclk = FUNC_1(VAR_2->vco,
            VAR_8[VAR_9]);
 return;

fail:
 FUNC_2("Unable to determine CDCLK. HPLL VCO=%u kHz, CFGC=0x%08x\n",
    VAR_2->vco, VAR_10);
 VAR_2->cdclk = 190476;
}
