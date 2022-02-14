
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct mdp5_kms {TYPE_3__* pdev; } ;
struct TYPE_5__ {scalar_t__ r_mixer; } ;
struct mdp5_crtc_state {TYPE_1__ pipeline; } ;
struct TYPE_6__ {int x; int y; int lock; scalar_t__ height; scalar_t__ width; } ;
struct mdp5_crtc {TYPE_2__ cursor; int lm_cursor_enabled; } ;
struct drm_device {int dev; } ;
struct drm_crtc {TYPE_4__* state; struct drm_device* dev; } ;
struct TYPE_8__ {int enable; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_crtc*,int ) ;
 int FUNC_1 (int ,char*) ;
 struct mdp5_kms* FUNC_2 (struct drm_crtc*) ;
 int FUNC_3 (struct drm_crtc*,int *,int *) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (struct drm_crtc*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 struct mdp5_crtc* FUNC_11 (struct drm_crtc*) ;
 struct mdp5_crtc_state* FUNC_12 (TYPE_4__*) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(struct drm_crtc *VAR_1, int VAR_2, int VAR_3)
{
 struct mdp5_kms *VAR_4 = FUNC_2(VAR_1);
 struct mdp5_crtc *VAR_5 = FUNC_11(VAR_1);
 struct mdp5_crtc_state *VAR_6 = FUNC_12(VAR_1->state);
 uint32_t VAR_7 = FUNC_6(0);
 struct drm_device *VAR_8 = VAR_1->dev;
 uint32_t VAR_9;
 uint32_t VAR_10;
 unsigned long VAR_11;

 if (!VAR_5->lm_cursor_enabled) {
  FUNC_1(VAR_8->dev,
    "cursor_move is deprecated with cursor planes\n");
  return -VAR_0;
 }


 if (VAR_6->pipeline.r_mixer)
  return -VAR_0;


 if (FUNC_13(!VAR_1->state->enable))
  return 0;


 VAR_5->cursor.x = VAR_2 = FUNC_4(VAR_2, -(int)VAR_5->cursor.width);
 VAR_5->cursor.y = VAR_3 = FUNC_4(VAR_3, -(int)VAR_5->cursor.height);

 FUNC_3(VAR_1, &VAR_9, &VAR_10);

 FUNC_7(&VAR_4->pdev->dev);

 FUNC_9(&VAR_5->cursor.lock, VAR_11);
 FUNC_5(VAR_1);
 FUNC_10(&VAR_5->cursor.lock, VAR_11);

 FUNC_0(VAR_1, VAR_7);

 FUNC_8(&VAR_4->pdev->dev);

 return 0;
}
