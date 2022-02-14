
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct rcar_du_plane_state {int colorkey; } ;
struct TYPE_5__ {struct drm_property* colorkey; } ;
struct rcar_du_device {TYPE_2__ props; } ;
struct drm_property {int dummy; } ;
struct drm_plane_state {int dummy; } ;
struct drm_plane {int dummy; } ;
struct TYPE_6__ {TYPE_1__* group; } ;
struct TYPE_4__ {struct rcar_du_device* dev; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (struct drm_plane*) ;
 struct rcar_du_plane_state* FUNC_1 (struct drm_plane_state*) ;

__attribute__((used)) static int FUNC_2(struct drm_plane *VAR_1,
          struct drm_plane_state *VAR_2,
          struct drm_property *VAR_3,
          uint64_t VAR_4)
{
 struct rcar_du_plane_state *VAR_5 = FUNC_1(VAR_2);
 struct rcar_du_device *VAR_6 = FUNC_0(VAR_1)->group->dev;

 if (VAR_3 == VAR_6->props.colorkey)
  VAR_5->colorkey = VAR_4;
 else
  return -VAR_0;

 return 0;
}
