
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct drm_i915_private {int dummy; } ;
struct TYPE_2__ {unsigned long long cs_timestamp_frequency_khz; } ;


 TYPE_1__* FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (unsigned long long,unsigned long long) ;

__attribute__((used)) static u64 FUNC_2(struct drm_i915_private *VAR_0, int VAR_1)
{
 return FUNC_1(1000000000ULL * (2ULL << VAR_1),
    1000ULL * FUNC_0(VAR_0)->cs_timestamp_frequency_khz);
}
