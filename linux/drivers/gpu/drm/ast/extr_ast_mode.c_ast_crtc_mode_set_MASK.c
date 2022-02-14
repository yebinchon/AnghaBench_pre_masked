
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_framebuffer {int dummy; } ;
struct drm_display_mode {int dummy; } ;
struct drm_device {struct ast_private* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;
struct ast_vbios_mode_info {int dummy; } ;
struct ast_private {scalar_t__ chip; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int FUNC_1 (struct drm_crtc*,int,int,struct drm_framebuffer*) ;
 int FUNC_2 (struct drm_crtc*,struct drm_display_mode*,struct drm_display_mode*,struct ast_vbios_mode_info*) ;
 int FUNC_3 (struct ast_private*) ;
 int FUNC_4 (struct drm_crtc*,struct drm_display_mode*,struct ast_vbios_mode_info*) ;
 int FUNC_5 (struct drm_crtc*,struct drm_display_mode*,struct ast_vbios_mode_info*) ;
 int FUNC_6 (struct drm_device*,struct drm_display_mode*,struct ast_vbios_mode_info*) ;
 int FUNC_7 (struct drm_crtc*,struct drm_display_mode*,struct ast_vbios_mode_info*) ;
 int FUNC_8 (struct ast_private*,int ,int,int) ;
 int FUNC_9 (struct drm_crtc*) ;
 int FUNC_10 (struct drm_crtc*,struct drm_display_mode*,struct ast_vbios_mode_info*) ;
 int FUNC_11 (struct drm_device*,struct drm_display_mode*,struct ast_vbios_mode_info*) ;

__attribute__((used)) static int FUNC_12(struct drm_crtc *VAR_3,
        struct drm_display_mode *VAR_4,
        struct drm_display_mode *VAR_5,
        int VAR_6, int VAR_7,
        struct drm_framebuffer *VAR_8)
{
 struct drm_device *VAR_9 = VAR_3->dev;
 struct ast_private *VAR_10 = VAR_3->dev->dev_private;
 struct ast_vbios_mode_info VAR_11;
 bool VAR_12;
 if (VAR_10->chip == VAR_0) {
  FUNC_0("AST 1180 modesetting not supported\n");
  return -VAR_2;
 }

 VAR_12 = FUNC_2(VAR_3, VAR_4, VAR_5, &VAR_11);
 if (VAR_12 == 0)
  return -VAR_2;
 FUNC_3(VAR_10);

 FUNC_8(VAR_10, VAR_1, 0xa1, 0x06);

 FUNC_10(VAR_3, VAR_5, &VAR_11);
 FUNC_4(VAR_3, VAR_5, &VAR_11);
 FUNC_9(VAR_3);
 FUNC_6(VAR_9, VAR_5, &VAR_11);
 FUNC_7(VAR_3, VAR_5, &VAR_11);
 FUNC_11(VAR_9, VAR_5, &VAR_11);
 FUNC_5(VAR_3, VAR_5, &VAR_11);

 FUNC_1(VAR_3, VAR_6, VAR_7, VAR_8);

 return 0;
}
