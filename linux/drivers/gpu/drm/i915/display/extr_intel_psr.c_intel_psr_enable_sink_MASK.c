
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct intel_dp {int aux; } ;
struct TYPE_2__ {scalar_t__ link_standby; scalar_t__ psr2_enabled; } ;
struct drm_i915_private {TYPE_1__ psr; } ;


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
 int FUNC_0 (struct drm_i915_private*) ;
 struct drm_i915_private* FUNC_1 (struct intel_dp*) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static void FUNC_3(struct intel_dp *VAR_10)
{
 struct drm_i915_private *VAR_11 = FUNC_1(VAR_10);
 u8 VAR_12 = VAR_2;


 if (VAR_11->psr.psr2_enabled) {
  FUNC_2(&VAR_10->aux, VAR_7,
       VAR_0);
  VAR_12 |= VAR_3 | VAR_5;
 } else {
  if (VAR_11->psr.link_standby)
   VAR_12 |= VAR_6;

  if (FUNC_0(VAR_11) >= 8)
   VAR_12 |= VAR_1;
 }

 FUNC_2(&VAR_10->aux, VAR_4, VAR_12);

 FUNC_2(&VAR_10->aux, VAR_8, VAR_9);
}
