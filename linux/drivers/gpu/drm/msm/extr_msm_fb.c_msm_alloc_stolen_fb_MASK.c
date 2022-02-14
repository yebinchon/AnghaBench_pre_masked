
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct drm_mode_fb_cmd2 {int width; int height; int* pitches; int pixel_format; } ;
struct drm_gem_object {int dummy; } ;
typedef struct drm_gem_object drm_framebuffer ;
struct drm_device {int dev; TYPE_1__* primary; } ;
struct TYPE_2__ {int index; } ;


 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (int ,char*) ;
 struct drm_gem_object* FUNC_2 (struct drm_gem_object*) ;
 scalar_t__ FUNC_3 (struct drm_gem_object*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct drm_gem_object*) ;
 struct drm_gem_object* FUNC_6 (struct drm_device*,struct drm_mode_fb_cmd2*,struct drm_gem_object**) ;
 struct drm_gem_object* FUNC_7 (struct drm_device*,int,int) ;
 int FUNC_8 (struct drm_gem_object*,char*) ;

struct drm_framebuffer *
FUNC_9(struct drm_device *VAR_3, int VAR_4, int VAR_5, int VAR_6, uint32_t VAR_7)
{
 struct drm_mode_fb_cmd2 VAR_8 = {
  .pixel_format = VAR_7,
  .width = VAR_4,
  .height = VAR_5,
  .pitches = &VAR_6 ,
 };
 struct drm_gem_object *VAR_9;
 struct drm_framebuffer *VAR_10;
 int VAR_11;


 VAR_11 = VAR_8.pitches[0] * VAR_8.height;
 FUNC_0("allocating %d bytes for fb %d", VAR_11, VAR_3->primary->index);
 VAR_9 = FUNC_7(VAR_3, VAR_11, VAR_0 | VAR_2 | VAR_1);
 if (FUNC_3(VAR_9)) {
  FUNC_4(VAR_3->dev, "could not allocate stolen bo\n");

  VAR_9 = FUNC_7(VAR_3, VAR_11, VAR_0 | VAR_2);
 }
 if (FUNC_3(VAR_9)) {
  FUNC_1(VAR_3->dev, "failed to allocate buffer object\n");
  return FUNC_2(VAR_9);
 }

 FUNC_8(VAR_9, "stolenfb");

 VAR_10 = FUNC_6(VAR_3, &VAR_8, &VAR_9);
 if (FUNC_3(VAR_10)) {
  FUNC_1(VAR_3->dev, "failed to allocate fb\n");



  FUNC_5(VAR_9);
  return FUNC_2(VAR_10);
 }

 return VAR_10;
}
