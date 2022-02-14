
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct intel_uncore {int dummy; } ;
struct TYPE_2__ {int fstart; } ;
struct drm_i915_private {TYPE_1__ ips; struct intel_uncore uncore; } ;


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
 int FUNC_0 (struct intel_uncore*,int ) ;
 int FUNC_1 (struct intel_uncore*,int ) ;
 int FUNC_2 (struct intel_uncore*,int ,int) ;
 int FUNC_3 (struct drm_i915_private*,int ) ;
 int VAR_10 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct drm_i915_private *VAR_11)
{
 struct intel_uncore *VAR_12 = &VAR_11->uncore;
 u16 VAR_13;

 FUNC_5(&VAR_10);

 VAR_13 = FUNC_1(VAR_12, VAR_9);


 FUNC_2(VAR_12,
      VAR_5,
      FUNC_0(VAR_12, VAR_5) &
      ~VAR_8);
 FUNC_2(VAR_12, VAR_6, VAR_7);
 FUNC_2(VAR_12,
      VAR_0,
      FUNC_0(VAR_12, VAR_0) & ~VAR_3);
 FUNC_2(VAR_12, VAR_1, VAR_3);
 FUNC_2(VAR_12,
      VAR_2,
      FUNC_0(VAR_12, VAR_2) | VAR_3);


 FUNC_3(VAR_11, VAR_11->ips.fstart);
 FUNC_4(1);
 VAR_13 |= VAR_4;
 FUNC_2(VAR_12, VAR_9, VAR_13);
 FUNC_4(1);

 FUNC_6(&VAR_10);
}
