
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_plane {int type; } ;
struct dc_plane_cap {int dummy; } ;
struct amdgpu_mode_info {struct drm_plane** planes; } ;
struct amdgpu_display_manager {TYPE_2__* dc; } ;
typedef enum drm_plane_type { ____Placeholder_drm_plane_type } drm_plane_type ;
struct TYPE_3__ {int max_streams; } ;
struct TYPE_4__ {TYPE_1__ caps; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct amdgpu_display_manager*,struct drm_plane*,unsigned long,struct dc_plane_cap const*) ;
 int FUNC_2 (struct drm_plane*) ;
 struct drm_plane* FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct amdgpu_display_manager *VAR_2,
       struct amdgpu_mode_info *VAR_3, int VAR_4,
       enum drm_plane_type VAR_5,
       const struct dc_plane_cap *VAR_6)
{
 struct drm_plane *VAR_7;
 unsigned long VAR_8;
 int VAR_9 = 0;

 VAR_7 = FUNC_3(sizeof(struct drm_plane), VAR_1);
 if (!VAR_7) {
  FUNC_0("KMS: Failed to allocate plane\n");
  return -VAR_0;
 }
 VAR_7->type = VAR_5;







 VAR_8 = 1 << VAR_4;
 if (VAR_4 >= VAR_2->dc->caps.max_streams)
  VAR_8 = 0xff;

 VAR_9 = FUNC_1(VAR_2, VAR_7, VAR_8, VAR_6);

 if (VAR_9) {
  FUNC_0("KMS: Failed to initialize plane\n");
  FUNC_2(VAR_7);
  return VAR_9;
 }

 if (VAR_3)
  VAR_3->planes[VAR_4] = VAR_7;

 return VAR_9;
}
