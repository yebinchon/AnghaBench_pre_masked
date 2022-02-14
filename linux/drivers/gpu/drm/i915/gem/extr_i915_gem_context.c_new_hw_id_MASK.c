
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hw_ida; int mutex; } ;
struct drm_i915_private {TYPE_1__ contexts; } ;
typedef int gfp_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct drm_i915_private*) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int *,int ,unsigned int,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline int FUNC_4(struct drm_i915_private *VAR_4, gfp_t VAR_5)
{
 unsigned int VAR_6;

 FUNC_3(&VAR_4->contexts.mutex);

 if (FUNC_0(VAR_4) >= 12)
  VAR_6 = VAR_1;
 else if (FUNC_0(VAR_4) >= 11)
  VAR_6 = VAR_0;
 else if (FUNC_1(VAR_4))




  VAR_6 = VAR_3;
 else
  VAR_6 = VAR_2;

 return FUNC_2(&VAR_4->contexts.hw_ida, 0, VAR_6, VAR_5);
}
