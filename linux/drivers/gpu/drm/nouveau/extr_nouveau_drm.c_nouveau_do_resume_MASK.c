
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int base; } ;
struct nouveau_drm {scalar_t__ fence; TYPE_2__ master; } ;
struct TYPE_4__ {scalar_t__ num_crtc; } ;
struct drm_device {TYPE_1__ mode_config; } ;
struct TYPE_6__ {int (* resume ) (struct nouveau_drm*) ;} ;


 int FUNC_0 (struct nouveau_drm*,char*) ;
 int FUNC_1 (struct nouveau_drm*,char*,int) ;
 int FUNC_2 (struct drm_device*,int) ;
 int FUNC_3 (struct nouveau_drm*) ;
 struct nouveau_drm* FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*,int ) ;
 TYPE_3__* FUNC_6 (struct nouveau_drm*) ;
 int FUNC_7 (struct drm_device*) ;
 int FUNC_8 (struct drm_device*) ;
 int FUNC_9 (struct nouveau_drm*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct nouveau_drm*) ;

__attribute__((used)) static int
FUNC_12(struct drm_device *VAR_0, bool VAR_1)
{
 int VAR_2 = 0;
 struct nouveau_drm *VAR_3 = FUNC_4(VAR_0);

 FUNC_0(VAR_3, "resuming object tree...\n");
 VAR_2 = FUNC_10(&VAR_3->master.base);
 if (VAR_2) {
  FUNC_1(VAR_3, "Client resume failed with error: %d\n", VAR_2);
  return VAR_2;
 }

 FUNC_0(VAR_3, "resuming fence...\n");
 if (VAR_3->fence && FUNC_6(VAR_3)->resume)
  FUNC_6(VAR_3)->resume(VAR_3);

 FUNC_8(VAR_0);

 if (VAR_0->mode_config.num_crtc) {
  FUNC_0(VAR_3, "resuming display...\n");
  FUNC_2(VAR_0, VAR_1);
  FUNC_0(VAR_3, "resuming console...\n");
  FUNC_5(VAR_0, 0);
 }

 FUNC_7(VAR_0);
 FUNC_3(VAR_3);
 FUNC_9(VAR_3);
 return 0;
}
