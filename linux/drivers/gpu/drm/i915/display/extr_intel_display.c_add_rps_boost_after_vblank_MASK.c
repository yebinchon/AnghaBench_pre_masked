
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ flags; int func; } ;
struct wait_rps_boost {TYPE_1__ wait; struct drm_crtc* crtc; int request; } ;
struct drm_crtc {int dev; } ;
struct dma_fence {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (struct dma_fence*) ;
 int FUNC_3 (struct dma_fence*) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (struct drm_crtc*) ;
 int FUNC_5 (struct drm_crtc*) ;
 int FUNC_6 (struct drm_crtc*) ;
 struct wait_rps_boost* FUNC_7 (int,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct drm_crtc *VAR_2,
           struct dma_fence *VAR_3)
{
 struct wait_rps_boost *VAR_4;

 if (!FUNC_3(VAR_3))
  return;

 if (FUNC_0(FUNC_8(VAR_2->dev)) < 6)
  return;

 if (FUNC_4(VAR_2))
  return;

 VAR_4 = FUNC_7(sizeof(*VAR_4), VAR_0);
 if (!VAR_4) {
  FUNC_5(VAR_2);
  return;
 }

 VAR_4->request = FUNC_9(FUNC_2(VAR_3));
 VAR_4->crtc = VAR_2;

 VAR_4->wait.func = VAR_1;
 VAR_4->wait.flags = 0;

 FUNC_1(FUNC_6(VAR_2), &VAR_4->wait);
}
