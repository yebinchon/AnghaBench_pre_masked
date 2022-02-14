
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcde {scalar_t__ te_sync; } ;
struct drm_crtc {struct drm_device* dev; } ;
struct drm_simple_display_pipe {struct drm_crtc crtc; } ;
struct drm_device {int dev; struct mcde* dev_private; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct drm_crtc*) ;
 int FUNC_2 (struct mcde*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct drm_simple_display_pipe *VAR_1)
{
 struct drm_crtc *VAR_2 = &VAR_1->crtc;
 struct drm_device *VAR_3 = VAR_2->dev;
 struct mcde *VAR_4 = VAR_3->dev_private;

 if (VAR_4->te_sync)
  FUNC_1(VAR_2);


 FUNC_2(VAR_4, VAR_0, 1);

 FUNC_0(VAR_3->dev, "MCDE display is disabled\n");
}
