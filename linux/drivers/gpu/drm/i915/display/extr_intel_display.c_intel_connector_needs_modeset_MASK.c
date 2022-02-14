
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_crtc {int dummy; } ;
struct intel_atomic_state {int dummy; } ;
struct drm_connector_state {scalar_t__ crtc; } ;


 int FUNC_0 (struct intel_atomic_state*,struct intel_crtc*) ;
 scalar_t__ FUNC_1 (int ) ;
 struct intel_crtc* FUNC_2 (scalar_t__) ;

__attribute__((used)) static bool
FUNC_3(struct intel_atomic_state *VAR_0,
         const struct drm_connector_state *VAR_1,
         const struct drm_connector_state *VAR_2)
{
 struct intel_crtc *VAR_3 = VAR_1->crtc ?
          FUNC_2(VAR_1->crtc) : ((void*)0);
 struct intel_crtc *VAR_4 = VAR_2->crtc ?
          FUNC_2(VAR_2->crtc) : ((void*)0);

 return VAR_4 != VAR_3 ||
        (VAR_4 &&
  FUNC_1(FUNC_0(VAR_0, VAR_4)));
}
