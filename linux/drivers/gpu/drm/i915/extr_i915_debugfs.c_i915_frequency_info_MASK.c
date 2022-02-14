
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct seq_file {int private; } ;
struct intel_uncore {int dummy; } ;
struct TYPE_5__ {int up_threshold; int down_threshold; } ;
struct intel_rps {int cur_freq; int max_freq; int min_freq; int idle_freq; int efficient_freq; int pm_intrmsk_mbz; int boost_freq; TYPE_1__ power; } ;
struct TYPE_6__ {int cdclk; } ;
struct TYPE_7__ {TYPE_2__ hw; } ;
struct TYPE_8__ {struct intel_rps rps; } ;
struct drm_i915_private {int mem_freq; int max_cdclk_freq; int max_dotclk_freq; int runtime_pm; TYPE_3__ cdclk; struct intel_uncore uncore; TYPE_4__ gt_pm; } ;
typedef int intel_wakeref_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_32 ;
 int FUNC_4 (struct drm_i915_private*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct drm_i915_private*) ;
 scalar_t__ FUNC_7 (struct drm_i915_private*) ;
 scalar_t__ FUNC_8 (struct drm_i915_private*) ;
 scalar_t__ FUNC_9 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_10 (struct drm_i915_private*) ;
 scalar_t__ FUNC_11 (struct drm_i915_private*) ;
 scalar_t__ FUNC_12 (struct drm_i915_private*) ;
 scalar_t__ FUNC_13 (struct drm_i915_private*) ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int FUNC_14 (struct drm_i915_private*,int) ;
 int FUNC_15 (struct drm_i915_private*,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int ) ;
 int FUNC_18 (struct intel_uncore*,int ) ;
 int FUNC_19 (struct intel_uncore*,int ) ;
 int FUNC_20 (struct intel_uncore*,int ) ;
 struct drm_i915_private* FUNC_21 (int ) ;
 int FUNC_22 (struct seq_file*,char*,int,...) ;
 int FUNC_23 (struct seq_file*,char*) ;
 int FUNC_24 (struct drm_i915_private*) ;
 int FUNC_25 (struct drm_i915_private*) ;
 int FUNC_26 (struct drm_i915_private*,int ) ;
 int FUNC_27 (int) ;

