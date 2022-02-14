
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_screen_object_unit {scalar_t__ defined; } ;
struct vmw_private {int dummy; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {int dev; } ;


 int FUNC_0 (char*) ;
 struct vmw_screen_object_unit* FUNC_1 (struct drm_crtc*) ;
 struct vmw_private* FUNC_2 (int ) ;
 int FUNC_3 (struct vmw_private*,struct vmw_screen_object_unit*) ;

__attribute__((used)) static void FUNC_4(struct drm_crtc *VAR_0,
     struct drm_crtc_state *VAR_1)
{
 struct vmw_private *VAR_2;
 struct vmw_screen_object_unit *VAR_3;
 int VAR_4;


 if (!VAR_0) {
  FUNC_0("CRTC is NULL\n");
  return;
 }

 VAR_3 = FUNC_1(VAR_0);
 VAR_2 = FUNC_2(VAR_0->dev);

 if (VAR_3->defined) {
  VAR_4 = FUNC_3(VAR_2, VAR_3);
  if (VAR_4)
   FUNC_0("Failed to destroy Screen Object\n");
 }
}
