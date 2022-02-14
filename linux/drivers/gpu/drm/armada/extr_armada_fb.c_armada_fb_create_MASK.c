
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_mode_fb_cmd2 {scalar_t__* handles; int * pitches; int flags; int pixel_format; int height; int width; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_format_info {int num_planes; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ import_attach; } ;
struct armada_gem_object {TYPE_1__ obj; int mapped; int sgt; } ;
struct armada_framebuffer {struct drm_framebuffer fb; } ;


 int FUNC_0 (char*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct drm_framebuffer* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct armada_framebuffer*) ;
 int FUNC_4 (struct armada_framebuffer*) ;
 struct armada_framebuffer* FUNC_5 (struct drm_device*,struct drm_mode_fb_cmd2 const*,struct armada_gem_object*) ;
 int FUNC_6 (struct armada_gem_object*) ;
 struct armada_gem_object* FUNC_7 (struct drm_file*,scalar_t__) ;
 int FUNC_8 (TYPE_1__*) ;
 struct drm_format_info* FUNC_9 (struct drm_device*,struct drm_mode_fb_cmd2 const*) ;

struct drm_framebuffer *FUNC_10(struct drm_device *VAR_2,
 struct drm_file *VAR_3, const struct drm_mode_fb_cmd2 *VAR_4)
{
 const struct drm_format_info *VAR_5 = FUNC_9(VAR_2, VAR_4);
 struct armada_gem_object *VAR_6;
 struct armada_framebuffer *VAR_7;
 int VAR_8;

 FUNC_0("w%u h%u pf%08x f%u p%u,%u,%u\n",
  VAR_4->width, VAR_4->height, VAR_4->pixel_format,
  VAR_4->flags, VAR_4->pitches[0], VAR_4->pitches[1],
  VAR_4->pitches[2]);


 if (VAR_5->num_planes > 1 &&
     (VAR_4->handles[0] != VAR_4->handles[1] ||
      VAR_4->handles[0] != VAR_4->handles[2])) {
  VAR_8 = -VAR_0;
  goto err;
 }

 VAR_6 = FUNC_7(VAR_3, VAR_4->handles[0]);
 if (!VAR_6) {
  VAR_8 = -VAR_1;
  goto err;
 }

 if (VAR_6->obj.import_attach && !VAR_6->sgt) {
  VAR_8 = FUNC_6(VAR_6);
  if (VAR_8)
   goto err_unref;
 }


 if (!VAR_6->mapped) {
  VAR_8 = -VAR_0;
  goto err_unref;
 }

 VAR_7 = FUNC_5(VAR_2, VAR_4, VAR_6);
 if (FUNC_3(VAR_7)) {
  VAR_8 = FUNC_4(VAR_7);
  goto err;
 }

 FUNC_8(&VAR_6->obj);

 return &VAR_7->fb;

 err_unref:
 FUNC_8(&VAR_6->obj);
 err:
 FUNC_1("failed to initialize framebuffer: %d\n", VAR_8);
 return FUNC_2(VAR_8);
}
