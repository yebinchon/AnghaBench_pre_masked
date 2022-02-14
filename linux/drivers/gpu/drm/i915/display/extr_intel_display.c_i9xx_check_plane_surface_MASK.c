
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_10__ {int x1; int y1; } ;
struct TYPE_8__ {unsigned int rotation; TYPE_4__ src; int visible; TYPE_1__* plane; } ;
struct intel_plane_state {TYPE_3__* color_plane; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_9__ {int x; int y; scalar_t__ offset; } ;
struct TYPE_7__ {int dev; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,int,int) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int*,int*,struct intel_plane_state*,int ) ;
 scalar_t__ FUNC_7 (int*,int*,struct intel_plane_state*,int ) ;
 int FUNC_8 (struct intel_plane_state*) ;
 struct drm_i915_private* FUNC_9 (int ) ;

int FUNC_10(struct intel_plane_state *VAR_2)
{
 struct drm_i915_private *VAR_3 =
  FUNC_9(VAR_2->base.plane->dev);
 int VAR_4, VAR_5;
 u32 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_8(VAR_2);
 if (VAR_7)
  return VAR_7;

 if (!VAR_2->base.visible)
  return 0;

 VAR_4 = VAR_2->base.src.x1 >> 16;
 VAR_5 = VAR_2->base.src.y1 >> 16;

 FUNC_6(&VAR_4, &VAR_5, VAR_2, 0);

 if (FUNC_0(VAR_3) >= 4)
  VAR_6 = FUNC_7(&VAR_4, &VAR_5,
           VAR_2, 0);
 else
  VAR_6 = 0;





 FUNC_4(&VAR_2->base.src,
      (VAR_4 << 16) - VAR_2->base.src.x1,
      (VAR_5 << 16) - VAR_2->base.src.y1);


 if (!FUNC_2(VAR_3) && !FUNC_1(VAR_3)) {
  unsigned int VAR_8 = VAR_2->base.rotation;
  int VAR_9 = FUNC_5(&VAR_2->base.src) >> 16;
  int VAR_10 = FUNC_3(&VAR_2->base.src) >> 16;

  if (VAR_8 & VAR_1) {
   VAR_4 += VAR_9 - 1;
   VAR_5 += VAR_10 - 1;
  } else if (VAR_8 & VAR_0) {
   VAR_4 += VAR_9 - 1;
  }
 }

 VAR_2->color_plane[0].offset = VAR_6;
 VAR_2->color_plane[0].x = VAR_4;
 VAR_2->color_plane[0].y = VAR_5;

 return 0;
}
