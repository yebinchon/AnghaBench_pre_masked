
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_framebuffer {int width; int* pitches; } ;


 int FUNC_0 (struct drm_framebuffer*) ;

__attribute__((used)) static int FUNC_1(struct drm_framebuffer *VAR_0)
{
 int VAR_1 = FUNC_0(VAR_0);

 if (VAR_1)
  return VAR_1 * VAR_0->width;
 return VAR_0->pitches[0];
}
