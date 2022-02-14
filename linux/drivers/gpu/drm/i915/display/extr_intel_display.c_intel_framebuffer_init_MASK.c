
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct drm_framebuffer {int width; int* pitches; TYPE_2__** obj; int modifier; TYPE_1__* format; } ;
struct intel_framebuffer {int frontbuffer; struct drm_framebuffer base; } ;
struct drm_mode_fb_cmd2 {int flags; int* pitches; scalar_t__* offsets; scalar_t__* handles; int * modifier; int pixel_format; } ;
struct drm_i915_private {int drm; } ;
struct TYPE_4__ {int dev; } ;
struct drm_i915_gem_object {TYPE_2__ base; } ;
struct drm_format_name_buf {int dummy; } ;
struct TYPE_3__ {int num_planes; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*,int) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,struct drm_framebuffer*,int *) ;
 int FUNC_6 (int ,struct drm_format_name_buf*) ;
 int FUNC_7 (int *,struct drm_framebuffer*,struct drm_mode_fb_cmd2*) ;
 unsigned int FUNC_8 (struct drm_i915_gem_object*) ;
 unsigned int FUNC_9 (struct drm_i915_gem_object*) ;
 int FUNC_10 (struct drm_i915_gem_object*) ;
 int FUNC_11 (struct drm_i915_gem_object*) ;
 int VAR_8 ;
 int FUNC_12 (struct drm_i915_private*,int ,int ) ;
 unsigned int FUNC_13 (int ) ;
 int FUNC_14 (struct drm_framebuffer*,int) ;
 int FUNC_15 (struct drm_i915_private*,struct drm_framebuffer*) ;
 int FUNC_16 (struct drm_i915_gem_object*) ;
 int FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int ) ;
 struct drm_i915_private* FUNC_19 (int ) ;

__attribute__((used)) static int FUNC_20(struct intel_framebuffer *VAR_9,
      struct drm_i915_gem_object *VAR_10,
      struct drm_mode_fb_cmd2 *VAR_11)
{
 struct drm_i915_private *VAR_12 = FUNC_19(VAR_10->base.dev);
 struct drm_framebuffer *VAR_13 = &VAR_9->base;
 u32 VAR_14;
 unsigned int VAR_15, VAR_16;
 int VAR_17 = -VAR_2;
 int VAR_18;

 VAR_9->frontbuffer = FUNC_16(VAR_10);
 if (!VAR_9->frontbuffer)
  return -VAR_3;

 FUNC_10(VAR_10);
 VAR_15 = FUNC_9(VAR_10);
 VAR_16 = FUNC_8(VAR_10);
 FUNC_11(VAR_10);

 if (VAR_11->flags & VAR_1) {




  if (VAR_15 != VAR_5 &&
      VAR_15 != FUNC_13(VAR_11->modifier[0])) {
   FUNC_0("tiling_mode doesn't match fb modifier\n");
   goto err;
  }
 } else {
  if (VAR_15 == VAR_6) {
   VAR_11->modifier[0] = VAR_4;
  } else if (VAR_15 == VAR_7) {
   FUNC_0("No Y tiling for legacy addfb\n");
   goto err;
  }
 }

 if (!FUNC_4(&VAR_12->drm,
          VAR_11->pixel_format,
          VAR_11->modifier[0])) {
  struct drm_format_name_buf VAR_19;

  FUNC_0("unsupported pixel format %s / modifier 0x%llx\n",
         FUNC_6(VAR_11->pixel_format,
        &VAR_19),
         VAR_11->modifier[0]);
  goto err;
 }





 if (FUNC_2(VAR_12) < 4 &&
     VAR_15 != FUNC_13(VAR_11->modifier[0])) {
  FUNC_0("tiling_mode must match fb modifier exactly on gen2/3\n");
  goto err;
 }

 VAR_14 = FUNC_12(VAR_12, VAR_11->pixel_format,
      VAR_11->modifier[0]);
 if (VAR_11->pitches[0] > VAR_14) {
  FUNC_0("%s pitch (%u) must be at most %d\n",
         VAR_11->modifier[0] != VAR_0 ?
         "tiled" : "linear",
         VAR_11->pitches[0], VAR_14);
  goto err;
 }





 if (VAR_15 != VAR_5 && VAR_11->pitches[0] != VAR_16) {
  FUNC_0("pitch (%d) must match tiling stride (%d)\n",
         VAR_11->pitches[0], VAR_16);
  goto err;
 }


 if (VAR_11->offsets[0] != 0)
  goto err;

 FUNC_7(&VAR_12->drm, VAR_13, VAR_11);

 for (VAR_18 = 0; VAR_18 < VAR_13->format->num_planes; VAR_18++) {
  u32 VAR_20;

  if (VAR_11->handles[VAR_18] != VAR_11->handles[0]) {
   FUNC_0("bad plane %d handle\n", VAR_18);
   goto err;
  }

  VAR_20 = FUNC_14(VAR_13, VAR_18);
  if (FUNC_3(VAR_12, 9) && VAR_18 == 0 && VAR_13->width > 3840 &&
      FUNC_18(VAR_13->modifier))
   VAR_20 *= 4;

  if (VAR_13->pitches[VAR_18] & (VAR_20 - 1)) {
   FUNC_0("plane %d pitch (%d) must be at least %u byte aligned\n",
          VAR_18, VAR_13->pitches[VAR_18], VAR_20);
   goto err;
  }

  VAR_13->obj[VAR_18] = &VAR_10->base;
 }

 VAR_17 = FUNC_15(VAR_12, VAR_13);
 if (VAR_17)
  goto err;

 VAR_17 = FUNC_5(&VAR_12->drm, VAR_13, &VAR_8);
 if (VAR_17) {
  FUNC_1("framebuffer init failed %d\n", VAR_17);
  goto err;
 }

 return 0;

err:
 FUNC_17(VAR_9->frontbuffer);
 return VAR_17;
}
