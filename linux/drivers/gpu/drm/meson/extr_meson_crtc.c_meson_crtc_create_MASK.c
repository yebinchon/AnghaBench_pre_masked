
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct meson_drm {struct drm_crtc* crtc; TYPE_1__* drm; int primary_plane; } ;
struct drm_crtc {int dummy; } ;
struct meson_crtc {int enable_vd1; int enable_osd1; int viu_offset; struct drm_crtc base; struct meson_drm* priv; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 struct meson_crtc* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct drm_crtc*,int *) ;
 int FUNC_3 (TYPE_1__*,struct drm_crtc*,int ,int *,int *,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_4 (struct meson_drm*,int ) ;

int FUNC_5(struct meson_drm *VAR_11)
{
 struct meson_crtc *VAR_12;
 struct drm_crtc *VAR_13;
 int VAR_14;

 VAR_12 = FUNC_1(VAR_11->drm->dev, sizeof(*VAR_12),
      VAR_1);
 if (!VAR_12)
  return -VAR_0;

 VAR_12->priv = VAR_11;
 VAR_13 = &VAR_12->base;
 VAR_14 = FUNC_3(VAR_11->drm, VAR_13,
     VAR_11->primary_plane, ((void*)0),
     &VAR_6, "meson_crtc");
 if (VAR_14) {
  FUNC_0(VAR_11->drm->dev, "Failed to init CRTC\n");
  return VAR_14;
 }

 if (FUNC_4(VAR_11, VAR_3)) {
  VAR_12->enable_osd1 = VAR_8;
  VAR_12->enable_vd1 = VAR_9;
  VAR_12->viu_offset = VAR_2;
  FUNC_2(VAR_13, &VAR_10);
 } else {
  VAR_12->enable_osd1 = VAR_4;
  VAR_12->enable_vd1 = VAR_5;
  FUNC_2(VAR_13, &VAR_7);
 }

 VAR_11->crtc = VAR_13;

 return 0;
}
