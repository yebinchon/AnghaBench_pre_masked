
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int height; int width; } ;
struct TYPE_4__ {TYPE_1__ r; } ;
struct virtio_gpu_output {TYPE_2__ info; } ;
struct drm_display_mode {int type; int hdisplay; int vdisplay; } ;
struct drm_connector {int dummy; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct virtio_gpu_output* FUNC_1 (struct drm_connector*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static enum drm_mode_status FUNC_3(struct drm_connector *VAR_5,
          struct drm_display_mode *VAR_6)
{
 struct virtio_gpu_output *VAR_7 =
  FUNC_1(VAR_5);
 int VAR_8, VAR_9;

 VAR_8 = FUNC_2(VAR_7->info.r.width);
 VAR_9 = FUNC_2(VAR_7->info.r.height);

 if (!(VAR_6->type & VAR_0))
  return VAR_2;
 if (VAR_6->hdisplay == VAR_3 && VAR_6->vdisplay == VAR_4)
  return VAR_2;
 if (VAR_6->hdisplay <= VAR_8 && VAR_6->hdisplay >= VAR_8 - 16 &&
     VAR_6->vdisplay <= VAR_9 && VAR_6->vdisplay >= VAR_9 - 16)
  return VAR_2;

 FUNC_0("del mode: %dx%d\n", VAR_6->hdisplay, VAR_6->vdisplay);
 return VAR_1;
}
