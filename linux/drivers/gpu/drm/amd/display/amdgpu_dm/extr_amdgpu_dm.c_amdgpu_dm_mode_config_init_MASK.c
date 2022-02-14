
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct dm_atomic_state {int base; int context; } ;
struct TYPE_9__ {int atomic_obj; int dc; } ;
struct TYPE_8__ {int aper_base; } ;
struct TYPE_6__ {int mode_config_initialized; } ;
struct amdgpu_device {TYPE_4__ dm; TYPE_5__* ddev; TYPE_3__ gmc; TYPE_1__ mode_info; } ;
struct TYPE_7__ {int max_width; int max_height; int preferred_depth; int prefer_shadow; int async_page_flip; int fb_base; int * helper_private; void* funcs; } ;
struct TYPE_10__ {TYPE_2__ mode_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_4 ;
 int FUNC_4 (TYPE_5__*,int *,int *,int *) ;
 int FUNC_5 (struct dm_atomic_state*) ;
 struct dm_atomic_state* FUNC_6 (int,int ) ;

__attribute__((used)) static int FUNC_7(struct amdgpu_device *VAR_5)
{
 struct dm_atomic_state *VAR_6;
 int VAR_7;

 VAR_5->mode_info.mode_config_initialized = 1;

 VAR_5->ddev->mode_config.funcs = (void *)&VAR_3;
 VAR_5->ddev->mode_config.helper_private = &VAR_2;

 VAR_5->ddev->mode_config.max_width = 16384;
 VAR_5->ddev->mode_config.max_height = 16384;

 VAR_5->ddev->mode_config.preferred_depth = 24;
 VAR_5->ddev->mode_config.prefer_shadow = 1;

 VAR_5->ddev->mode_config.async_page_flip = 1;

 VAR_5->ddev->mode_config.fb_base = VAR_5->gmc.aper_base;

 VAR_6 = FUNC_6(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->context = FUNC_2(VAR_5->dm.dc);
 if (!VAR_6->context) {
  FUNC_5(VAR_6);
  return -VAR_0;
 }

 FUNC_3(VAR_5->dm.dc, VAR_6->context);

 FUNC_4(VAR_5->ddev,
        &VAR_5->dm.atomic_obj,
        &VAR_6->base,
        &VAR_4);

 VAR_7 = FUNC_0(VAR_5);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_1(VAR_5);
 if (VAR_7)
  return VAR_7;

 return 0;
}
