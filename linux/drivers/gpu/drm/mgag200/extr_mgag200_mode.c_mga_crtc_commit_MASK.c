
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mga_device {scalar_t__ type; } ;
struct drm_device {struct mga_device* dev_private; } ;
struct drm_crtc_helper_funcs {int (* dpms ) (struct drm_crtc*,int ) ;} ;
struct drm_crtc {struct drm_crtc_helper_funcs* helper_private; struct drm_device* dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct drm_crtc*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct drm_crtc*,int ) ;

__attribute__((used)) static void FUNC_6(struct drm_crtc *VAR_7)
{
 struct drm_device *VAR_8 = VAR_7->dev;
 struct mga_device *VAR_9 = VAR_8->dev_private;
 const struct drm_crtc_helper_funcs *VAR_10 = VAR_7->helper_private;
 u8 VAR_11;

 if (VAR_9->type == VAR_4 || VAR_9->type == VAR_1)
  FUNC_3(VAR_7);

 if (VAR_9->type == VAR_2 || VAR_9->type == VAR_3) {
  FUNC_4(50);
  FUNC_2(1, 0x0);
  FUNC_4(20);
  FUNC_2(0, 0x3);
 } else {
  FUNC_1(VAR_6, 0x1);
  VAR_11 = FUNC_0(VAR_5);

  VAR_11 &= ~0x20;
  FUNC_2(0x1, VAR_11);
  FUNC_2(0, 3);
 }
 VAR_10->dpms(VAR_7, VAR_0);
}
