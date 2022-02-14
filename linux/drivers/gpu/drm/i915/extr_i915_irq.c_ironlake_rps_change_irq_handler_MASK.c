
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct intel_uncore {int dummy; } ;
struct TYPE_2__ {scalar_t__ cur_delay; scalar_t__ max_delay; scalar_t__ min_delay; } ;
struct drm_i915_private {TYPE_1__ ips; struct intel_uncore uncore; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct intel_uncore*,int ) ;
 int FUNC_1 (struct intel_uncore*,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*,scalar_t__) ;
 int VAR_6 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct drm_i915_private *VAR_7)
{
 struct intel_uncore *VAR_8 = &VAR_7->uncore;
 u32 VAR_9, VAR_10, VAR_11, VAR_12;
 u8 VAR_13;

 FUNC_3(&VAR_6);

 FUNC_1(VAR_8,
        VAR_0,
        FUNC_0(VAR_8, VAR_0));

 VAR_13 = VAR_7->ips.cur_delay;

 FUNC_1(VAR_8, VAR_0, VAR_1);
 VAR_9 = FUNC_0(VAR_8, VAR_5);
 VAR_10 = FUNC_0(VAR_8, VAR_4);
 VAR_11 = FUNC_0(VAR_8, VAR_2);
 VAR_12 = FUNC_0(VAR_8, VAR_3);


 if (VAR_9 > VAR_11) {
  if (VAR_7->ips.cur_delay != VAR_7->ips.max_delay)
   VAR_13 = VAR_7->ips.cur_delay - 1;
  if (VAR_13 < VAR_7->ips.max_delay)
   VAR_13 = VAR_7->ips.max_delay;
 } else if (VAR_10 < VAR_12) {
  if (VAR_7->ips.cur_delay != VAR_7->ips.min_delay)
   VAR_13 = VAR_7->ips.cur_delay + 1;
  if (VAR_13 > VAR_7->ips.min_delay)
   VAR_13 = VAR_7->ips.min_delay;
 }

 if (FUNC_2(VAR_7, VAR_13))
  VAR_7->ips.cur_delay = VAR_13;

 FUNC_4(&VAR_6);

 return;
}
