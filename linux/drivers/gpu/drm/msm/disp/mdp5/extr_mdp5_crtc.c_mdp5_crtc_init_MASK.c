
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int irq; } ;
struct TYPE_7__ {int irq; } ;
struct TYPE_6__ {int irq; } ;
struct TYPE_5__ {int lock; } ;
struct drm_crtc {int dummy; } ;
struct mdp5_crtc {int id; int lm_cursor_enabled; int unref_cursor_work; TYPE_4__ pp_done; TYPE_3__ err; TYPE_2__ vblank; int pp_completion; TYPE_1__ cursor; int lm_lock; struct drm_crtc base; } ;
struct drm_plane {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 struct drm_crtc* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct drm_crtc*,int *) ;
 int FUNC_2 (struct drm_device*,struct drm_crtc*,struct drm_plane*,struct drm_plane*,int *,int *) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *) ;
 struct mdp5_crtc* FUNC_5 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int *) ;
 int VAR_7 ;

struct drm_crtc *FUNC_7(struct drm_device *VAR_8,
    struct drm_plane *VAR_9,
    struct drm_plane *VAR_10, int VAR_11)
{
 struct drm_crtc *VAR_12 = ((void*)0);
 struct mdp5_crtc *VAR_13;

 VAR_13 = FUNC_5(sizeof(*VAR_13), VAR_1);
 if (!VAR_13)
  return FUNC_0(-VAR_0);

 VAR_12 = &VAR_13->base;

 VAR_13->id = VAR_11;

 FUNC_6(&VAR_13->lm_lock);
 FUNC_6(&VAR_13->cursor.lock);
 FUNC_4(&VAR_13->pp_completion);

 VAR_13->vblank.irq = VAR_6;
 VAR_13->err.irq = VAR_2;
 VAR_13->pp_done.irq = VAR_5;

 VAR_13->lm_cursor_enabled = VAR_10 ? 0 : 1;

 FUNC_2(VAR_8, VAR_12, VAR_9, VAR_10,
      &VAR_3, ((void*)0));

 FUNC_3(&VAR_13->unref_cursor_work,
   "unref cursor", VAR_7);

 FUNC_1(VAR_12, &VAR_4);

 return VAR_12;
}
