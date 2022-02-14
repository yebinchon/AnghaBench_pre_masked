
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int x1; int y1; } ;
struct drm_plane_state {TYPE_2__ src; struct drm_framebuffer* fb; } ;
struct drm_gem_cma_object {unsigned long paddr; } ;
struct drm_framebuffer {unsigned long* offsets; int* pitches; TYPE_1__* format; } ;
struct TYPE_3__ {int* cpp; } ;


 int FUNC_0 (int) ;
 struct drm_gem_cma_object* FUNC_1 (struct drm_framebuffer*,int) ;

__attribute__((used)) static inline unsigned long
FUNC_2(struct drm_plane_state *VAR_0, int VAR_1)
{
 struct drm_framebuffer *VAR_2 = VAR_0->fb;
 struct drm_gem_cma_object *VAR_3;
 int VAR_4 = VAR_0->src.x1 >> 16;
 int VAR_5 = VAR_0->src.y1 >> 16;

 VAR_3 = FUNC_1(VAR_2, VAR_1);
 FUNC_0(!VAR_3);

 return VAR_3->paddr + VAR_2->offsets[VAR_1] + VAR_2->pitches[VAR_1] * VAR_5 +
        VAR_2->format->cpp[VAR_1] * VAR_4;
}
