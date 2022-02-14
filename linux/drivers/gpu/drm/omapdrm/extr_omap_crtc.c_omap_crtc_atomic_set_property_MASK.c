
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u64 ;
struct omap_drm_private {struct drm_property* zorder_prop; } ;
struct drm_property {int dummy; } ;
struct drm_plane_state {void* zpos; void* rotation; } ;
struct drm_crtc_state {int state; } ;
struct drm_crtc {TYPE_2__* primary; TYPE_1__* dev; } ;
struct TYPE_4__ {struct drm_property* rotation_property; } ;
struct TYPE_3__ {struct omap_drm_private* dev_private; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_plane_state*) ;
 int FUNC_1 (struct drm_plane_state*) ;
 struct drm_plane_state* FUNC_2 (int ,TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(struct drm_crtc *VAR_1,
      struct drm_crtc_state *VAR_2,
      struct drm_property *VAR_3,
      u64 VAR_4)
{
 struct omap_drm_private *VAR_5 = VAR_1->dev->dev_private;
 struct drm_plane_state *VAR_6;







 VAR_6 = FUNC_2(VAR_2->state, VAR_1->primary);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 if (VAR_3 == VAR_1->primary->rotation_property)
  VAR_6->rotation = VAR_4;
 else if (VAR_3 == VAR_5->zorder_prop)
  VAR_6->zpos = VAR_4;
 else
  return -VAR_0;

 return 0;
}
