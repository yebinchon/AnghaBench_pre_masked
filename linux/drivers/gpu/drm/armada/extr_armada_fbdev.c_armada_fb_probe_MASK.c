
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_fb_helper_surface_size {int dummy; } ;
struct drm_fb_helper {int fb; } ;


 int FUNC_0 (struct drm_fb_helper*,struct drm_fb_helper_surface_size*) ;

__attribute__((used)) static int FUNC_1(struct drm_fb_helper *VAR_0,
 struct drm_fb_helper_surface_size *VAR_1)
{
 int VAR_2 = 0;

 if (!VAR_0->fb) {
  VAR_2 = FUNC_0(VAR_0, VAR_1);
  if (VAR_2 == 0)
   VAR_2 = 1;
 }
 return VAR_2;
}
