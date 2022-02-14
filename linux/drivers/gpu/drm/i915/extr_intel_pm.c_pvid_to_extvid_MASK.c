
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int const u32 ;
struct drm_i915_private {int dummy; } ;
struct TYPE_2__ {scalar_t__ is_mobile; } ;


 TYPE_1__* FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static u32 FUNC_2(struct drm_i915_private *VAR_0, u8 VAR_1)
{
 const int VAR_2 = FUNC_1(VAR_1);
 const int VAR_3 = VAR_2 - 1125;

 if (FUNC_0(VAR_0)->is_mobile)
  return VAR_3 > 0 ? VAR_3 : 0;

 return VAR_2;
}
