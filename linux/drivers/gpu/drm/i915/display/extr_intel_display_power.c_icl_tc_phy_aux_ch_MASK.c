
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i915_power_well {TYPE_2__* desc; } ;
struct drm_i915_private {int dummy; } ;
typedef enum aux_ch { ____Placeholder_aux_ch } aux_ch ;
struct TYPE_3__ {int idx; scalar_t__ is_tc_tbt; } ;
struct TYPE_4__ {TYPE_1__ hsw; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static enum aux_ch FUNC_2(struct drm_i915_private *VAR_0,
         struct i915_power_well *VAR_1)
{
 int VAR_2 = VAR_1->desc->hsw.idx;

 return VAR_1->desc->hsw.is_tc_tbt ? FUNC_1(VAR_2) :
       FUNC_0(VAR_2);
}
