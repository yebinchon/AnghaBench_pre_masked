
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mode_fb_cmd2 {int dummy; } ;
struct drm_gem_object {int dummy; } ;
struct drm_framebuffer_funcs {int dummy; } ;
struct drm_framebuffer {struct drm_gem_object** obj; } ;
struct drm_device {int dev; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 struct drm_framebuffer* FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (struct drm_device*,struct drm_framebuffer*,struct drm_framebuffer_funcs const*) ;
 int FUNC_3 (struct drm_device*,struct drm_framebuffer*,struct drm_mode_fb_cmd2 const*) ;
 int FUNC_4 (struct drm_framebuffer*) ;
 struct drm_framebuffer* FUNC_5 (int,int ) ;

__attribute__((used)) static struct drm_framebuffer *
FUNC_6(struct drm_device *VAR_2,
   const struct drm_mode_fb_cmd2 *VAR_3,
   struct drm_gem_object **VAR_4, unsigned int VAR_5,
   const struct drm_framebuffer_funcs *VAR_6)
{
 struct drm_framebuffer *VAR_7;
 int VAR_8, VAR_9;

 VAR_7 = FUNC_5(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return FUNC_1(-VAR_0);

 FUNC_3(VAR_2, VAR_7, VAR_3);

 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
  VAR_7->obj[VAR_9] = VAR_4[VAR_9];

 VAR_8 = FUNC_2(VAR_2, VAR_7, VAR_6);
 if (VAR_8) {
  FUNC_0(VAR_2->dev, "Failed to init framebuffer: %d\n",
         VAR_8);
  FUNC_4(VAR_7);
  return FUNC_1(VAR_8);
 }

 return VAR_7;
}
