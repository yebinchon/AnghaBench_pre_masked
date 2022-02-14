
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x1; int y1; } ;
struct drm_plane_state {TYPE_1__ src; struct drm_framebuffer* fb; } ;
struct drm_gem_cma_object {unsigned long paddr; } ;
struct drm_framebuffer {unsigned long* offsets; int* pitches; TYPE_2__* format; } ;
struct TYPE_4__ {int hsub; int vsub; int* cpp; } ;


 int FUNC_0 (int) ;
 struct drm_gem_cma_object* FUNC_1 (struct drm_framebuffer*,int) ;
 unsigned long FUNC_2 (struct drm_plane_state*,int ) ;

__attribute__((used)) static inline unsigned long
FUNC_3(struct drm_plane_state *VAR_0)
{
 struct drm_framebuffer *VAR_1 = VAR_0->fb;
 struct drm_gem_cma_object *VAR_2;
 unsigned long VAR_3 = FUNC_2(VAR_0, 0);
 int VAR_4 = VAR_0->src.x1 >> 16;
 int VAR_5 = VAR_0->src.y1 >> 16;

 VAR_2 = FUNC_1(VAR_1, 2);
 FUNC_0(!VAR_2);

 VAR_4 /= VAR_1->format->hsub;
 VAR_5 /= VAR_1->format->vsub;

 return VAR_2->paddr + VAR_1->offsets[2] + VAR_1->pitches[2] * VAR_5 +
        VAR_1->format->cpp[2] * VAR_4 - VAR_3;
}
