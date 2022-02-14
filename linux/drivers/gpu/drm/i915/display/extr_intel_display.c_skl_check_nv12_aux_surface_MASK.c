
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int x1; int y1; } ;
struct TYPE_5__ {unsigned int rotation; TYPE_3__ src; struct drm_framebuffer* fb; } ;
struct intel_plane_state {TYPE_2__* color_plane; TYPE_1__ base; } ;
struct drm_framebuffer {int dummy; } ;
struct TYPE_6__ {int x; int y; int offset; } ;


 int FUNC_0 (char*,int,int,int,int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int*,int*,struct intel_plane_state*,int) ;
 int FUNC_4 (int*,int*,struct intel_plane_state*,int) ;
 int FUNC_5 (struct drm_framebuffer const*,int,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct intel_plane_state *VAR_1)
{
 const struct drm_framebuffer *VAR_2 = VAR_1->base.fb;
 unsigned int VAR_3 = VAR_1->base.rotation;
 int VAR_4 = FUNC_5(VAR_2, 1, VAR_3);
 int VAR_5 = 4096;
 int VAR_6 = VAR_1->base.src.x1 >> 17;
 int VAR_7 = VAR_1->base.src.y1 >> 17;
 int VAR_8 = FUNC_2(&VAR_1->base.src) >> 17;
 int VAR_9 = FUNC_1(&VAR_1->base.src) >> 17;
 u32 VAR_10;

 FUNC_3(&VAR_6, &VAR_7, VAR_1, 1);
 VAR_10 = FUNC_4(&VAR_6, &VAR_7, VAR_1, 1);


 if (VAR_8 > VAR_4 || VAR_9 > VAR_5) {
  FUNC_0("CbCr source size %dx%d too big (limit %dx%d)\n",
         VAR_8, VAR_9, VAR_4, VAR_5);
  return -VAR_0;
 }

 VAR_1->color_plane[1].offset = VAR_10;
 VAR_1->color_plane[1].x = VAR_6;
 VAR_1->color_plane[1].y = VAR_7;

 return 0;
}
