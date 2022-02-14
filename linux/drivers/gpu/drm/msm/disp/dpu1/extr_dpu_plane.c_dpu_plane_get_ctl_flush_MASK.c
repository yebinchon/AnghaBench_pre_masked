
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drm_plane {int dummy; } ;
struct TYPE_2__ {int (* get_bitmask_sspp ) (struct dpu_hw_ctl*,int ) ;} ;
struct dpu_hw_ctl {TYPE_1__ ops; } ;


 int FUNC_0 (struct drm_plane*) ;
 int FUNC_1 (struct dpu_hw_ctl*,int ) ;

void FUNC_2(struct drm_plane *VAR_0, struct dpu_hw_ctl *VAR_1,
  u32 *VAR_2)
{
 *VAR_2 = VAR_1->ops.get_bitmask_sspp(VAR_1, FUNC_0(VAR_0));
}
