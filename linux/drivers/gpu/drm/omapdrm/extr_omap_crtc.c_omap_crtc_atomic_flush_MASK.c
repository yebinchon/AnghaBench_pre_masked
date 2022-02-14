
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct omap_drm_private {int dispc; TYPE_2__* dispc_ops; } ;
struct omap_crtc_state {scalar_t__ manually_updated; } ;
struct omap_crtc {int channel; int name; int enabled; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {TYPE_3__* dev; TYPE_4__* state; } ;
struct drm_color_lut {int dummy; } ;
struct TYPE_8__ {TYPE_1__* gamma_lut; scalar_t__ color_mgmt_changed; } ;
struct TYPE_7__ {int event_lock; struct omap_drm_private* dev_private; } ;
struct TYPE_6__ {int (* mgr_go ) (int ,int ) ;int (* mgr_set_gamma ) (int ,int ,struct drm_color_lut*,unsigned int) ;} ;
struct TYPE_5__ {int length; scalar_t__ data; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct drm_crtc*) ;
 int FUNC_3 (struct drm_crtc*) ;
 int FUNC_4 (struct drm_crtc*) ;
 int FUNC_5 (struct drm_crtc*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ,struct drm_color_lut*,unsigned int) ;
 int FUNC_9 (int ,int ) ;
 struct omap_crtc* FUNC_10 (struct drm_crtc*) ;
 struct omap_crtc_state* FUNC_11 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_12(struct drm_crtc *VAR_0,
       struct drm_crtc_state *VAR_1)
{
 struct omap_drm_private *VAR_2 = VAR_0->dev->dev_private;
 struct omap_crtc *VAR_3 = FUNC_10(VAR_0);
 struct omap_crtc_state *VAR_4 = FUNC_11(VAR_0->state);
 int VAR_5;

 if (VAR_0->state->color_mgmt_changed) {
  struct drm_color_lut *VAR_6 = ((void*)0);
  unsigned int VAR_7 = 0;

  if (VAR_0->state->gamma_lut) {
   VAR_6 = (struct drm_color_lut *)
    VAR_0->state->gamma_lut->data;
   VAR_7 = VAR_0->state->gamma_lut->length /
    sizeof(*VAR_6);
  }
  VAR_2->dispc_ops->mgr_set_gamma(VAR_2->dispc, VAR_3->channel,
            VAR_6, VAR_7);
 }

 FUNC_5(VAR_0);


 if (!VAR_3->enabled)
  return;

 FUNC_0("%s: GO", VAR_3->name);

 if (VAR_4->manually_updated) {

  FUNC_6(&VAR_0->dev->event_lock);
  FUNC_4(VAR_0);
  FUNC_3(VAR_0);
  FUNC_7(&VAR_0->dev->event_lock);
  return;
 }

 VAR_5 = FUNC_2(VAR_0);
 FUNC_1(VAR_5 != 0);

 FUNC_6(&VAR_0->dev->event_lock);
 VAR_2->dispc_ops->mgr_go(VAR_2->dispc, VAR_3->channel);
 FUNC_3(VAR_0);
 FUNC_7(&VAR_0->dev->event_lock);
}
