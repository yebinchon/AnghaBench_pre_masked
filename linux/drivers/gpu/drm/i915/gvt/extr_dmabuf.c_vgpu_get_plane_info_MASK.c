
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_vgpu_primary_plane_format {int base; int width; int stride; int tiled; int drm_format; int height; int base_gpa; } ;
struct intel_vgpu_fb_info {int start; int width; int stride; int size; int height; void* y_hot; void* x_hot; int y_pos; int x_pos; scalar_t__ drm_format_mod; int drm_format; int start_gpa; } ;
struct intel_vgpu_cursor_plane_format {int base; int width; int bpp; void* y_hot; void* x_hot; int y_pos; int x_pos; int drm_format; int height; int base_gpa; } ;
struct intel_vgpu {int dummy; } ;
struct drm_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;




 void* VAR_9 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct intel_vgpu*,int,int) ;
 int FUNC_2 (struct intel_vgpu*,struct intel_vgpu_cursor_plane_format*) ;
 int FUNC_3 (struct intel_vgpu*,struct intel_vgpu_primary_plane_format*) ;
 int FUNC_4 (struct intel_vgpu_fb_info*,int ,int) ;
 int FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (struct intel_vgpu_cursor_plane_format*) ;

__attribute__((used)) static int FUNC_7(struct drm_device *VAR_10,
  struct intel_vgpu *VAR_11,
  struct intel_vgpu_fb_info *VAR_12,
  int VAR_13)
{
 struct intel_vgpu_primary_plane_format VAR_14;
 struct intel_vgpu_cursor_plane_format VAR_15;
 int VAR_16, VAR_17 = 1;

 FUNC_4(VAR_12, 0, sizeof(*VAR_12));

 if (VAR_13 == VAR_2) {
  VAR_16 = FUNC_3(VAR_11, &VAR_14);
  if (VAR_16)
   return VAR_16;
  VAR_12->start = VAR_14.base;
  VAR_12->start_gpa = VAR_14.base_gpa;
  VAR_12->width = VAR_14.width;
  VAR_12->height = VAR_14.height;
  VAR_12->stride = VAR_14.stride;
  VAR_12->drm_format = VAR_14.drm_format;

  switch (VAR_14.tiled) {
  case 131:
   VAR_12->drm_format_mod = VAR_0;
   break;
  case 130:
   VAR_12->drm_format_mod = VAR_5;
   VAR_17 = 8;
   break;
  case 129:
   VAR_12->drm_format_mod = VAR_6;
   VAR_17 = 32;
   break;
  case 128:
   VAR_12->drm_format_mod = VAR_7;
   VAR_17 = 32;
   break;
  default:
   FUNC_0("invalid tiling mode: %x\n", VAR_14.tiled);
  }
 } else if (VAR_13 == VAR_1) {
  VAR_16 = FUNC_2(VAR_11, &VAR_15);
  if (VAR_16)
   return VAR_16;
  VAR_12->start = VAR_15.base;
  VAR_12->start_gpa = VAR_15.base_gpa;
  VAR_12->width = VAR_15.width;
  VAR_12->height = VAR_15.height;
  VAR_12->stride = VAR_15.width * (VAR_15.bpp / 8);
  VAR_12->drm_format = VAR_15.drm_format;
  VAR_12->drm_format_mod = 0;
  VAR_12->x_pos = VAR_15.x_pos;
  VAR_12->y_pos = VAR_15.y_pos;

  if (FUNC_6(&VAR_15)) {
   VAR_12->x_hot = VAR_15.x_hot;
   VAR_12->y_hot = VAR_15.y_hot;
  } else {
   VAR_12->x_hot = VAR_9;
   VAR_12->y_hot = VAR_9;
  }
 } else {
  FUNC_0("invalid plane id:%d\n", VAR_13);
  return -VAR_4;
 }

 VAR_12->size = VAR_12->stride * FUNC_5(VAR_12->height, VAR_17);
 if (VAR_12->size == 0) {
  FUNC_0("fb size is zero\n");
  return -VAR_4;
 }

 if (VAR_12->start & (VAR_8 - 1)) {
  FUNC_0("Not aligned fb address:0x%llx\n", VAR_12->start);
  return -VAR_3;
 }

 if (!FUNC_1(VAR_11, VAR_12->start, VAR_12->size)) {
  FUNC_0("invalid gma addr\n");
  return -VAR_3;
 }

 return 0;
}
