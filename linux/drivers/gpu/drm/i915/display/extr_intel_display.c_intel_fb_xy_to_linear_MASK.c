
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {struct drm_framebuffer* fb; } ;
struct intel_plane_state {TYPE_3__* color_plane; TYPE_1__ base; } ;
struct drm_framebuffer {TYPE_2__* format; } ;
struct TYPE_6__ {unsigned int stride; } ;
struct TYPE_5__ {unsigned int* cpp; } ;



u32 FUNC_0(int VAR_0, int VAR_1,
     const struct intel_plane_state *VAR_2,
     int VAR_3)
{
 const struct drm_framebuffer *VAR_4 = VAR_2->base.fb;
 unsigned int VAR_5 = VAR_4->format->cpp[VAR_3];
 unsigned int VAR_6 = VAR_2->color_plane[VAR_3].stride;

 return VAR_1 * VAR_6 + VAR_0 * VAR_5;
}
