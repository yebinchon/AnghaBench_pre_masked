
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct shmob_drm_device {int dummy; } ;
struct drm_crtc {TYPE_1__* dev; } ;
struct shmob_drm_crtc {int started; struct drm_crtc crtc; } ;
struct TYPE_2__ {struct shmob_drm_device* dev_private; } ;


 int VAR_0 ;
 int FUNC_0 (struct shmob_drm_device*,int ,int ) ;
 int FUNC_1 (struct shmob_drm_device*) ;
 int FUNC_2 (struct shmob_drm_crtc*,int) ;

__attribute__((used)) static void FUNC_3(struct shmob_drm_crtc *VAR_1)
{
 struct drm_crtc *VAR_2 = &VAR_1->crtc;
 struct shmob_drm_device *VAR_3 = VAR_2->dev->dev_private;

 if (!VAR_1->started)
  return;


 FUNC_2(VAR_1, 0);


 FUNC_0(VAR_3, VAR_0, 0);


 FUNC_1(VAR_3);

 VAR_1->started = 0;
}
