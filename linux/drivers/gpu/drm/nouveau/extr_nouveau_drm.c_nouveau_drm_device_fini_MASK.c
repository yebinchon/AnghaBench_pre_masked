
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_drm {int master; int client; } ;
struct TYPE_2__ {scalar_t__ num_crtc; } ;
struct drm_device {TYPE_1__ mode_config; int dev; } ;


 int FUNC_0 (struct nouveau_drm*) ;
 int FUNC_1 (struct nouveau_drm*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct nouveau_drm*) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*,int,int) ;
 int FUNC_7 (struct nouveau_drm*) ;
 struct nouveau_drm* FUNC_8 (struct drm_device*) ;
 int FUNC_9 (struct drm_device*) ;
 int FUNC_10 (struct drm_device*) ;
 int FUNC_11 (struct drm_device*) ;
 scalar_t__ FUNC_12 () ;
 int FUNC_13 (struct nouveau_drm*) ;
 int FUNC_14 (struct nouveau_drm*) ;
 int FUNC_15 (struct nouveau_drm*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;

__attribute__((used)) static void
FUNC_18(struct drm_device *VAR_0)
{
 struct nouveau_drm *VAR_1 = FUNC_8(VAR_0);

 if (FUNC_12()) {
  FUNC_17(VAR_0->dev);
  FUNC_16(VAR_0->dev);
 }

 FUNC_11(VAR_0);
 FUNC_9(VAR_0);
 FUNC_7(VAR_1);
 FUNC_13(VAR_1);
 FUNC_10(VAR_0);
 FUNC_4(VAR_1);

 if (VAR_0->mode_config.num_crtc)
  FUNC_6(VAR_0, 0, 0);
 FUNC_5(VAR_0);

 FUNC_1(VAR_1);
 FUNC_2(VAR_0);

 FUNC_14(VAR_1);
 FUNC_15(VAR_1);

 FUNC_3(&VAR_1->client);
 FUNC_3(&VAR_1->master);
 FUNC_0(VAR_1);
}
