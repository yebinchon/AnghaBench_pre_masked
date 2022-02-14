
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct shmob_drm_device {int dummy; } ;
struct drm_crtc {TYPE_1__* dev; } ;
struct TYPE_2__ {struct shmob_drm_device* dev_private; } ;


 int FUNC_0 (struct shmob_drm_device*,int) ;

__attribute__((used)) static void FUNC_1(struct drm_crtc *VAR_0)
{
 struct shmob_drm_device *VAR_1 = VAR_0->dev->dev_private;

 FUNC_0(VAR_1, 0);
}
