
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct shmob_drm_encoder {int dpms; } ;
struct shmob_drm_connector {int dummy; } ;
struct shmob_drm_device {struct shmob_drm_connector connector; } ;
struct drm_encoder {TYPE_1__* dev; } ;
struct TYPE_2__ {struct shmob_drm_device* dev_private; } ;


 int FUNC_0 (struct shmob_drm_connector*,int) ;
 struct shmob_drm_encoder* FUNC_1 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_2(struct drm_encoder *VAR_0, int VAR_1)
{
 struct shmob_drm_encoder *VAR_2 = FUNC_1(VAR_0);
 struct shmob_drm_device *VAR_3 = VAR_0->dev->dev_private;
 struct shmob_drm_connector *VAR_4 = &VAR_3->connector;

 if (VAR_2->dpms == VAR_1)
  return;

 FUNC_0(VAR_4, VAR_1);

 VAR_2->dpms = VAR_1;
}
