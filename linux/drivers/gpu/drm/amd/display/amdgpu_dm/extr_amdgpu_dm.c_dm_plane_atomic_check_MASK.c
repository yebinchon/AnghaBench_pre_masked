
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_plane_state {int dummy; } ;
struct drm_plane {TYPE_1__* dev; } ;
struct dm_plane_state {int dc_state; } ;
struct dc_scaling_info {int dummy; } ;
struct dc {int dummy; } ;
struct TYPE_4__ {struct dc* dc; } ;
struct amdgpu_device {TYPE_2__ dm; } ;
struct TYPE_3__ {struct amdgpu_device* dev_private; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dc*,int ) ;
 int FUNC_1 (struct drm_plane_state*,struct dc_scaling_info*) ;
 struct dm_plane_state* FUNC_2 (struct drm_plane_state*) ;

__attribute__((used)) static int FUNC_3(struct drm_plane *VAR_2,
     struct drm_plane_state *VAR_3)
{
 struct amdgpu_device *VAR_4 = VAR_2->dev->dev_private;
 struct dc *VAR_5 = VAR_4->dm.dc;
 struct dm_plane_state *VAR_6;
 struct dc_scaling_info VAR_7;
 int VAR_8;

 VAR_6 = FUNC_2(VAR_3);

 if (!VAR_6->dc_state)
  return 0;

 VAR_8 = FUNC_1(VAR_3, &VAR_7);
 if (VAR_8)
  return VAR_8;

 if (FUNC_0(VAR_5, VAR_6->dc_state) == VAR_0)
  return 0;

 return -VAR_1;
}
