
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_fbc {int enabled; int active; struct intel_crtc* crtc; int lock; } ;
struct intel_crtc {int pipe; } ;
struct drm_i915_private {struct intel_fbc fbc; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct drm_i915_private *VAR_0)
{
 struct intel_fbc *VAR_1 = &VAR_0->fbc;
 struct intel_crtc *VAR_2 = VAR_1->crtc;

 FUNC_1(!FUNC_3(&VAR_1->lock));
 FUNC_1(!VAR_1->enabled);
 FUNC_1(VAR_1->active);

 FUNC_0("Disabling FBC on pipe %c\n", FUNC_4(VAR_2->pipe));

 FUNC_2(VAR_0);

 VAR_1->enabled = 0;
 VAR_1->crtc = ((void*)0);
}
