
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_device_gfx_plane_info {int y_hot; int x_hot; int y_pos; int x_pos; int size; int stride; int height; int width; int drm_format_mod; int drm_format; } ;
struct intel_vgpu_fb_info {int y_hot; int x_hot; int y_pos; int x_pos; int size; int stride; int height; int width; int drm_format_mod; int drm_format; } ;



__attribute__((used)) static void FUNC_0(struct vfio_device_gfx_plane_info *VAR_0,
        struct intel_vgpu_fb_info *VAR_1)
{
 VAR_0->drm_format = VAR_1->drm_format;
 VAR_0->drm_format_mod = VAR_1->drm_format_mod;
 VAR_0->width = VAR_1->width;
 VAR_0->height = VAR_1->height;
 VAR_0->stride = VAR_1->stride;
 VAR_0->size = VAR_1->size;
 VAR_0->x_pos = VAR_1->x_pos;
 VAR_0->y_pos = VAR_1->y_pos;
 VAR_0->x_hot = VAR_1->x_hot;
 VAR_0->y_hot = VAR_1->y_hot;
}
