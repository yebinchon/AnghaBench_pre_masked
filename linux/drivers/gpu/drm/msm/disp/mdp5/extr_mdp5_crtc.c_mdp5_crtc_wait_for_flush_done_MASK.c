
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mdp5_ctl {int dummy; } ;
struct mdp5_crtc_state {struct mdp5_ctl* ctl; } ;
struct mdp5_crtc {int flushed_mask; int id; } ;
struct drm_device {int dev; TYPE_1__* vblank; } ;
struct drm_crtc {int state; struct drm_device* dev; } ;
struct TYPE_2__ {int queue; } ;


 int FUNC_0 (int ,char*,int ) ;
 size_t FUNC_1 (struct drm_crtc*) ;
 int FUNC_2 (struct drm_crtc*) ;
 int FUNC_3 (struct drm_crtc*) ;
 int FUNC_4 (struct mdp5_ctl*) ;
 int FUNC_5 (int) ;
 struct mdp5_crtc* FUNC_6 (struct drm_crtc*) ;
 struct mdp5_crtc_state* FUNC_7 (int ) ;
 int FUNC_8 (int ,int,int ) ;

__attribute__((used)) static void FUNC_9(struct drm_crtc *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;
 struct mdp5_crtc *VAR_2 = FUNC_6(VAR_0);
 struct mdp5_crtc_state *VAR_3 = FUNC_7(VAR_0->state);
 struct mdp5_ctl *VAR_4 = VAR_3->ctl;
 int VAR_5;


 if (!VAR_4)
  return;

 VAR_5 = FUNC_2(VAR_0);
 if (VAR_5)
  return;

 VAR_5 = FUNC_8(VAR_1->vblank[FUNC_1(VAR_0)].queue,
  ((FUNC_4(VAR_4) &
  VAR_2->flushed_mask) == 0),
  FUNC_5(50));
 if (VAR_5 <= 0)
  FUNC_0(VAR_1->dev, "vblank time out, crtc=%d\n", VAR_2->id);

 VAR_2->flushed_mask = 0;

 FUNC_3(VAR_0);
}
