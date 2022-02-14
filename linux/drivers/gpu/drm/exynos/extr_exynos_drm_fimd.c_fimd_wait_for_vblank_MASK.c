
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fimd_context {int dev; int wait_vsync_event; int wait_vsync_queue; scalar_t__ suspended; } ;
struct exynos_drm_crtc {struct fimd_context* ctx; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ,int,int) ;

__attribute__((used)) static void FUNC_4(struct exynos_drm_crtc *VAR_1)
{
 struct fimd_context *VAR_2 = VAR_1->ctx;

 if (VAR_2->suspended)
  return;

 FUNC_2(&VAR_2->wait_vsync_event, 1);





 if (!FUNC_3(VAR_2->wait_vsync_queue,
    !FUNC_1(&VAR_2->wait_vsync_event),
    VAR_0/20))
  FUNC_0(VAR_2->dev, "vblank wait timed out.\n");
}
