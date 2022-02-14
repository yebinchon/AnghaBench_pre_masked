
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcde {scalar_t__ regs; } ;
struct drm_crtc {struct drm_device* dev; } ;
struct drm_simple_display_pipe {struct drm_crtc crtc; } ;
struct drm_device {struct mcde* dev_private; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct drm_simple_display_pipe *VAR_2)
{
 struct drm_crtc *VAR_3 = &VAR_2->crtc;
 struct drm_device *VAR_4 = VAR_3->dev;
 struct mcde *VAR_5 = VAR_4->dev_private;


 FUNC_0(0, VAR_5->regs + VAR_0);

 FUNC_0(0xFFFFFFFF, VAR_5->regs + VAR_1);
}
