
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* height; void* width; } ;
struct TYPE_4__ {TYPE_1__ r; void* enabled; } ;
struct drm_crtc {int dummy; } ;
struct drm_encoder {int possible_crtcs; } ;
struct drm_connector {int dummy; } ;
struct virtio_gpu_output {int index; TYPE_2__ info; struct drm_crtc crtc; struct drm_encoder enc; struct drm_connector conn; } ;
struct virtio_gpu_device {scalar_t__ has_edid; struct virtio_gpu_output* outputs; struct drm_device* ddev; } ;
struct drm_plane {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct drm_plane*) ;
 int FUNC_1 (struct drm_plane*) ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct drm_connector*) ;
 int FUNC_4 (struct drm_connector*,struct drm_encoder*) ;
 int FUNC_5 (struct drm_connector*,int *) ;
 int FUNC_6 (struct drm_device*,struct drm_connector*,int *,int ) ;
 int FUNC_7 (struct drm_connector*) ;
 int FUNC_8 (struct drm_crtc*,int *) ;
 int FUNC_9 (struct drm_device*,struct drm_crtc*,struct drm_plane*,struct drm_plane*,int *,int *) ;
 int FUNC_10 (struct drm_encoder*,int *) ;
 int FUNC_11 (struct drm_device*,struct drm_encoder*,int *,int ,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct drm_plane* FUNC_12 (struct virtio_gpu_device*,int ,int) ;

__attribute__((used)) static int FUNC_13(struct virtio_gpu_device *VAR_12, int VAR_13)
{
 struct drm_device *VAR_14 = VAR_12->ddev;
 struct virtio_gpu_output *VAR_15 = VAR_12->outputs + VAR_13;
 struct drm_connector *VAR_16 = &VAR_15->conn;
 struct drm_encoder *VAR_17 = &VAR_15->enc;
 struct drm_crtc *VAR_18 = &VAR_15->crtc;
 struct drm_plane *VAR_19, *VAR_20;

 VAR_15->index = VAR_13;
 if (VAR_13 == 0) {
  VAR_15->info.enabled = FUNC_2(1);
  VAR_15->info.r.width = FUNC_2(VAR_4);
  VAR_15->info.r.height = FUNC_2(VAR_5);
 }

 VAR_19 = FUNC_12(VAR_12, VAR_3, VAR_13);
 if (FUNC_0(VAR_19))
  return FUNC_1(VAR_19);
 VAR_20 = FUNC_12(VAR_12, VAR_2, VAR_13);
 if (FUNC_0(VAR_20))
  return FUNC_1(VAR_20);
 FUNC_9(VAR_14, VAR_18, VAR_19, VAR_20,
      &VAR_8, ((void*)0));
 FUNC_8(VAR_18, &VAR_9);

 FUNC_6(VAR_14, VAR_16, &VAR_7,
      VAR_0);
 FUNC_5(VAR_16, &VAR_6);
 if (VAR_12->has_edid)
  FUNC_3(VAR_16);

 FUNC_11(VAR_14, VAR_17, &VAR_10,
    VAR_1, ((void*)0));
 FUNC_10(VAR_17, &VAR_11);
 VAR_17->possible_crtcs = 1 << VAR_13;

 FUNC_4(VAR_16, VAR_17);
 FUNC_7(VAR_16);
 return 0;
}
