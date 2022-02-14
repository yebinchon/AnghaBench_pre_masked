
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {unsigned int rotation; struct drm_framebuffer* fb; } ;
struct intel_plane_state {TYPE_2__* color_plane; TYPE_1__ base; } ;
struct drm_framebuffer {TYPE_3__* format; } ;
struct TYPE_6__ {int num_planes; } ;
struct TYPE_5__ {int stride; } ;


 int FUNC_0 (struct drm_framebuffer const*,int,unsigned int) ;

u32 FUNC_1(const struct intel_plane_state *VAR_0,
       int VAR_1)
{
 const struct drm_framebuffer *VAR_2 = VAR_0->base.fb;
 unsigned int VAR_3 = VAR_0->base.rotation;
 u32 VAR_4 = VAR_0->color_plane[VAR_1].stride;

 if (VAR_1 >= VAR_2->format->num_planes)
  return 0;

 return VAR_4 / FUNC_0(VAR_2, VAR_1, VAR_3);
}
