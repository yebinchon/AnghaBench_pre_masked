
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_crtc_state {int connector_mask; int crtc; int state; } ;
struct drm_connector {int dummy; } ;


 int FUNC_0 (int ) ;
 struct drm_crtc_state* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct drm_connector*) ;

__attribute__((used)) static inline bool
FUNC_3(struct drm_crtc_state *VAR_0, struct drm_connector *VAR_1)
{
 struct drm_crtc_state *VAR_2;
 u32 VAR_3;

 VAR_2 = FUNC_1(VAR_0->state, VAR_0->crtc);
 VAR_3 = VAR_0->connector_mask ^ VAR_2->connector_mask;

 return FUNC_0(FUNC_2(VAR_1)) == VAR_3;
}
