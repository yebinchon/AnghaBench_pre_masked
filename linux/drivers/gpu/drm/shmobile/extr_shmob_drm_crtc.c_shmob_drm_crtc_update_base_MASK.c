
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct shmob_drm_device {int dummy; } ;
struct drm_crtc {int y; int x; TYPE_2__* dev; } ;
struct shmob_drm_crtc {int * dma; TYPE_1__* format; struct drm_crtc crtc; } ;
struct TYPE_4__ {struct shmob_drm_device* dev_private; } ;
struct TYPE_3__ {scalar_t__ yuv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct shmob_drm_device*,int ) ;
 int FUNC_1 (struct shmob_drm_device*,int ,int) ;
 int FUNC_2 (struct shmob_drm_device*,int ,int ) ;
 int FUNC_3 (struct shmob_drm_crtc*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct shmob_drm_crtc *VAR_4)
{
 struct drm_crtc *VAR_5 = &VAR_4->crtc;
 struct shmob_drm_device *VAR_6 = VAR_5->dev->dev_private;

 FUNC_3(VAR_4, VAR_5->x, VAR_5->y);

 FUNC_2(VAR_6, VAR_2, VAR_4->dma[0]);
 if (VAR_4->format->yuv)
  FUNC_2(VAR_6, VAR_3, VAR_4->dma[1]);

 FUNC_1(VAR_6, VAR_0, FUNC_0(VAR_6, VAR_0) ^ VAR_1);
}
