
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned int u32 ;
struct intel_rotation_info {TYPE_5__* plane; } ;
struct intel_framebuffer {TYPE_1__* rotated; TYPE_4__* normal; struct intel_rotation_info rot_info; } ;
struct drm_rect {int x1; int y1; int x2; int y2; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_7__ {int size; } ;
struct drm_i915_gem_object {TYPE_2__ base; } ;
struct drm_framebuffer {int* offsets; int* pitches; int modifier; TYPE_3__* format; int height; int width; } ;
struct TYPE_10__ {unsigned int offset; unsigned int stride; unsigned int width; unsigned int height; } ;
struct TYPE_9__ {int x; int y; } ;
struct TYPE_8__ {int num_planes; unsigned int* cpp; int hsub; int vsub; } ;
struct TYPE_6__ {unsigned int pitch; int x; int y; } ;


 void* FUNC_0 (int,unsigned int) ;
 int FUNC_1 (char*,int,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_2 (int ,struct drm_framebuffer*,int) ;
 unsigned int FUNC_3 (int ,struct drm_framebuffer*,int) ;
 int FUNC_4 (struct drm_rect*,unsigned int,unsigned int,int ) ;
 scalar_t__ FUNC_5 (struct drm_i915_gem_object*) ;
 int FUNC_6 (int*,int*,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,int ) ;
 unsigned int FUNC_7 (struct drm_i915_private*,int*,int*,struct drm_framebuffer*,int,int,int ,unsigned int) ;
 struct drm_i915_gem_object* FUNC_8 (struct drm_framebuffer*) ;
 int FUNC_9 (int*,int*,struct drm_framebuffer*,int) ;
 int FUNC_10 (struct drm_framebuffer*,int,...) ;
 unsigned int FUNC_11 (struct drm_i915_private*) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ,int) ;
 unsigned int FUNC_14 (unsigned int,unsigned int) ;
 int FUNC_15 (unsigned int,unsigned int) ;
 int FUNC_16 (unsigned int,unsigned int) ;
 struct intel_framebuffer* FUNC_17 (struct drm_framebuffer*) ;

__attribute__((used)) static int
FUNC_18(struct drm_i915_private *VAR_3,
     struct drm_framebuffer *VAR_4)
{
 struct intel_framebuffer *VAR_5 = FUNC_17(VAR_4);
 struct intel_rotation_info *VAR_6 = &VAR_5->rot_info;
 struct drm_i915_gem_object *VAR_7 = FUNC_8(VAR_4);
 u32 VAR_8 = 0;
 unsigned int VAR_9 = 0;
 int VAR_10, VAR_11 = VAR_4->format->num_planes;
 unsigned int VAR_12 = FUNC_11(VAR_3);

 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
  unsigned int VAR_13, VAR_14;
  unsigned int VAR_15, VAR_16;
  u32 VAR_17;
  int VAR_18, VAR_19;
  int VAR_20;

  VAR_15 = VAR_4->format->cpp[VAR_10];
  VAR_13 = FUNC_3(VAR_4->width, VAR_4, VAR_10);
  VAR_14 = FUNC_2(VAR_4->height, VAR_4, VAR_10);

  VAR_20 = FUNC_9(&VAR_18, &VAR_19, VAR_4, VAR_10);
  if (VAR_20) {
   FUNC_1("bad fb plane %d offset: 0x%x\n",
          VAR_10, VAR_4->offsets[VAR_10]);
   return VAR_20;
  }

