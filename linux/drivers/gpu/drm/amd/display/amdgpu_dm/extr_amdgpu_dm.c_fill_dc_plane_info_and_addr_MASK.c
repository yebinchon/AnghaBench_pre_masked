
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct drm_plane_state {int rotation; struct drm_framebuffer* fb; } ;
struct drm_framebuffer {TYPE_1__* format; } ;
struct drm_format_name_buf {int dummy; } ;
struct dc_plane_info {int visible; int global_alpha_value; int global_alpha; int per_pixel_alpha; int dcc; int plane_size; int tiling_info; void* rotation; int format; int color_space; scalar_t__ layer_index; int stereo_format; } ;
struct dc_plane_address {int dummy; } ;
struct amdgpu_framebuffer {int dummy; } ;
struct amdgpu_device {int dummy; } ;
struct TYPE_2__ {int format; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int,struct drm_format_name_buf*) ;
 int FUNC_2 (struct drm_plane_state const*,int *,int *,int *) ;
 int FUNC_3 (struct amdgpu_device*,struct amdgpu_framebuffer const*,int ,void*,int const,int *,int *,int *,struct dc_plane_address*) ;
 int FUNC_4 (struct drm_plane_state const*,int ,int *) ;
 int FUNC_5 (struct dc_plane_info*,int ,int) ;
 struct amdgpu_framebuffer* FUNC_6 (struct drm_framebuffer*) ;

__attribute__((used)) static int
FUNC_7(struct amdgpu_device *VAR_15,
       const struct drm_plane_state *VAR_16,
       const uint64_t VAR_17,
       struct dc_plane_info *VAR_18,
       struct dc_plane_address *VAR_19)
{
 const struct drm_framebuffer *VAR_20 = VAR_16->fb;
 const struct amdgpu_framebuffer *VAR_21 =
  FUNC_6(VAR_16->fb);
 struct drm_format_name_buf VAR_22;
 int VAR_23;

 FUNC_5(VAR_18, 0, sizeof(*VAR_18));

 switch (VAR_20->format->format) {
 case 139:
  VAR_18->format =
   VAR_11;
  break;
 case 136:
  VAR_18->format = VAR_12;
  break;
 case 132:
 case 140:
  VAR_18->format = VAR_10;
  break;
 case 133:
 case 141:
  VAR_18->format = VAR_9;
  break;
 case 135:
 case 143:
  VAR_18->format = VAR_7;
  break;
 case 134:
 case 142:
  VAR_18->format = VAR_8;
  break;
 case 137:
  VAR_18->format = VAR_13;
  break;
 case 138:
  VAR_18->format = VAR_14;
  break;
 default:
  FUNC_0(
   "Unsupported screen format %s\n",
   FUNC_1(VAR_20->format->format, &VAR_22));
  return -VAR_1;
 }

 switch (VAR_16->rotation & VAR_0) {
 case 131:
  VAR_18->rotation = VAR_3;
  break;
 case 128:
  VAR_18->rotation = VAR_6;
  break;
 case 130:
  VAR_18->rotation = VAR_4;
  break;
 case 129:
  VAR_18->rotation = VAR_5;
  break;
 default:
  VAR_18->rotation = VAR_3;
  break;
 }

 VAR_18->visible = 1;
 VAR_18->stereo_format = VAR_2;

 VAR_18->layer_index = 0;

 VAR_23 = FUNC_4(VAR_16, VAR_18->format,
       &VAR_18->color_space);
 if (VAR_23)
  return VAR_23;

 VAR_23 = FUNC_3(VAR_15, VAR_21, VAR_18->format,
        VAR_18->rotation, VAR_17,
        &VAR_18->tiling_info,
        &VAR_18->plane_size,
        &VAR_18->dcc, VAR_19);
 if (VAR_23)
  return VAR_23;

 FUNC_2(
  VAR_16, &VAR_18->per_pixel_alpha,
  &VAR_18->global_alpha, &VAR_18->global_alpha_value);

 return 0;
}
