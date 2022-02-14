
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct intel_initial_plane_config {scalar_t__ base; scalar_t__ size; int tiling; TYPE_2__* fb; } ;
struct TYPE_4__ {struct drm_device* dev; } ;
struct intel_crtc {TYPE_1__ base; } ;
struct drm_mode_fb_cmd2 {int* pitches; int* modifier; int flags; int height; int width; int pixel_format; int member_0; } ;
struct drm_i915_private {int stolen_usable_size; } ;
struct drm_i915_gem_object {int tiling_and_stride; } ;
struct drm_framebuffer {int modifier; int* pitches; int height; int width; TYPE_3__* format; } ;
struct drm_device {int struct_mutex; } ;
struct TYPE_6__ {int format; } ;
struct TYPE_5__ {struct drm_framebuffer base; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,...) ;

 int VAR_0 ;





 int FUNC_2 (int) ;
 int VAR_1 ;
 struct drm_i915_gem_object* FUNC_3 (struct drm_i915_private*,int,int,int) ;
 int FUNC_4 (struct drm_i915_gem_object*) ;
 scalar_t__ FUNC_5 (int ,struct drm_i915_gem_object*,struct drm_mode_fb_cmd2*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (scalar_t__,int ) ;
 struct drm_i915_private* FUNC_10 (struct drm_device*) ;
 int FUNC_11 (struct drm_framebuffer*) ;

__attribute__((used)) static bool
FUNC_12(struct intel_crtc *VAR_2,
         struct intel_initial_plane_config *VAR_3)
{
 struct drm_device *VAR_4 = VAR_2->base.dev;
 struct drm_i915_private *VAR_5 = FUNC_10(VAR_4);
 struct drm_mode_fb_cmd2 VAR_6 = { 0 };
 struct drm_framebuffer *VAR_7 = &VAR_3->fb->base;
 u32 VAR_8 = FUNC_8(VAR_3->base, VAR_1);
 u32 VAR_9 = FUNC_9(VAR_3->base + VAR_3->size,
        VAR_1);
 struct drm_i915_gem_object *VAR_10;
 bool VAR_11 = 0;

 VAR_9 -= VAR_8;

 if (VAR_3->size == 0)
  return 0;




 if (VAR_9 * 2 > VAR_5->stolen_usable_size)
  return 0;

 switch (VAR_7->modifier) {
 case 133:
 case 132:
 case 131:
  break;
 default:
  FUNC_0("Unsupported modifier for initial FB: 0x%llx\n",
     VAR_7->modifier);
  return 0;
 }

 FUNC_6(&VAR_4->struct_mutex);
 VAR_10 = FUNC_3(VAR_5,
            VAR_8,
            VAR_8,
            VAR_9);
 FUNC_7(&VAR_4->struct_mutex);
 if (!VAR_10)
  return 0;

 switch (VAR_3->tiling) {
 case 130:
  break;
 case 129:
 case 128:
  VAR_10->tiling_and_stride = VAR_7->pitches[0] | VAR_3->tiling;
  break;
 default:
  FUNC_2(VAR_3->tiling);
  goto out;
 }

 VAR_6.pixel_format = VAR_7->format->format;
 VAR_6.width = VAR_7->width;
 VAR_6.height = VAR_7->height;
 VAR_6.pitches[0] = VAR_7->pitches[0];
 VAR_6.modifier[0] = VAR_7->modifier;
 VAR_6.flags = VAR_0;

 if (FUNC_5(FUNC_11(VAR_7), VAR_10, &VAR_6)) {
  FUNC_1("intel fb init failed\n");
  goto out;
 }


 FUNC_1("initial plane fb obj %p\n", VAR_10);
 VAR_11 = 1;
out:
 FUNC_4(VAR_10);
 return VAR_11;
}
