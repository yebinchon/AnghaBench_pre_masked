
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int hdisplay; int vdisplay; int hsync_start; int hsync_end; int htotal; int vsync_start; int vsync_end; int vtotal; int clock; int type; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_display_mode*,int ) ;
 int FUNC_1 (struct drm_display_mode*) ;
 struct drm_display_mode* FUNC_2 (int,int ) ;

__attribute__((used)) static struct drm_display_mode *FUNC_3(struct drm_device *VAR_2)
{
 struct drm_display_mode *VAR_3;

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->hdisplay = 864;
 VAR_3->vdisplay = 480;
 VAR_3->hsync_start = 873;
 VAR_3->hsync_end = 876;
 VAR_3->htotal = 887;
 VAR_3->vsync_start = 487;
 VAR_3->vsync_end = 490;
 VAR_3->vtotal = 499;
 VAR_3->clock = 33264;

 FUNC_1(VAR_3);
 FUNC_0(VAR_3, 0);

 VAR_3->type |= VAR_0;

 return VAR_3;
}
