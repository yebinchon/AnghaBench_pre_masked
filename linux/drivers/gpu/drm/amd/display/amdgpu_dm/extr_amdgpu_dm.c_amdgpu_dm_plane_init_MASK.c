
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct drm_plane {TYPE_3__* funcs; int type; } ;
struct TYPE_5__ {scalar_t__ nv12; } ;
struct dc_plane_cap {TYPE_2__ pixel_format_support; scalar_t__ per_pixel_alpha; } ;
struct amdgpu_display_manager {TYPE_1__* adev; } ;
struct TYPE_6__ {int (* reset ) (struct drm_plane*) ;} ;
struct TYPE_4__ {int ddev; } ;


 int FUNC_0 (int *) ;
 unsigned int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct drm_plane*) ;
 int FUNC_3 (struct drm_plane*,unsigned int) ;
 int FUNC_4 (struct drm_plane*,unsigned int,unsigned int,int ,int ) ;
 int FUNC_5 (struct drm_plane*,int *) ;
 int FUNC_6 (int ,struct drm_plane*,unsigned long,int *,int *,int,int *,int ,int *) ;
 int FUNC_7 (struct drm_plane*,struct dc_plane_cap const*,int *,int ) ;
 int FUNC_8 (struct drm_plane*) ;

__attribute__((used)) static int FUNC_9(struct amdgpu_display_manager *VAR_11,
    struct drm_plane *VAR_12,
    unsigned long VAR_13,
    const struct dc_plane_cap *VAR_14)
{
 uint32_t VAR_15[32];
 int VAR_16;
 int VAR_17 = -VAR_8;

 VAR_16 = FUNC_7(VAR_12, VAR_14, VAR_15,
     FUNC_0(VAR_15));

 VAR_17 = FUNC_6(VAR_11->adev->ddev, VAR_12, VAR_13,
           &VAR_9, VAR_15, VAR_16,
           ((void*)0), VAR_12->type, ((void*)0));
 if (VAR_17)
  return VAR_17;

 if (VAR_12->type == VAR_6 &&
     VAR_14 && VAR_14->per_pixel_alpha) {
  unsigned int VAR_18 = FUNC_1(VAR_4) |
       FUNC_1(VAR_5);

  FUNC_2(VAR_12);
  FUNC_3(VAR_12, VAR_18);
 }

 if (VAR_12->type == VAR_7 &&
     VAR_14 && VAR_14->pixel_format_support.nv12) {

  FUNC_4(
   VAR_12,
   FUNC_1(VAR_0) |
   FUNC_1(VAR_1),
   FUNC_1(VAR_3) |
   FUNC_1(VAR_2),
   VAR_1, VAR_3);
 }

 FUNC_5(VAR_12, &VAR_10);


 if (VAR_12->funcs->reset)
  VAR_12->funcs->reset(VAR_12);

 return 0;
}
