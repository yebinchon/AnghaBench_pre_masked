
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mdp4_kms {int dummy; } ;
struct mdp4_crtc {int flushed_mask; int id; } ;
struct drm_device {int dev; TYPE_1__* vblank; } ;
struct drm_crtc {struct drm_device* dev; } ;
struct TYPE_2__ {int queue; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 size_t FUNC_1 (struct drm_crtc*) ;
 int FUNC_2 (struct drm_crtc*) ;
 int FUNC_3 (struct drm_crtc*) ;
 struct mdp4_kms* FUNC_4 (struct drm_crtc*) ;
 int FUNC_5 (struct mdp4_kms*,int ) ;
 int FUNC_6 (int) ;
 struct mdp4_crtc* FUNC_7 (struct drm_crtc*) ;
 int FUNC_8 (int ,int,int ) ;

__attribute__((used)) static void FUNC_9(struct drm_crtc *VAR_1)
{
 struct drm_device *VAR_2 = VAR_1->dev;
 struct mdp4_crtc *VAR_3 = FUNC_7(VAR_1);
 struct mdp4_kms *VAR_4 = FUNC_4(VAR_1);
 int VAR_5;

 VAR_5 = FUNC_2(VAR_1);
 if (VAR_5)
  return;

 VAR_5 = FUNC_8(VAR_2->vblank[FUNC_1(VAR_1)].queue,
  !(FUNC_5(VAR_4, VAR_0) &
   VAR_3->flushed_mask),
  FUNC_6(50));
 if (VAR_5 <= 0)
  FUNC_0(VAR_2->dev, "vblank time out, crtc=%d\n", VAR_3->id);

 VAR_3->flushed_mask = 0;

 FUNC_3(VAR_1);
}
