
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_12__ {int x1; int y1; } ;
struct TYPE_11__ {unsigned int rotation; TYPE_5__ src; struct drm_framebuffer* fb; TYPE_1__* plane; } ;
struct intel_plane_state {TYPE_4__ base; TYPE_3__* color_plane; } ;
struct drm_i915_private {int dummy; } ;
struct drm_framebuffer {scalar_t__ modifier; TYPE_2__* format; } ;
struct TYPE_10__ {int offset; int stride; int x; int y; } ;
struct TYPE_9__ {int* cpp; } ;
struct TYPE_8__ {int dev; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*,int,int) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (struct drm_framebuffer const*,int ,unsigned int) ;
 int FUNC_7 (struct drm_framebuffer const*,int ,unsigned int) ;
 int FUNC_8 (int*,int*,struct intel_plane_state*,int ) ;
 int FUNC_9 (int*,int*,struct intel_plane_state*,int ,int,int) ;
 int FUNC_10 (int*,int*,struct intel_plane_state*,int ) ;
 int FUNC_11 (struct drm_framebuffer const*,int ) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int FUNC_13 (struct intel_plane_state*,int,int,int) ;
 int FUNC_14 (struct drm_framebuffer const*,int ,unsigned int) ;
 struct drm_i915_private* FUNC_15 (int ) ;

__attribute__((used)) static int FUNC_16(struct intel_plane_state *VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_15(VAR_2->base.plane->dev);
 const struct drm_framebuffer *VAR_4 = VAR_2->base.fb;
 unsigned int VAR_5 = VAR_2->base.rotation;
 int VAR_6 = VAR_2->base.src.x1 >> 16;
 int VAR_7 = VAR_2->base.src.y1 >> 16;
 int VAR_8 = FUNC_5(&VAR_2->base.src) >> 16;
 int VAR_9 = FUNC_3(&VAR_2->base.src) >> 16;
 int VAR_10;
 int VAR_11 = 4096;
 u32 VAR_12, VAR_13, VAR_14 = VAR_2->color_plane[1].offset;

 if (FUNC_1(VAR_3) >= 11)
  VAR_10 = FUNC_7(VAR_4, 0, VAR_5);
 else if (FUNC_1(VAR_3) >= 10 || FUNC_2(VAR_3))
  VAR_10 = FUNC_6(VAR_4, 0, VAR_5);
 else
  VAR_10 = FUNC_14(VAR_4, 0, VAR_5);

 if (VAR_8 > VAR_10 || VAR_9 > VAR_11) {
  FUNC_0("requested Y/RGB source size %dx%d too big (limit %dx%d)\n",
         VAR_8, VAR_9, VAR_10, VAR_11);
  return -VAR_0;
 }

 FUNC_8(&VAR_6, &VAR_7, VAR_2, 0);
 VAR_13 = FUNC_10(&VAR_6, &VAR_7, VAR_2, 0);
 VAR_12 = FUNC_11(VAR_4, 0);






 if (VAR_13 > VAR_14)
  VAR_13 = FUNC_9(&VAR_6, &VAR_7, VAR_2, 0,
          VAR_13, VAR_14 & ~(VAR_12 - 1));







 if (VAR_4->modifier == VAR_1) {
  int VAR_15 = VAR_4->format->cpp[0];

  while ((VAR_6 + VAR_8) * VAR_15 > VAR_2->color_plane[0].stride) {
   if (VAR_13 == 0) {
    FUNC_0("Unable to find suitable display surface offset due to X-tiling\n");
    return -VAR_0;
   }

   VAR_13 = FUNC_9(&VAR_6, &VAR_7, VAR_2, 0,
           VAR_13, VAR_13 - VAR_12);
  }
 }





 if (FUNC_12(VAR_4->modifier)) {
  while (!FUNC_13(VAR_2, VAR_6, VAR_7, VAR_13)) {
   if (VAR_13 == 0)
    break;

   VAR_13 = FUNC_9(&VAR_6, &VAR_7, VAR_2, 0,
           VAR_13, VAR_13 - VAR_12);
  }

  if (VAR_6 != VAR_2->color_plane[1].x || VAR_7 != VAR_2->color_plane[1].y) {
   FUNC_0("Unable to find suitable display surface offset due to CCS\n");
   return -VAR_0;
  }
 }

 VAR_2->color_plane[0].offset = VAR_13;
 VAR_2->color_plane[0].x = VAR_6;
 VAR_2->color_plane[0].y = VAR_7;





 FUNC_4(&VAR_2->base.src,
      (VAR_6 << 16) - VAR_2->base.src.x1,
      (VAR_7 << 16) - VAR_2->base.src.y1);

 return 0;
}
