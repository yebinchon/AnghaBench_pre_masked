
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_rps {int max_freq; int rp0_freq; int efficient_freq; int rp1_freq; int min_freq; } ;
struct TYPE_2__ {struct intel_rps rps; } ;
struct drm_i915_private {int mem_freq; TYPE_1__ gt_pm; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (struct drm_i915_private*) ;
 int FUNC_6 (struct drm_i915_private*) ;
 int FUNC_7 (struct drm_i915_private*) ;
 int FUNC_8 (struct drm_i915_private*,int) ;
 int FUNC_9 (struct drm_i915_private*,int ) ;
 int FUNC_10 (struct drm_i915_private*) ;
 int FUNC_11 (struct drm_i915_private*,int) ;
 int FUNC_12 (struct drm_i915_private*,int) ;

__attribute__((used)) static void FUNC_13(struct drm_i915_private *VAR_4)
{
 struct intel_rps *VAR_5 = &VAR_4->gt_pm.rps;
 u32 VAR_6;

 FUNC_7(VAR_4);

 FUNC_11(VAR_4,
   FUNC_0(VAR_3) |
   FUNC_0(VAR_2) |
   FUNC_0(VAR_1));

 FUNC_10(VAR_4);

 VAR_6 = FUNC_9(VAR_4, VAR_0);

 switch ((VAR_6 >> 2) & 0x7) {
 case 3:
  VAR_4->mem_freq = 2000;
  break;
 default:
  VAR_4->mem_freq = 1600;
  break;
 }
 FUNC_1("DDR speed: %d MHz\n", VAR_4->mem_freq);

 VAR_5->max_freq = FUNC_4(VAR_4);
 VAR_5->rp0_freq = VAR_5->max_freq;
 FUNC_1("max GPU freq: %d MHz (%u)\n",
    FUNC_8(VAR_4, VAR_5->max_freq),
    VAR_5->max_freq);

 VAR_5->efficient_freq = FUNC_6(VAR_4);
 FUNC_1("RPe GPU freq: %d MHz (%u)\n",
    FUNC_8(VAR_4, VAR_5->efficient_freq),
    VAR_5->efficient_freq);

 VAR_5->rp1_freq = FUNC_3(VAR_4);
 FUNC_1("RP1(Guar) GPU freq: %d MHz (%u)\n",
    FUNC_8(VAR_4, VAR_5->rp1_freq),
    VAR_5->rp1_freq);

 VAR_5->min_freq = FUNC_5(VAR_4);
 FUNC_1("min GPU freq: %d MHz (%u)\n",
    FUNC_8(VAR_4, VAR_5->min_freq),
    VAR_5->min_freq);

 FUNC_12(VAR_4,
   FUNC_0(VAR_3) |
   FUNC_0(VAR_2) |
   FUNC_0(VAR_1));

 FUNC_2((VAR_5->max_freq | VAR_5->efficient_freq | VAR_5->rp1_freq |
     VAR_5->min_freq) & 1,
    "Odd GPU freq values\n");
}