  if (FUNC_12(VAR_4->modifier) && VAR_10 == 1) {
   int VAR_21 = VAR_4->format->hsub;
   int VAR_22 = VAR_4->format->vsub;
   int VAR_23, VAR_24;
   int VAR_25, VAR_26;
   int VAR_27, VAR_28;

   FUNC_10(VAR_4, VAR_10, &VAR_23, &VAR_24);
   VAR_23 *= VAR_21;
   VAR_24 *= VAR_22;

   VAR_27 = (VAR_18 * VAR_21) % VAR_23;
   VAR_28 = (VAR_19 * VAR_22) % VAR_24;
   VAR_25 = VAR_5->normal[0].x % VAR_23;
   VAR_26 = VAR_5->normal[0].y % VAR_24;





   if (VAR_25 != VAR_27 || VAR_26 != VAR_28) {
    FUNC_1("Bad CCS x/y (main %d,%d ccs %d,%d) full (main %d,%d ccs %d,%d)\n",
           VAR_25, VAR_26,
           VAR_27, VAR_28,
           VAR_5->normal[0].x,
           VAR_5->normal[0].y,
           VAR_18, VAR_19);
    return -VAR_2;
   }
  }
  if (VAR_10 == 0 && FUNC_5(VAR_7) &&
      (VAR_18 + VAR_13) * VAR_15 > VAR_4->pitches[VAR_10]) {
   FUNC_1("bad fb plane %d offset: 0x%x\n",
          VAR_10, VAR_4->offsets[VAR_10]);
   return -VAR_2;
  }





  VAR_5->normal[VAR_10].x = VAR_18;
  VAR_5->normal[VAR_10].y = VAR_19;

  VAR_17 = FUNC_7(VAR_3, &VAR_18, &VAR_19, VAR_4, VAR_10,
            VAR_4->pitches[VAR_10],
            VAR_0,
            VAR_12);
  VAR_17 /= VAR_12;

  if (!FUNC_13(VAR_4->modifier, VAR_10)) {
   unsigned int VAR_29, VAR_30;
   unsigned int VAR_31;
   struct drm_rect VAR_32;

   FUNC_10(VAR_4, VAR_10, &VAR_29, &VAR_30);

   VAR_6->plane[VAR_10].offset = VAR_17;
   VAR_6->plane[VAR_10].stride = FUNC_0(VAR_4->pitches[VAR_10], VAR_29 * VAR_15);
   VAR_6->plane[VAR_10].width = FUNC_0(VAR_18 + VAR_13, VAR_29);
   VAR_6->plane[VAR_10].height = FUNC_0(VAR_19 + VAR_14, VAR_30);

   VAR_5->rotated[VAR_10].pitch =
    VAR_6->plane[VAR_10].height * VAR_30;


   VAR_16 = VAR_6->plane[VAR_10].stride * VAR_6->plane[VAR_10].height;




   if (VAR_18 != 0)
    VAR_16++;


   VAR_32.x1 = VAR_18;
   VAR_32.y1 = VAR_19;
   VAR_32.x2 = VAR_18 + VAR_13;
   VAR_32.y2 = VAR_19 + VAR_14;
   FUNC_4(&VAR_32,
     VAR_6->plane[VAR_10].width * VAR_29,
     VAR_6->plane[VAR_10].height * VAR_30,
     VAR_1);
   VAR_18 = VAR_32.x1;
   VAR_19 = VAR_32.y1;


   VAR_31 = VAR_5->rotated[VAR_10].pitch / VAR_30;
   FUNC_16(VAR_29, VAR_30);





   FUNC_6(&VAR_18, &VAR_19,
       VAR_29, VAR_30,
       VAR_12, VAR_31,
       VAR_8 * VAR_12, 0);

   VAR_8 += VAR_6->plane[VAR_10].width * VAR_6->plane[VAR_10].height;





   VAR_5->rotated[VAR_10].x = VAR_18;
   VAR_5->rotated[VAR_10].y = VAR_19;
  } else {
   VAR_16 = FUNC_0((VAR_19 + VAR_14) * VAR_4->pitches[VAR_10] +
         VAR_18 * VAR_15, VAR_12);
  }


  VAR_9 = FUNC_14(VAR_9, VAR_17 + VAR_16);
 }

 if (FUNC_15(VAR_9, VAR_12) > VAR_7->base.size) {
  FUNC_1("fb too big for bo (need %llu bytes, have %zu bytes)\n",
         FUNC_15(VAR_9, VAR_12), VAR_7->base.size);
  return -VAR_2;
 }

 return 0;
}
