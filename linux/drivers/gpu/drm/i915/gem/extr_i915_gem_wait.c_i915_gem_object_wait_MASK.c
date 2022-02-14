
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int resv; } ;
struct drm_i915_gem_object {TYPE_1__ base; } ;


 int FUNC_0 (int) ;
 long FUNC_1 (int ,unsigned int,long) ;
 int FUNC_2 () ;

int
FUNC_3(struct drm_i915_gem_object *VAR_0,
       unsigned int VAR_1,
       long VAR_2)
{
 FUNC_2();
 FUNC_0(VAR_2 < 0);

 VAR_2 = FUNC_1(VAR_0->base.resv,
         VAR_1, VAR_2);
 return VAR_2 < 0 ? VAR_2 : 0;
}
