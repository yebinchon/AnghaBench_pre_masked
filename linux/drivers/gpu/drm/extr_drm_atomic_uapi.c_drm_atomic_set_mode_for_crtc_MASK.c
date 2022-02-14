
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode ;
struct drm_mode_modeinfo {int dummy; } ;
struct drm_display_mode {int name; } ;
struct drm_crtc_state {int enable; int mode; int * mode_blob; struct drm_crtc* crtc; } ;
struct TYPE_2__ {int id; } ;
struct drm_crtc {int name; TYPE_1__ base; int dev; } ;


 int FUNC_0 (char*,int ,int ,struct drm_crtc_state*,...) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct drm_mode_modeinfo*,struct drm_display_mode const*) ;
 int FUNC_4 (int *,struct drm_display_mode const*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ,int,struct drm_mode_modeinfo*) ;
 scalar_t__ FUNC_7 (int *,struct drm_display_mode const*,int) ;
 int FUNC_8 (int *,int ,int) ;

int FUNC_9(struct drm_crtc_state *VAR_0,
     const struct drm_display_mode *VAR_1)
{
 struct drm_crtc *VAR_2 = VAR_0->crtc;
 struct drm_mode_modeinfo VAR_3;


 if (VAR_1 && FUNC_7(&VAR_0->mode, VAR_1, sizeof(*VAR_1)) == 0)
  return 0;

 FUNC_5(VAR_0->mode_blob);
 VAR_0->mode_blob = ((void*)0);

 if (VAR_1) {
  FUNC_3(&VAR_3, VAR_1);
  VAR_0->mode_blob =
   FUNC_6(VAR_0->crtc->dev,
                                   sizeof(VAR_3),
                                   &VAR_3);
  if (FUNC_1(VAR_0->mode_blob))
   return FUNC_2(VAR_0->mode_blob);

  FUNC_4(&VAR_0->mode, VAR_1);
  VAR_0->enable = 1;
  FUNC_0("Set [MODE:%s] for [CRTC:%d:%s] state %p\n",
     VAR_1->name, VAR_2->base.id, VAR_2->name, VAR_0);
 } else {
  FUNC_8(&VAR_0->mode, 0, sizeof(VAR_0->mode));
  VAR_0->enable = 0;
  FUNC_0("Set [NOMODE] for [CRTC:%d:%s] state %p\n",
     VAR_2->base.id, VAR_2->name, VAR_0);
 }

 return 0;
}
