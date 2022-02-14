
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct drm_rect {int x1; int y1; int x2; int y2; } ;
struct TYPE_3__ {int rotation; struct drm_rect src; struct drm_framebuffer* fb; } ;
struct intel_plane_state {TYPE_1__ base; } ;
struct drm_framebuffer {TYPE_2__* format; } ;
struct TYPE_4__ {int hsub; int vsub; int is_yuv; } ;


 int FUNC_0 (char*,int,int,int,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_rect*) ;
 int FUNC_2 (struct drm_rect*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int) ;

int FUNC_5(struct intel_plane_state *VAR_1)
{
 const struct drm_framebuffer *VAR_2 = VAR_1->base.fb;
 struct drm_rect *VAR_3 = &VAR_1->base.src;
 u32 VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 bool VAR_10 = FUNC_3(VAR_1->base.rotation);







 VAR_4 = VAR_3->x1 >> 16;
 VAR_6 = FUNC_2(VAR_3) >> 16;
 VAR_5 = VAR_3->y1 >> 16;
 VAR_7 = FUNC_1(VAR_3) >> 16;

 VAR_3->x1 = VAR_4 << 16;
 VAR_3->x2 = (VAR_4 + VAR_6) << 16;
 VAR_3->y1 = VAR_5 << 16;
 VAR_3->y2 = (VAR_5 + VAR_7) << 16;

 if (!VAR_2->format->is_yuv)
  return 0;


 if (!VAR_10) {
  VAR_8 = VAR_2->format->hsub;
  VAR_9 = VAR_2->format->vsub;
 } else {
  VAR_8 = VAR_9 = FUNC_4(VAR_2->format->hsub, VAR_2->format->vsub);
 }

 if (VAR_4 % VAR_8 || VAR_6 % VAR_8) {
  FUNC_0("src x/w (%u, %u) must be a multiple of %u for %sYUV planes\n",
         VAR_4, VAR_6, VAR_8, VAR_10 ? "rotated " : "");
  return -VAR_0;
 }

 if (VAR_5 % VAR_9 || VAR_7 % VAR_9) {
  FUNC_0("src y/h (%u, %u) must be a multiple of %u for %sYUV planes\n",
         VAR_5, VAR_7, VAR_9, VAR_10 ? "rotated " : "");
  return -VAR_0;
 }

 return 0;
}
