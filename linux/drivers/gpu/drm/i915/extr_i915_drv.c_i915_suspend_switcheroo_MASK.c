
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ switch_power_state; } ;
struct drm_i915_private {TYPE_3__ drm; } ;
struct TYPE_5__ {scalar_t__ event; } ;
typedef TYPE_1__ pm_message_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int) ;

__attribute__((used)) static int
FUNC_3(struct drm_i915_private *VAR_4, pm_message_t VAR_5)
{
 int VAR_6;

 if (FUNC_0(VAR_5.event != VAR_3 &&
    VAR_5.event != VAR_2))
  return -VAR_1;

 if (VAR_4->drm.switch_power_state == VAR_0)
  return 0;

 VAR_6 = FUNC_1(&VAR_4->drm);
 if (VAR_6)
  return VAR_6;

 return FUNC_2(&VAR_4->drm, 0);
}
