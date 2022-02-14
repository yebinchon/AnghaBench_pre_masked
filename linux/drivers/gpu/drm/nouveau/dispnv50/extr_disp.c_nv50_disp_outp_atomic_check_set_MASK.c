
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ctrl; } ;
struct nv50_outp_atom {TYPE_1__ set; } ;
struct nv50_atom {int lock_core; int state; } ;
struct drm_encoder {int dummy; } ;
struct drm_crtc_state {scalar_t__ active; } ;
struct drm_crtc {int dummy; } ;
struct drm_connector_state {struct drm_crtc* crtc; struct drm_encoder* best_encoder; } ;


 scalar_t__ FUNC_0 (struct nv50_outp_atom*) ;
 int FUNC_1 (struct nv50_outp_atom*) ;
 scalar_t__ FUNC_2 (struct drm_crtc_state*) ;
 struct drm_crtc_state* FUNC_3 (int *,struct drm_crtc*) ;
 struct nv50_outp_atom* FUNC_4 (struct nv50_atom*,struct drm_encoder*) ;

__attribute__((used)) static int
FUNC_5(struct nv50_atom *VAR_0,
    struct drm_connector_state *VAR_1)
{
 struct drm_encoder *VAR_2 = VAR_1->best_encoder;
 struct drm_crtc_state *VAR_3;
 struct drm_crtc *VAR_4;
 struct nv50_outp_atom *VAR_5;

 if (!(VAR_4 = VAR_1->crtc))
  return 0;

 VAR_3 = FUNC_3(&VAR_0->state, VAR_4);
 if (VAR_3->active && FUNC_2(VAR_3)) {
  VAR_5 = FUNC_4(VAR_0, VAR_2);
  if (FUNC_0(VAR_5))
   return FUNC_1(VAR_5);

  VAR_5->set.ctrl = 1;
  VAR_0->lock_core = 1;
 }

 return 0;
}
