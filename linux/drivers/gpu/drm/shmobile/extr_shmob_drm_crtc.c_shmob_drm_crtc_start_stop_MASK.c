
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct shmob_drm_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct shmob_drm_crtc {TYPE_2__ crtc; } ;
struct TYPE_3__ {struct shmob_drm_device* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (struct shmob_drm_device*,int ) ;
 int FUNC_2 (struct shmob_drm_device*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct shmob_drm_crtc *VAR_6, bool VAR_7)
{
 struct shmob_drm_device *VAR_8 = VAR_6->crtc.dev->dev_private;
 u32 VAR_9;

 VAR_9 = FUNC_1(VAR_8, VAR_0);
 if (VAR_7)
  FUNC_2(VAR_8, VAR_0, VAR_9 | VAR_1);
 else
  FUNC_2(VAR_8, VAR_0, VAR_9 & ~VAR_1);


 while (1) {
  VAR_9 = FUNC_1(VAR_8, VAR_4) & VAR_5;
  if ((VAR_7 && VAR_9) || (!VAR_7 && !VAR_9))
   break;

  FUNC_0();
 }

 if (!VAR_7) {

  FUNC_2(VAR_8, VAR_2, VAR_3);
 }
}
