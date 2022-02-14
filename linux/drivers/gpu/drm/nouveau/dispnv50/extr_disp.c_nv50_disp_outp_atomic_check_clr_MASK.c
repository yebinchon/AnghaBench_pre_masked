
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ctrl; } ;
struct nv50_outp_atom {int flush_disable; TYPE_2__ clr; TYPE_1__* encoder; } ;
struct nv50_atom {int flush_disable; int lock_core; int state; } ;
struct drm_encoder {int dummy; } ;
struct drm_crtc_state {scalar_t__ active; } ;
struct drm_crtc {int dummy; } ;
struct drm_connector_state {struct drm_crtc* crtc; struct drm_encoder* best_encoder; } ;
struct TYPE_3__ {scalar_t__ encoder_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct nv50_outp_atom*) ;
 int FUNC_1 (struct nv50_outp_atom*) ;
 scalar_t__ FUNC_2 (struct drm_crtc_state*) ;
 struct drm_crtc_state* FUNC_3 (int *,struct drm_crtc*) ;
 struct drm_crtc_state* FUNC_4 (int *,struct drm_crtc*) ;
 struct nv50_outp_atom* FUNC_5 (struct nv50_atom*,struct drm_encoder*) ;

__attribute__((used)) static int
FUNC_6(struct nv50_atom *VAR_1,
    struct drm_connector_state *VAR_2)
{
 struct drm_encoder *VAR_3 = VAR_2->best_encoder;
 struct drm_crtc_state *VAR_4, *VAR_5;
 struct drm_crtc *VAR_6;
 struct nv50_outp_atom *VAR_7;

 if (!(VAR_6 = VAR_2->crtc))
  return 0;

 VAR_4 = FUNC_4(&VAR_1->state, VAR_6);
 VAR_5 = FUNC_3(&VAR_1->state, VAR_6);
 if (VAR_4->active && FUNC_2(VAR_5)) {
  VAR_7 = FUNC_5(VAR_1, VAR_3);
  if (FUNC_0(VAR_7))
   return FUNC_1(VAR_7);

  if (VAR_7->encoder->encoder_type == VAR_0) {
   VAR_7->flush_disable = 1;
   VAR_1->flush_disable = 1;
  }
  VAR_7->clr.ctrl = 1;
  VAR_1->lock_core = 1;
 }

 return 0;
}
