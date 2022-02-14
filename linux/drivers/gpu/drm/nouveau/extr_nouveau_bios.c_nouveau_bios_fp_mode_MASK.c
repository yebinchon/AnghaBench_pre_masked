
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {size_t mode_ptr; } ;
struct nvbios {int* data; TYPE_1__ fp; } ;
struct nouveau_drm {struct nvbios vbios; } ;
struct drm_display_mode {int clock; int hdisplay; int hsync_start; int hsync_end; int htotal; int vdisplay; int vsync_start; int vsync_end; int vtotal; int type; int status; int flags; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct drm_display_mode*) ;
 int FUNC_2 (struct drm_display_mode*,int ,int) ;
 struct nouveau_drm* FUNC_3 (struct drm_device*) ;

bool FUNC_4(struct drm_device *VAR_7, struct drm_display_mode *VAR_8)
{
 struct nouveau_drm *VAR_9 = FUNC_3(VAR_7);
 struct nvbios *VAR_10 = &VAR_9->vbios;
 uint8_t *VAR_11 = &VAR_10->data[VAR_10->fp.mode_ptr];

 if (!VAR_8)
  return VAR_10->fp.mode_ptr;

 FUNC_2(VAR_8, 0, sizeof(struct drm_display_mode));






 VAR_8->clock = FUNC_0(VAR_11[7]) * 10;

 VAR_8->hdisplay = FUNC_0(VAR_11[11]) + 1;




 VAR_8->hsync_start = FUNC_0(VAR_11[17]) + 1;
 VAR_8->hsync_end = FUNC_0(VAR_11[19]) + 1;
 VAR_8->htotal = FUNC_0(VAR_11[21]) + 1;

 VAR_8->vdisplay = FUNC_0(VAR_11[25]) + 1;
 VAR_8->vsync_start = FUNC_0(VAR_11[31]) + 1;
 VAR_8->vsync_end = FUNC_0(VAR_11[33]) + 1;
 VAR_8->vtotal = FUNC_0(VAR_11[35]) + 1;
 VAR_8->flags |= (VAR_11[37] & 0x10) ?
   VAR_2 : VAR_0;
 VAR_8->flags |= (VAR_11[37] & 0x1) ?
   VAR_3 : VAR_1;





 VAR_8->status = VAR_6;
 VAR_8->type = VAR_4 | VAR_5;
 FUNC_1(VAR_8);
 return VAR_10->fp.mode_ptr;
}
