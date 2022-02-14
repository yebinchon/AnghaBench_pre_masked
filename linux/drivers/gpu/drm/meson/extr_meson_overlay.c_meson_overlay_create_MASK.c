
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_plane {int dummy; } ;
struct meson_overlay {struct drm_plane base; struct meson_drm* priv; } ;
struct meson_drm {struct drm_plane* overlay_plane; TYPE_1__* drm; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct meson_overlay* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (struct drm_plane*,int ) ;
 int FUNC_4 (struct drm_plane*,int *) ;
 int FUNC_5 (TYPE_1__*,struct drm_plane*,int,int *,int ,int ,int *,int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_6(struct meson_drm *VAR_6)
{
 struct meson_overlay *VAR_7;
 struct drm_plane *VAR_8;

 FUNC_1("\n");

 VAR_7 = FUNC_2(VAR_6->drm->dev, sizeof(*VAR_7),
       VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->priv = VAR_6;
 VAR_8 = &VAR_7->base;

 FUNC_5(VAR_6->drm, VAR_8, 0xFF,
     &VAR_3,
     VAR_5,
     FUNC_0(VAR_5),
     ((void*)0),
     VAR_0, "meson_overlay_plane");

 FUNC_4(VAR_8, &VAR_4);


 FUNC_3(VAR_8, 0);

 VAR_6->overlay_plane = VAR_8;

 FUNC_1("\n");

 return 0;
}
