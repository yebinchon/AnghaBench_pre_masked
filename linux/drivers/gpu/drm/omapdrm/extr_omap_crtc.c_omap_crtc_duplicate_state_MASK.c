
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_crtc_state {int dummy; } ;
struct omap_crtc_state {struct drm_crtc_state base; int manually_updated; int rotation; int zpos; } ;
struct drm_crtc {int state; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct drm_crtc*,struct drm_crtc_state*) ;
 struct omap_crtc_state* FUNC_2 (int,int ) ;
 struct omap_crtc_state* FUNC_3 (int ) ;

__attribute__((used)) static struct drm_crtc_state *
FUNC_4(struct drm_crtc *VAR_1)
{
 struct omap_crtc_state *VAR_2, *VAR_3;

 if (FUNC_0(!VAR_1->state))
  return ((void*)0);

 VAR_3 = FUNC_3(VAR_1->state);

 VAR_2 = FUNC_2(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 FUNC_1(VAR_1, &VAR_2->base);

 VAR_2->zpos = VAR_3->zpos;
 VAR_2->rotation = VAR_3->rotation;
 VAR_2->manually_updated = VAR_3->manually_updated;

 return &VAR_2->base;
}
