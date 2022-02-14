
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct pl111_drm_dev_private {int memory_bw; TYPE_1__* variant; } ;
struct drm_display_mode {unsigned long long clock; int hdisplay; int vdisplay; int htotal; int vtotal; } ;
struct drm_device {struct pl111_drm_dev_private* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;
struct TYPE_2__ {int fb_bpp; } ;


 int FUNC_0 (char*,int,int,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static enum drm_mode_status
FUNC_2(struct drm_crtc *VAR_2,
   const struct drm_display_mode *VAR_3)
{
 struct drm_device *VAR_4 = VAR_2->dev;
 struct pl111_drm_dev_private *VAR_5 = VAR_4->dev_private;
 u32 VAR_6 = VAR_5->variant->fb_bpp / 8;
 u64 VAR_7;





 VAR_7 = VAR_3->clock * 1000ULL;
 VAR_7 = VAR_7 * VAR_3->hdisplay * VAR_3->vdisplay * VAR_6;
 VAR_7 = FUNC_1(VAR_7, VAR_3->htotal * VAR_3->vtotal);





 if (VAR_5->memory_bw && (VAR_7 > VAR_5->memory_bw)) {
  FUNC_0("%d x %d @ %d Hz, %d cpp, bw %llu too fast\n",
         VAR_3->hdisplay, VAR_3->vdisplay,
         VAR_3->clock * 1000, VAR_6, VAR_7);

  return VAR_0;
 }
 FUNC_0("%d x %d @ %d Hz, %d cpp, bw %llu bytes/s OK\n",
        VAR_3->hdisplay, VAR_3->vdisplay,
        VAR_3->clock * 1000, VAR_6, VAR_7);

 return VAR_1;
}
