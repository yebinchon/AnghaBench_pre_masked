
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pl111_drm_dev_private {scalar_t__ ienb; scalar_t__ regs; } ;
struct drm_crtc {struct drm_device* dev; } ;
struct drm_simple_display_pipe {struct drm_crtc crtc; } ;
struct drm_device {struct pl111_drm_dev_private* dev_private; } ;


 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct drm_simple_display_pipe *VAR_0)
{
 struct drm_crtc *VAR_1 = &VAR_0->crtc;
 struct drm_device *VAR_2 = VAR_1->dev;
 struct pl111_drm_dev_private *VAR_3 = VAR_2->dev_private;

 FUNC_0(0, VAR_3->regs + VAR_3->ienb);
}
