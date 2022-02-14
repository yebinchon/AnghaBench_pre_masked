
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int dummy; } ;
struct decon_context {int dev; int crtc; struct drm_device* drm_dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct decon_context *VAR_0,
   struct drm_device *VAR_1)
{
 VAR_0->drm_dev = VAR_1;

 FUNC_0(VAR_0->crtc);

 return FUNC_1(VAR_1, VAR_0->dev);
}
