
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_screen_target_display_unit {int content_fb_type; scalar_t__ defined; } ;
struct vmw_private {int dummy; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {int dev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct vmw_screen_target_display_unit* FUNC_1 (struct drm_crtc*) ;
 struct vmw_private* FUNC_2 (int ) ;
 int FUNC_3 (struct vmw_private*,struct vmw_screen_target_display_unit*,int *) ;
 int FUNC_4 (struct vmw_private*,struct vmw_screen_target_display_unit*) ;
 int FUNC_5 (struct vmw_private*,struct vmw_screen_target_display_unit*) ;

__attribute__((used)) static void FUNC_6(struct drm_crtc *VAR_1,
      struct drm_crtc_state *VAR_2)
{
 struct vmw_private *VAR_3;
 struct vmw_screen_target_display_unit *VAR_4;
 int VAR_5;


 if (!VAR_1) {
  FUNC_0("CRTC is NULL\n");
  return;
 }

 VAR_4 = FUNC_1(VAR_1);
 VAR_3 = FUNC_2(VAR_1->dev);

 if (VAR_4->defined) {
  VAR_5 = FUNC_3(VAR_3, VAR_4, ((void*)0));
  if (VAR_5)
   FUNC_0("Failed to blank CRTC\n");

  (void) FUNC_5(VAR_3, VAR_4);

  VAR_5 = FUNC_4(VAR_3, VAR_4);
  if (VAR_5)
   FUNC_0("Failed to destroy Screen Target\n");

  VAR_4->content_fb_type = VAR_0;
 }
}