__attribute__((used)) static int FUNC_28(struct seq_file *VAR_40, void *VAR_41)
{
 struct drm_i915_private *VAR_42 = FUNC_21(VAR_40->private);
 struct intel_uncore *VAR_43 = &VAR_42->uncore;
 struct intel_rps *VAR_44 = &VAR_42->gt_pm.rps;
 intel_wakeref_t VAR_45;
 int VAR_46 = 0;

 VAR_45 = FUNC_16(&VAR_42->runtime_pm);

 if (FUNC_9(VAR_42, 5)) {
  u16 VAR_47 = FUNC_20(VAR_43, VAR_38);
  u16 VAR_48 = FUNC_20(VAR_43, VAR_33);

  FUNC_22(VAR_40, "Requested P-state: %d\n", (VAR_47 >> 8) & 0xf);
  FUNC_22(VAR_40, "Requested VID: %d\n", VAR_47 & 0x3f);
  FUNC_22(VAR_40, "Current VID: %d\n", (VAR_48 & VAR_36) >>
      VAR_37);
  FUNC_22(VAR_40, "Current P-state: %d\n",
      (VAR_48 & VAR_34) >> VAR_35);
 } else if (FUNC_13(VAR_42) || FUNC_8(VAR_42)) {
  u32 VAR_49, VAR_50;

  VAR_49 = FUNC_5(VAR_16);
  FUNC_22(VAR_40, "Video Turbo Mode: %s\n",
      FUNC_27(VAR_49 & VAR_25));
  FUNC_22(VAR_40, "HW control enabled: %s\n",
      FUNC_27(VAR_49 & VAR_22));
  FUNC_22(VAR_40, "SW control enabled: %s\n",
      FUNC_27((VAR_49 & VAR_23) ==
      VAR_24));

  FUNC_24(VAR_42);
  VAR_50 = FUNC_26(VAR_42, VAR_39);
  FUNC_25(VAR_42);

  FUNC_22(VAR_40, "PUNIT_REG_GPU_FREQ_STS: 0x%08x\n", VAR_50);
  FUNC_22(VAR_40, "DDR freq: %d MHz\n", VAR_42->mem_freq);

  FUNC_22(VAR_40, "actual GPU freq: %d MHz\n",
      FUNC_15(VAR_42, (VAR_50 >> 8) & 0xff));

  FUNC_22(VAR_40, "current GPU freq: %d MHz\n",
      FUNC_15(VAR_42, VAR_44->cur_freq));

  FUNC_22(VAR_40, "max GPU freq: %d MHz\n",
      FUNC_15(VAR_42, VAR_44->max_freq));

  FUNC_22(VAR_40, "min GPU freq: %d MHz\n",
      FUNC_15(VAR_42, VAR_44->min_freq));

  FUNC_22(VAR_40, "idle GPU freq: %d MHz\n",
      FUNC_15(VAR_42, VAR_44->idle_freq));

  FUNC_22(VAR_40,
      "efficient (RPe) frequency: %d MHz\n",
      FUNC_15(VAR_42, VAR_44->efficient_freq));
 } else if (FUNC_6(VAR_42) >= 6) {
  u32 VAR_51;
  u32 VAR_52;
  u32 VAR_53;
  u32 VAR_54, VAR_55, VAR_56;
  u32 VAR_57, VAR_58, VAR_59;
  u32 VAR_60, VAR_61, VAR_62;
  u32 VAR_63, VAR_64, VAR_65;
  u32 VAR_66, VAR_67, VAR_68, VAR_69, VAR_70;
  int VAR_71;

  VAR_51 = FUNC_5(VAR_29);
  if (FUNC_11(VAR_42)) {
   VAR_53 = FUNC_5(VAR_1);
   VAR_52 = FUNC_5(VAR_0);
  } else {
   VAR_53 = FUNC_5(VAR_28);
   VAR_52 = FUNC_5(VAR_8);
  }


  FUNC_18(&VAR_42->uncore, VAR_2);

  VAR_59 = FUNC_5(VAR_14);
  if (FUNC_6(VAR_42) >= 9)
   VAR_59 >>= 23;
  else {
   VAR_59 &= ~VAR_31;
   if (FUNC_12(VAR_42) || FUNC_7(VAR_42))
    VAR_59 >>= 24;
   else
    VAR_59 >>= 25;
  }
  VAR_59 = FUNC_15(VAR_42, VAR_59);

  VAR_54 = FUNC_5(VAR_16);
  VAR_55 = FUNC_5(VAR_30);
  VAR_56 = FUNC_5(VAR_21);

  VAR_57 = FUNC_5(VAR_15);
  VAR_60 = FUNC_5(VAR_20) & VAR_7;
  VAR_61 = FUNC_5(VAR_19) & VAR_5;
  VAR_62 = FUNC_5(VAR_27) & VAR_5;
  VAR_63 = FUNC_5(VAR_18) & VAR_6;
  VAR_64 = FUNC_5(VAR_17) & VAR_5;
  VAR_65 = FUNC_5(VAR_26) & VAR_5;
  VAR_58 = FUNC_15(VAR_42,
          FUNC_14(VAR_42, VAR_57));

  FUNC_19(&VAR_42->uncore, VAR_2);

  if (FUNC_6(VAR_42) >= 11) {
   VAR_66 = FUNC_5(VAR_3);
   VAR_67 = FUNC_5(VAR_4);




   VAR_68 = 0;
   VAR_69 = 0;
  } else if (FUNC_6(VAR_42) >= 8) {
   VAR_66 = FUNC_5(FUNC_0(2));
   VAR_67 = FUNC_5(FUNC_2(2));
   VAR_68 = FUNC_5(FUNC_3(2));
   VAR_69 = FUNC_5(FUNC_1(2));
  } else {
   VAR_66 = FUNC_5(VAR_9);
   VAR_67 = FUNC_5(VAR_11);
   VAR_68 = FUNC_5(VAR_13);
   VAR_69 = FUNC_5(VAR_10);
  }
  VAR_70 = FUNC_5(VAR_12);

  FUNC_22(VAR_40, "Video Turbo Mode: %s\n",
      FUNC_27(VAR_54 & VAR_25));
  FUNC_22(VAR_40, "HW control enabled: %s\n",
      FUNC_27(VAR_54 & VAR_22));
  FUNC_22(VAR_40, "SW control enabled: %s\n",
      FUNC_27((VAR_54 & VAR_23) ==
      VAR_24));

  FUNC_22(VAR_40, "PM IER=0x%08x IMR=0x%08x, MASK=0x%08x\n",
      VAR_66, VAR_67, VAR_70);
  if (FUNC_6(VAR_42) <= 10)
   FUNC_22(VAR_40, "PM ISR=0x%08x IIR=0x%08x\n",
       VAR_68, VAR_69);
  FUNC_22(VAR_40, "pm_intrmsk_mbz: 0x%08x\n",
      VAR_44->pm_intrmsk_mbz);
  FUNC_22(VAR_40, "GT_PERF_STATUS: 0x%08x\n", VAR_52);
  FUNC_22(VAR_40, "Render p-state ratio: %d\n",
      (VAR_52 & (FUNC_6(VAR_42) >= 9 ? 0x1ff00 : 0xff00)) >> 8);
  FUNC_22(VAR_40, "Render p-state VID: %d\n",
      VAR_52 & 0xff);
  FUNC_22(VAR_40, "Render p-state limit: %d\n",
      VAR_51 & 0xff);
  FUNC_22(VAR_40, "RPSTAT1: 0x%08x\n", VAR_57);
  FUNC_22(VAR_40, "RPMODECTL: 0x%08x\n", VAR_54);
  FUNC_22(VAR_40, "RPINCLIMIT: 0x%08x\n", VAR_55);
  FUNC_22(VAR_40, "RPDECLIMIT: 0x%08x\n", VAR_56);
  FUNC_22(VAR_40, "RPNSWREQ: %dMHz\n", VAR_59);
  FUNC_22(VAR_40, "CAGF: %dMHz\n", VAR_58);
  FUNC_22(VAR_40, "RP CUR UP EI: %d (%dus)\n",
      VAR_60, FUNC_4(VAR_42, VAR_60));
  FUNC_22(VAR_40, "RP CUR UP: %d (%dus)\n",
      VAR_61, FUNC_4(VAR_42, VAR_61));
  FUNC_22(VAR_40, "RP PREV UP: %d (%dus)\n",
      VAR_62, FUNC_4(VAR_42, VAR_62));
  FUNC_22(VAR_40, "Up threshold: %d%%\n",
      VAR_44->power.up_threshold);

  FUNC_22(VAR_40, "RP CUR DOWN EI: %d (%dus)\n",
      VAR_63, FUNC_4(VAR_42, VAR_63));
  FUNC_22(VAR_40, "RP CUR DOWN: %d (%dus)\n",
      VAR_64, FUNC_4(VAR_42, VAR_64));
  FUNC_22(VAR_40, "RP PREV DOWN: %d (%dus)\n",
      VAR_65, FUNC_4(VAR_42, VAR_65));
  FUNC_22(VAR_40, "Down threshold: %d%%\n",
      VAR_44->power.down_threshold);

  VAR_71 = (FUNC_11(VAR_42) ? VAR_53 >> 0 :
       VAR_53 >> 16) & 0xff;
  VAR_71 *= (FUNC_10(VAR_42) ||
        FUNC_6(VAR_42) >= 10 ? VAR_32 : 1);
  FUNC_22(VAR_40, "Lowest (RPN) frequency: %dMHz\n",
      FUNC_15(VAR_42, VAR_71));

  VAR_71 = (VAR_53 & 0xff00) >> 8;
  VAR_71 *= (FUNC_10(VAR_42) ||
        FUNC_6(VAR_42) >= 10 ? VAR_32 : 1);
  FUNC_22(VAR_40, "Nominal (RP1) frequency: %dMHz\n",
      FUNC_15(VAR_42, VAR_71));

  VAR_71 = (FUNC_11(VAR_42) ? VAR_53 >> 16 :
       VAR_53 >> 0) & 0xff;
  VAR_71 *= (FUNC_10(VAR_42) ||
        FUNC_6(VAR_42) >= 10 ? VAR_32 : 1);
  FUNC_22(VAR_40, "Max non-overclocked (RP0) frequency: %dMHz\n",
      FUNC_15(VAR_42, VAR_71));
  FUNC_22(VAR_40, "Max overclocked frequency: %dMHz\n",
      FUNC_15(VAR_42, VAR_44->max_freq));

  FUNC_22(VAR_40, "Current freq: %d MHz\n",
      FUNC_15(VAR_42, VAR_44->cur_freq));
  FUNC_22(VAR_40, "Actual freq: %d MHz\n", VAR_58);
  FUNC_22(VAR_40, "Idle freq: %d MHz\n",
      FUNC_15(VAR_42, VAR_44->idle_freq));
  FUNC_22(VAR_40, "Min freq: %d MHz\n",
      FUNC_15(VAR_42, VAR_44->min_freq));
  FUNC_22(VAR_40, "Boost freq: %d MHz\n",
      FUNC_15(VAR_42, VAR_44->boost_freq));
  FUNC_22(VAR_40, "Max freq: %d MHz\n",
      FUNC_15(VAR_42, VAR_44->max_freq));
  FUNC_22(VAR_40,
      "efficient (RPe) frequency: %d MHz\n",
      FUNC_15(VAR_42, VAR_44->efficient_freq));
 } else {
  FUNC_23(VAR_40, "no P-state info available\n");
 }

 FUNC_22(VAR_40, "Current CD clock frequency: %d kHz\n", VAR_42->cdclk.hw.cdclk);
 FUNC_22(VAR_40, "Max CD clock frequency: %d kHz\n", VAR_42->max_cdclk_freq);
 FUNC_22(VAR_40, "Max pixel clock frequency: %d kHz\n", VAR_42->max_dotclk_freq);

 FUNC_17(&VAR_42->runtime_pm, VAR_45);
 return VAR_46;
}
