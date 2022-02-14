
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_fb_helper {scalar_t__ fbdev; } ;
struct drm_client_dev {int dummy; } ;


 struct drm_fb_helper* FUNC_0 (struct drm_client_dev*) ;
 int FUNC_1 (struct drm_fb_helper*) ;
 int FUNC_2 (struct drm_fb_helper*) ;

__attribute__((used)) static void FUNC_3(struct drm_client_dev *VAR_0)
{
 struct drm_fb_helper *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->fbdev)

  FUNC_1(VAR_1);
 else
  FUNC_2(VAR_1);
}
