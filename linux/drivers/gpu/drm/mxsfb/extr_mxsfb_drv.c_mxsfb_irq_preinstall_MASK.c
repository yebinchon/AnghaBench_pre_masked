
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxsfb_drm_private {int pipe; } ;
struct drm_device {struct mxsfb_drm_private* dev_private; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct drm_device *VAR_0)
{
 struct mxsfb_drm_private *VAR_1 = VAR_0->dev_private;

 FUNC_0(&VAR_1->pipe);
}
