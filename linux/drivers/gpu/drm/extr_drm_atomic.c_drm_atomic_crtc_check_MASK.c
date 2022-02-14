
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_crtc_state {scalar_t__ active; scalar_t__ event; scalar_t__ mode_blob; scalar_t__ enable; struct drm_crtc* crtc; } ;
struct TYPE_2__ {int id; } ;
struct drm_crtc {int name; TYPE_1__ base; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(const struct drm_crtc_state *VAR_2,
     const struct drm_crtc_state *VAR_3)
{
 struct drm_crtc *VAR_4 = VAR_3->crtc;
 if (VAR_3->active && !VAR_3->enable) {
  FUNC_0("[CRTC:%d:%s] active without enabled\n",
     VAR_4->base.id, VAR_4->name);
  return -VAR_1;
 }




 if (FUNC_2(VAR_4->dev, VAR_0) &&
     FUNC_1(VAR_3->enable && !VAR_3->mode_blob)) {
  FUNC_0("[CRTC:%d:%s] enabled without mode blob\n",
     VAR_4->base.id, VAR_4->name);
  return -VAR_1;
 }

 if (FUNC_2(VAR_4->dev, VAR_0) &&
     FUNC_1(!VAR_3->enable && VAR_3->mode_blob)) {
  FUNC_0("[CRTC:%d:%s] disabled with mode blob\n",
     VAR_4->base.id, VAR_4->name);
  return -VAR_1;
 }
 if (VAR_3->event &&
     !VAR_3->active && !VAR_2->active) {
  FUNC_0("[CRTC:%d:%s] requesting event but off\n",
     VAR_4->base.id, VAR_4->name);
  return -VAR_1;
 }

 return 0;
}
