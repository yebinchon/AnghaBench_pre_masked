
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mutex; } ;
struct drm_i915_private {TYPE_1__ contexts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct drm_i915_private*,int) ;
 int FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct drm_i915_private *VAR_3, unsigned int *VAR_4)
{
 int VAR_5;

 FUNC_0(&VAR_3->contexts.mutex);







 VAR_5 = FUNC_1(VAR_3, VAR_0 | VAR_2 | VAR_1);
 if (FUNC_3(VAR_5 < 0)) {
  VAR_5 = FUNC_2(VAR_3);
  if (VAR_5 < 0)
   VAR_5 = FUNC_1(VAR_3, VAR_0);
  if (VAR_5 < 0)
   return VAR_5;
 }

 *VAR_4 = VAR_5;
 return 0;
}
