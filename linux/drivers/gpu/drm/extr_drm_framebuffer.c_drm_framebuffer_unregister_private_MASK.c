
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_framebuffer {int base; struct drm_device* dev; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct drm_device*,int *) ;

void FUNC_1(struct drm_framebuffer *VAR_0)
{
 struct drm_device *VAR_1;

 if (!VAR_0)
  return;

 VAR_1 = VAR_0->dev;


 FUNC_0(VAR_1, &VAR_0->base);
}
