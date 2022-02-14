
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mdp5_kms {int base; TYPE_1__* pdev; } ;
struct mdp5_crtc_state {scalar_t__ cmd_mode; int pipeline; int ctl; } ;
struct TYPE_4__ {int lock; scalar_t__ iova; } ;
struct mdp5_crtc {int enabled; int pp_done; int err; TYPE_2__ cursor; scalar_t__ lm_cursor_enabled; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {int name; int state; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device dev; } ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int) ;
 struct mdp5_kms* FUNC_2 (struct drm_crtc*) ;
 int FUNC_3 (struct drm_crtc*) ;
 int FUNC_4 (struct drm_crtc*) ;
 int FUNC_5 (struct drm_crtc*) ;
 int FUNC_6 (int ,int *,int ,int) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 struct mdp5_crtc* FUNC_11 (struct drm_crtc*) ;
 struct mdp5_crtc_state* FUNC_12 (int ) ;

__attribute__((used)) static void FUNC_13(struct drm_crtc *VAR_0,
        struct drm_crtc_state *VAR_1)
{
 struct mdp5_crtc *VAR_2 = FUNC_11(VAR_0);
 struct mdp5_crtc_state *VAR_3 = FUNC_12(VAR_0->state);
 struct mdp5_kms *VAR_4 = FUNC_2(VAR_0);
 struct device *VAR_5 = &VAR_4->pdev->dev;

 FUNC_0("%s", VAR_0->name);

 if (FUNC_1(VAR_2->enabled))
  return;

 FUNC_8(VAR_5);

 if (VAR_2->lm_cursor_enabled) {




  if (VAR_2->cursor.iova) {
   unsigned long VAR_6;

   FUNC_9(&VAR_2->cursor.lock, VAR_6);
   FUNC_4(VAR_0);
   FUNC_10(&VAR_2->cursor.lock, VAR_6);

   FUNC_6(VAR_3->ctl,
         &VAR_3->pipeline, 0, 1);
  } else {
   FUNC_6(VAR_3->ctl,
         &VAR_3->pipeline, 0, 0);
  }
 }


 FUNC_5(VAR_0);

 FUNC_3(VAR_0);

 FUNC_7(&VAR_4->base, &VAR_2->err);

 if (VAR_3->cmd_mode)
  FUNC_7(&VAR_4->base, &VAR_2->pp_done);

 VAR_2->enabled = 1;
}
