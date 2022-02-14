
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int x1; int y1; } ;
struct TYPE_6__ {TYPE_1__ src; struct drm_framebuffer* fb; } ;
struct intel_plane_state {TYPE_4__* color_plane; TYPE_2__ base; } ;
struct drm_framebuffer {TYPE_3__* format; } ;
struct TYPE_8__ {int x; int y; int offset; } ;
struct TYPE_7__ {int hsub; int vsub; } ;


 int FUNC_0 (int*,int*,struct intel_plane_state*,int) ;
 int FUNC_1 (int*,int*,struct intel_plane_state*,int) ;

__attribute__((used)) static int FUNC_2(struct intel_plane_state *VAR_0)
{
 const struct drm_framebuffer *VAR_1 = VAR_0->base.fb;
 int VAR_2 = VAR_0->base.src.x1 >> 16;
 int VAR_3 = VAR_0->base.src.y1 >> 16;
 int VAR_4 = VAR_1->format->hsub;
 int VAR_5 = VAR_1->format->vsub;
 int VAR_6 = VAR_2 / VAR_4;
 int VAR_7 = VAR_3 / VAR_5;
 u32 VAR_8;

 FUNC_0(&VAR_6, &VAR_7, VAR_0, 1);
 VAR_8 = FUNC_1(&VAR_6, &VAR_7, VAR_0, 1);

 VAR_0->color_plane[1].offset = VAR_8;
 VAR_0->color_plane[1].x = VAR_6 * VAR_4 + VAR_2 % VAR_4;
 VAR_0->color_plane[1].y = VAR_7 * VAR_5 + VAR_3 % VAR_5;

 return 0;
}
