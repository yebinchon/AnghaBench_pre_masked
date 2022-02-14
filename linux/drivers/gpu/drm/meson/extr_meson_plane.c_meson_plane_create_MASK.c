
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_plane {int dummy; } ;
struct meson_plane {struct drm_plane base; struct meson_drm* priv; } ;
struct meson_drm {struct drm_plane* primary_plane; TYPE_1__* drm; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct meson_plane* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct drm_plane*,int) ;
 int FUNC_3 (struct drm_plane*,int *) ;
 int FUNC_4 (TYPE_1__*,struct drm_plane*,int,int *,int ,int ,int *,int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_5(struct meson_drm *VAR_6)
{
 struct meson_plane *VAR_7;
 struct drm_plane *VAR_8;

 VAR_7 = FUNC_1(VAR_6->drm->dev, sizeof(*VAR_7),
       VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->priv = VAR_6;
 VAR_8 = &VAR_7->base;

 FUNC_4(VAR_6->drm, VAR_8, 0xFF,
     &VAR_3,
     VAR_5,
     FUNC_0(VAR_5),
     ((void*)0),
     VAR_0, "meson_primary_plane");

 FUNC_3(VAR_8, &VAR_4);


 FUNC_2(VAR_8, 1);

 VAR_6->primary_plane = VAR_8;

 return 0;
}
