
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int visible; struct drm_framebuffer* fb; } ;
struct intel_plane_state {TYPE_1__ base; } ;
struct intel_crtc_state {int base; } ;
struct drm_framebuffer {scalar_t__ modifier; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int *,int ,int ,int,int) ;
 int FUNC_2 (struct intel_plane_state*) ;
 int FUNC_3 (struct intel_plane_state*) ;

__attribute__((used)) static int FUNC_4(struct intel_crtc_state *VAR_3,
         struct intel_plane_state *VAR_4)
{
 const struct drm_framebuffer *VAR_5 = VAR_4->base.fb;
 int VAR_6;

 if (VAR_5 && VAR_5->modifier != VAR_0) {
  FUNC_0("cursor cannot be tiled\n");
  return -VAR_2;
 }

 VAR_6 = FUNC_1(&VAR_4->base,
        &VAR_3->base,
        VAR_1,
        VAR_1,
        1, 1);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_2(VAR_4);
 if (VAR_6)
  return VAR_6;

 if (!VAR_4->base.visible)
  return 0;

 VAR_6 = FUNC_3(VAR_4);
 if (VAR_6)
  return VAR_6;

 return 0;
}
