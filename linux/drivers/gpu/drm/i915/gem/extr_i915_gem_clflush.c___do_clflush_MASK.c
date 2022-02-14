
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pages; } ;
struct drm_i915_gem_object {int frontbuffer; TYPE_1__ mm; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct drm_i915_gem_object*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct drm_i915_gem_object *VAR_1)
{
 FUNC_0(!FUNC_2(VAR_1));
 FUNC_1(VAR_1->mm.pages);
 FUNC_3(VAR_1->frontbuffer, VAR_0);
}
