
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lvds_init_run; scalar_t__ last_script_invoc; } ;
struct TYPE_4__ {scalar_t__ crtchead; } ;
struct nvbios {int major_version; TYPE_1__ fp; scalar_t__ execute; TYPE_2__ state; } ;
struct nouveau_drm {struct nvbios vbios; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct drm_device*,struct nvbios*) ;
 struct nouveau_drm* FUNC_1 (struct drm_device*) ;

int
FUNC_2(struct drm_device *VAR_0)
{
 struct nouveau_drm *VAR_1 = FUNC_1(VAR_0);
 struct nvbios *VAR_2 = &VAR_1->vbios;
 int VAR_3 = 0;


 VAR_2->state.crtchead = 0;

 if (VAR_2->major_version < 5)
  FUNC_0(VAR_0, VAR_2);

 if (VAR_2->execute) {
  VAR_2->fp.last_script_invoc = 0;
  VAR_2->fp.lvds_init_run = 0;
 }

 return VAR_3;
}
