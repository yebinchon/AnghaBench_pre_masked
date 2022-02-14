
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct drm_framebuffer {int dummy; } ;
struct udl_framebuffer {struct drm_framebuffer base; } ;
struct drm_mode_fb_cmd2 {int* pitches; int height; int * handles; } ;
struct drm_gem_object {int size; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,int,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct drm_framebuffer* FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 struct drm_gem_object* FUNC_3 (struct drm_file*,int ) ;
 int FUNC_4 (struct udl_framebuffer*) ;
 struct udl_framebuffer* FUNC_5 (int,int ) ;
 int FUNC_6 (struct drm_gem_object*) ;
 int FUNC_7 (struct drm_device*,struct udl_framebuffer*,struct drm_mode_fb_cmd2 const*,int ) ;

struct drm_framebuffer *
FUNC_8(struct drm_device *VAR_5,
     struct drm_file *VAR_6,
     const struct drm_mode_fb_cmd2 *VAR_7)
{
 struct drm_gem_object *VAR_8;
 struct udl_framebuffer *VAR_9;
 int VAR_10;
 uint32_t VAR_11;

 VAR_8 = FUNC_3(VAR_6, VAR_7->handles[0]);
 if (VAR_8 == ((void*)0))
  return FUNC_2(-VAR_1);

 VAR_11 = VAR_7->pitches[0] * VAR_7->height;
 VAR_11 = FUNC_0(VAR_11, VAR_4);

 if (VAR_11 > VAR_8->size) {
  FUNC_1("object size not sufficient for fb %d %zu %d %d\n", VAR_11, VAR_8->size, VAR_7->pitches[0], VAR_7->height);
  return FUNC_2(-VAR_2);
 }

 VAR_9 = FUNC_5(sizeof(*VAR_9), VAR_3);
 if (VAR_9 == ((void*)0))
  return FUNC_2(-VAR_2);

 VAR_10 = FUNC_7(VAR_5, VAR_9, VAR_7, FUNC_6(VAR_8));
 if (VAR_10) {
  FUNC_4(VAR_9);
  return FUNC_2(-VAR_0);
 }
 return &VAR_9->base;
}
