
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef unsigned int u32 ;
struct intel_rotation_info {TYPE_5__* plane; } ;
struct drm_rect {int x1; int y1; unsigned int x2; unsigned int y2; } ;
struct TYPE_9__ {unsigned int rotation; struct drm_rect src; struct drm_framebuffer* fb; TYPE_1__* plane; } ;
struct TYPE_14__ {int type; struct intel_rotation_info rotated; } ;
struct intel_plane_state {TYPE_6__* color_plane; TYPE_2__ base; TYPE_7__ view; } ;
struct intel_framebuffer {TYPE_4__* normal; } ;
struct drm_i915_private {int dummy; } ;
struct drm_framebuffer {unsigned int* pitches; TYPE_3__* format; int modifier; } ;
struct TYPE_13__ {unsigned int stride; unsigned int x; unsigned int y; scalar_t__ offset; } ;
struct TYPE_12__ {unsigned int offset; unsigned int width; unsigned int height; void* stride; } ;
struct TYPE_11__ {unsigned int x; unsigned int y; } ;
struct TYPE_10__ {int num_planes; int hsub; int vsub; unsigned int* cpp; } ;
struct TYPE_8__ {int dev; } ;


 void* FUNC_0 (unsigned int,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct drm_rect*) ;
 int FUNC_3 (struct drm_rect*,unsigned int,unsigned int,int ) ;
 int FUNC_4 (struct drm_rect*,unsigned int,unsigned int) ;
 int FUNC_5 (struct drm_rect*) ;
 scalar_t__ FUNC_6 (unsigned int) ;
 int FUNC_7 (unsigned int*,unsigned int*,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,int ) ;
 unsigned int FUNC_8 (struct drm_i915_private*,unsigned int*,unsigned int*,struct drm_framebuffer*,int,unsigned int,int ,unsigned int) ;
 int FUNC_9 (struct drm_framebuffer*,int,unsigned int*,unsigned int*) ;
 unsigned int FUNC_10 (struct drm_i915_private*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_7__*,int ,int) ;
 int FUNC_13 (unsigned int,unsigned int) ;
 struct drm_i915_private* FUNC_14 (int ) ;
 struct intel_framebuffer* FUNC_15 (struct drm_framebuffer*) ;

__attribute__((used)) static void
FUNC_16(struct intel_plane_state *VAR_4)
{
 struct drm_i915_private *VAR_5 =
  FUNC_14(VAR_4->base.plane->dev);
 struct drm_framebuffer *VAR_6 = VAR_4->base.fb;
 struct intel_framebuffer *VAR_7 = FUNC_15(VAR_6);
 struct intel_rotation_info *VAR_8 = &VAR_4->view.rotated;
 unsigned int VAR_9 = VAR_4->base.rotation;
 int VAR_10, VAR_11 = VAR_6->format->num_planes;
 unsigned int VAR_12 = FUNC_10(VAR_5);
 unsigned int VAR_13, VAR_14;
 unsigned int VAR_15, VAR_16;
 u32 VAR_17 = 0;

 FUNC_12(&VAR_4->view, 0, sizeof(VAR_4->view));
 VAR_4->view.type = FUNC_6(VAR_9) ?
  VAR_3 : VAR_2;

 VAR_13 = VAR_4->base.src.x1 >> 16;
 VAR_14 = VAR_4->base.src.y1 >> 16;
 VAR_15 = FUNC_5(&VAR_4->base.src) >> 16;
 VAR_16 = FUNC_2(&VAR_4->base.src) >> 16;

 FUNC_1(FUNC_11(VAR_6->modifier));


 FUNC_4(&VAR_4->base.src,
      -(VAR_13 << 16), -(VAR_14 << 16));


 if (FUNC_6(VAR_9))
  FUNC_3(&VAR_4->base.src,
    VAR_15 << 16, VAR_16 << 16,
    VAR_1);

 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
  unsigned int VAR_18 = VAR_10 ? VAR_6->format->hsub : 1;
  unsigned int VAR_19 = VAR_10 ? VAR_6->format->vsub : 1;
  unsigned int VAR_20 = VAR_6->format->cpp[VAR_10];
  unsigned int VAR_21, VAR_22;
  unsigned int VAR_23, VAR_24;
  unsigned int VAR_25;
  unsigned int VAR_26, VAR_27;
  u32 VAR_28;

  FUNC_9(VAR_6, VAR_10, &VAR_21, &VAR_22);

  VAR_26 = VAR_13 / VAR_18;
  VAR_27 = VAR_14 / VAR_19;
  VAR_23 = VAR_15 / VAR_18;
  VAR_24 = VAR_16 / VAR_19;





  VAR_26 += VAR_7->normal[VAR_10].x;
  VAR_27 += VAR_7->normal[VAR_10].y;

  VAR_28 = FUNC_8(VAR_5, &VAR_26, &VAR_27,
            VAR_6, VAR_10, VAR_6->pitches[VAR_10],
            VAR_0, VAR_12);
  VAR_28 /= VAR_12;

  VAR_8->plane[VAR_10].offset = VAR_28;
  VAR_8->plane[VAR_10].stride = FUNC_0(VAR_6->pitches[VAR_10],
           VAR_21 * VAR_20);
  VAR_8->plane[VAR_10].width = FUNC_0(VAR_26 + VAR_23, VAR_21);
  VAR_8->plane[VAR_10].height = FUNC_0(VAR_27 + VAR_24, VAR_22);

  if (FUNC_6(VAR_9)) {
   struct drm_rect VAR_29;


   VAR_29.x1 = VAR_26;
   VAR_29.y1 = VAR_27;
   VAR_29.x2 = VAR_26 + VAR_23;
   VAR_29.y2 = VAR_27 + VAR_24;
   FUNC_3(&VAR_29,
     VAR_8->plane[VAR_10].width * VAR_21,
     VAR_8->plane[VAR_10].height * VAR_22,
     VAR_1);
   VAR_26 = VAR_29.x1;
   VAR_27 = VAR_29.y1;

   VAR_25 = VAR_8->plane[VAR_10].height;
   VAR_4->color_plane[VAR_10].stride = VAR_25 * VAR_22;


   FUNC_13(VAR_21, VAR_22);
  } else {
   VAR_25 = VAR_8->plane[VAR_10].width;
   VAR_4->color_plane[VAR_10].stride = VAR_25 * VAR_21 * VAR_20;
  }





  FUNC_7(&VAR_26, &VAR_27,
      VAR_21, VAR_22,
      VAR_12, VAR_25,
      VAR_17 * VAR_12, 0);

  VAR_17 += VAR_8->plane[VAR_10].width * VAR_8->plane[VAR_10].height;

  VAR_4->color_plane[VAR_10].offset = 0;
  VAR_4->color_plane[VAR_10].x = VAR_26;
  VAR_4->color_plane[VAR_10].y = VAR_27;
 }
}
