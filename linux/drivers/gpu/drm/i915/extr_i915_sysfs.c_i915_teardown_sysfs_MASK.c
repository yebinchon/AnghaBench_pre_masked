
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* primary; } ;
struct drm_i915_private {TYPE_2__ drm; } ;
struct device {int kobj; } ;
struct TYPE_3__ {struct device* kdev; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct device*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int *) ;
 int VAR_5 ;

void FUNC_6(struct drm_i915_private *VAR_6)
{
 struct device *VAR_7 = VAR_6->drm.primary->kdev;

 FUNC_3(VAR_7);

 if (FUNC_1(VAR_6) || FUNC_0(VAR_6))
  FUNC_4(&VAR_7->kobj, VAR_5);
 else
  FUNC_4(&VAR_7->kobj, VAR_2);
 FUNC_2(VAR_7, &VAR_1);
 FUNC_2(VAR_7, &VAR_0);




}
