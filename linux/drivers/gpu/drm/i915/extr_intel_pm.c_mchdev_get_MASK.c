
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ref; } ;
struct drm_i915_private {TYPE_1__ drm; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct drm_i915_private* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static struct drm_i915_private *FUNC_4(void)
{
 struct drm_i915_private *VAR_1;

 FUNC_2();
 VAR_1 = FUNC_1(VAR_0);
 if (!FUNC_0(&VAR_1->drm.ref))
  VAR_1 = ((void*)0);
 FUNC_3();

 return VAR_1;
}
