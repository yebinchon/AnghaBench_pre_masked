
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* mixer; } ;
struct mdp5_crtc_state {TYPE_1__ pipeline; } ;
struct mdp5_crtc {int pp_completion; } ;
struct drm_device {int dev; } ;
struct drm_crtc {int state; struct drm_device* dev; } ;
struct TYPE_4__ {int lm; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int) ;
 struct mdp5_crtc* FUNC_2 (struct drm_crtc*) ;
 struct mdp5_crtc_state* FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(struct drm_crtc *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;
 struct mdp5_crtc *VAR_2 = FUNC_2(VAR_0);
 struct mdp5_crtc_state *VAR_3 = FUNC_3(VAR_0->state);
 int VAR_4;

 VAR_4 = FUNC_4(&VAR_2->pp_completion,
      FUNC_1(50));
 if (VAR_4 == 0)
  FUNC_0(VAR_1->dev, "pp done time out, lm=%d\n",
    VAR_3->pipeline.mixer->lm);
}
