
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct intel_uncore {int dummy; } ;
struct TYPE_2__ {int fmax; int fstart; int max_delay; int min_delay; int cur_delay; int last_count1; int last_count2; int last_time2; int last_time1; } ;
struct drm_i915_private {TYPE_1__ ips; struct intel_uncore uncore; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int,int) ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
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
 int FUNC_3 (int) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_4 (struct intel_uncore*,int ) ;
 int FUNC_5 (struct intel_uncore*,int ) ;
 int FUNC_6 (struct intel_uncore*,int ,int) ;
 int FUNC_7 (struct intel_uncore*,int ,int) ;
 int FUNC_8 (struct drm_i915_private*,int) ;
 int VAR_28 ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int VAR_29 ;
 int FUNC_11 (int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int,int) ;

__attribute__((used)) static void FUNC_15(struct drm_i915_private *VAR_30)
{
 struct intel_uncore *VAR_31 = &VAR_30->uncore;
 u32 VAR_32;
 u8 VAR_33, VAR_34, VAR_35, VAR_36;

 FUNC_12(&VAR_29);

 VAR_32 = FUNC_5(VAR_31, VAR_10);


 FUNC_7(VAR_31, VAR_18, FUNC_2(VAR_18) | VAR_4);
 FUNC_7(VAR_31, VAR_25, FUNC_2(VAR_25) | VAR_26);


 FUNC_6(VAR_31, VAR_24, 100000);
 FUNC_6(VAR_31, VAR_23, 100000);


 FUNC_6(VAR_31, VAR_21, 90000);
 FUNC_6(VAR_31, VAR_22, 80000);

 FUNC_6(VAR_31, VAR_6, 1);


 VAR_33 = (VAR_32 & VAR_11) >> VAR_12;
 VAR_34 = (VAR_32 & VAR_13);
 VAR_35 = (VAR_32 & VAR_14) >>
  VAR_15;

 VAR_36 = (FUNC_5(VAR_31, FUNC_3(VAR_35)) &
    VAR_19) >> VAR_20;

 VAR_30->ips.fmax = VAR_33;
 VAR_30->ips.fstart = VAR_35;

 VAR_30->ips.max_delay = VAR_35;
 VAR_30->ips.min_delay = VAR_34;
 VAR_30->ips.cur_delay = VAR_35;

 FUNC_0("fmax: %d, fmin: %d, fstart: %d\n",
    VAR_33, VAR_34, VAR_35);

 FUNC_6(VAR_31,
      VAR_7,
      VAR_8 | VAR_9);





 FUNC_6(VAR_31, VAR_27, VAR_36);
 FUNC_4(VAR_31, VAR_27);

 VAR_32 |= VAR_16;
 FUNC_6(VAR_31, VAR_10, VAR_32);

 if (FUNC_14((FUNC_5(VAR_31, VAR_17) &
        VAR_5) == 0, 10))
  FUNC_1("stuck trying to change perf mode\n");
 FUNC_11(1);

 FUNC_8(VAR_30, VAR_35);

 VAR_30->ips.last_count1 =
  FUNC_5(VAR_31, VAR_2) +
  FUNC_5(VAR_31, VAR_1) +
  FUNC_5(VAR_31, VAR_0);
 VAR_30->ips.last_time1 = FUNC_9(VAR_28);
 VAR_30->ips.last_count2 = FUNC_5(VAR_31, VAR_3);
 VAR_30->ips.last_time2 = FUNC_10();

 FUNC_13(&VAR_29);
}
