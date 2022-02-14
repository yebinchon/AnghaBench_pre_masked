
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct drm_plane_state {int fb; } ;
struct drm_crtc_state {int dummy; } ;
struct dm_crtc_state {int dummy; } ;
struct dc_scaling_info {int scaling_quality; int clip_rect; int dst_rect; int src_rect; } ;
struct dc_plane_state {int layer_index; int dcc; int global_alpha_value; int global_alpha; int per_pixel_alpha; int visible; int tiling_info; int stereo_format; int horizontal_mirror; int rotation; int plane_size; int format; int color_space; int address; int scaling_quality; int clip_rect; int dst_rect; int src_rect; } ;
struct dc_plane_info {int layer_index; int dcc; int global_alpha_value; int global_alpha; int per_pixel_alpha; int visible; int tiling_info; int stereo_format; int horizontal_mirror; int rotation; int plane_size; int format; int color_space; } ;
struct amdgpu_framebuffer {int dummy; } ;
struct amdgpu_device {int dummy; } ;


 int FUNC_0 (struct dm_crtc_state*,struct dc_plane_state*) ;
 int FUNC_1 (struct amdgpu_device*,struct drm_plane_state*,int ,struct dc_plane_info*,int *) ;
 int FUNC_2 (struct drm_plane_state*,struct dc_scaling_info*) ;
 int FUNC_3 (struct amdgpu_framebuffer const*,int *) ;
 struct amdgpu_framebuffer* FUNC_4 (int ) ;
 struct dm_crtc_state* FUNC_5 (struct drm_crtc_state*) ;

__attribute__((used)) static int FUNC_6(struct amdgpu_device *VAR_0,
        struct dc_plane_state *VAR_1,
        struct drm_plane_state *VAR_2,
        struct drm_crtc_state *VAR_3)
{
 struct dm_crtc_state *VAR_4 = FUNC_5(VAR_3);
 const struct amdgpu_framebuffer *VAR_5 =
  FUNC_4(VAR_2->fb);
 struct dc_scaling_info VAR_6;
 struct dc_plane_info VAR_7;
 uint64_t VAR_8;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_2, &VAR_6);
 if (VAR_9)
  return VAR_9;

 VAR_1->src_rect = VAR_6.src_rect;
 VAR_1->dst_rect = VAR_6.dst_rect;
 VAR_1->clip_rect = VAR_6.clip_rect;
 VAR_1->scaling_quality = VAR_6.scaling_quality;

 VAR_9 = FUNC_3(VAR_5, &VAR_8);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_1(VAR_0, VAR_2, VAR_8,
       &VAR_7,
       &VAR_1->address);
 if (VAR_9)
  return VAR_9;

 VAR_1->format = VAR_7.format;
 VAR_1->color_space = VAR_7.color_space;
 VAR_1->format = VAR_7.format;
 VAR_1->plane_size = VAR_7.plane_size;
 VAR_1->rotation = VAR_7.rotation;
 VAR_1->horizontal_mirror = VAR_7.horizontal_mirror;
 VAR_1->stereo_format = VAR_7.stereo_format;
 VAR_1->tiling_info = VAR_7.tiling_info;
 VAR_1->visible = VAR_7.visible;
 VAR_1->per_pixel_alpha = VAR_7.per_pixel_alpha;
 VAR_1->global_alpha = VAR_7.global_alpha;
 VAR_1->global_alpha_value = VAR_7.global_alpha_value;
 VAR_1->dcc = VAR_7.dcc;
 VAR_1->layer_index = VAR_7.layer_index;





 VAR_9 = FUNC_0(VAR_4, VAR_1);
 if (VAR_9)
  return VAR_9;

 return 0;
}
