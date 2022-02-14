
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_framebuffer {int filp_head; struct drm_device* dev; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct drm_framebuffer*) ;
 scalar_t__ FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_framebuffer*) ;
 int FUNC_5 (struct drm_framebuffer*) ;
 int FUNC_6 (struct drm_framebuffer*) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct drm_framebuffer *VAR_0)
{
 struct drm_device *VAR_1;

 if (!VAR_0)
  return;

 VAR_1 = VAR_0->dev;

 FUNC_1(!FUNC_7(&VAR_0->filp_head));
 if (FUNC_5(VAR_0) > 1) {
  if (FUNC_3(VAR_1)) {
   int VAR_2 = FUNC_2(VAR_0);
   FUNC_0(VAR_2, "atomic remove_fb failed with %i\n", VAR_2);
  } else
   FUNC_6(VAR_0);
 }

 FUNC_4(VAR_0);
}
