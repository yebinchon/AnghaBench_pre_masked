
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tve200_drm_dev_private {scalar_t__ regs; } ;
struct drm_crtc {struct drm_device* dev; } ;
struct drm_simple_display_pipe {struct drm_crtc crtc; } ;
struct drm_device {struct tve200_drm_dev_private* dev_private; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct drm_simple_display_pipe *VAR_1)
{
 struct drm_crtc *VAR_2 = &VAR_1->crtc;
 struct drm_device *VAR_3 = VAR_2->dev;
 struct tve200_drm_dev_private *VAR_4 = VAR_3->dev_private;

 FUNC_0(0, VAR_4->regs + VAR_0);
}
