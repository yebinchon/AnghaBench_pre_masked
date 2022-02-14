
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {struct drm_framebuffer* fb; } ;
struct intel_plane_state {TYPE_3__* color_plane; TYPE_1__ base; } ;
struct drm_framebuffer {TYPE_2__* format; } ;
struct TYPE_6__ {int x; int y; scalar_t__ offset; } ;
struct TYPE_5__ {int hsub; int vsub; } ;


 scalar_t__ FUNC_0 (int*,int*,struct intel_plane_state*,int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (struct drm_framebuffer const*,int) ;

__attribute__((used)) static bool FUNC_2(struct intel_plane_state *VAR_0,
        int VAR_1, int VAR_2, u32 VAR_3)
{
 const struct drm_framebuffer *VAR_4 = VAR_0->base.fb;
 int VAR_5 = VAR_4->format->hsub;
 int VAR_6 = VAR_4->format->vsub;
 int VAR_7 = VAR_0->color_plane[1].x;
 int VAR_8 = VAR_0->color_plane[1].y;
 u32 VAR_9 = VAR_0->color_plane[1].offset;
 u32 VAR_10 = FUNC_1(VAR_4, 1);

 while (VAR_9 >= VAR_3 && VAR_8 <= VAR_2) {
  int VAR_11, VAR_12;

  if (VAR_7 == VAR_1 && VAR_8 == VAR_2)
   break;

  if (VAR_9 == 0)
   break;

  VAR_11 = VAR_7 / VAR_5;
  VAR_12 = VAR_8 / VAR_6;
  VAR_9 = FUNC_0(&VAR_11, &VAR_12, VAR_0, 1,
              VAR_9, VAR_9 - VAR_10);
  VAR_7 = VAR_11 * VAR_5 + VAR_7 % VAR_5;
  VAR_8 = VAR_12 * VAR_6 + VAR_8 % VAR_6;
 }

 if (VAR_7 != VAR_1 || VAR_8 != VAR_2)
  return 0;

 VAR_0->color_plane[1].offset = VAR_9;
 VAR_0->color_plane[1].x = VAR_7;
 VAR_0->color_plane[1].y = VAR_8;

 return 1;
}
