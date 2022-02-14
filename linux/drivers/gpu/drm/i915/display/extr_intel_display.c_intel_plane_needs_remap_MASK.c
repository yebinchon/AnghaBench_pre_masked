
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {unsigned int rotation; int visible; struct drm_framebuffer* fb; int plane; } ;
struct intel_plane_state {TYPE_2__ base; } ;
struct intel_plane {scalar_t__ (* max_stride ) (struct intel_plane*,int ,int ,unsigned int) ;} ;
struct drm_framebuffer {int modifier; TYPE_1__* format; } ;
struct TYPE_3__ {int format; } ;


 scalar_t__ FUNC_0 (struct drm_framebuffer const*,int ,unsigned int) ;
 int FUNC_1 (struct intel_plane_state const*) ;
 scalar_t__ FUNC_2 (struct intel_plane*,int ,int ,unsigned int) ;
 struct intel_plane* FUNC_3 (int ) ;

__attribute__((used)) static bool FUNC_4(const struct intel_plane_state *VAR_0)
{
 struct intel_plane *VAR_1 = FUNC_3(VAR_0->base.plane);
 const struct drm_framebuffer *VAR_2 = VAR_0->base.fb;
 unsigned int VAR_3 = VAR_0->base.rotation;
 u32 VAR_4, VAR_5;





 if (!VAR_0->base.visible)
  return 0;

 if (!FUNC_1(VAR_0))
  return 0;





 VAR_4 = FUNC_0(VAR_2, 0, VAR_3);
 VAR_5 = VAR_1->max_stride(VAR_1, VAR_2->format->format,
           VAR_2->modifier, VAR_3);

 return VAR_4 > VAR_5;
}
