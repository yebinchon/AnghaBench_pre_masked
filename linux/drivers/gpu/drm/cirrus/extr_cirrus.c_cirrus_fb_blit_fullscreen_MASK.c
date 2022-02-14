
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_rect {int y2; int y1; int x2; int x1; } ;
struct drm_framebuffer {int height; int width; } ;


 int FUNC_0 (struct drm_framebuffer*,struct drm_rect*) ;

__attribute__((used)) static int FUNC_1(struct drm_framebuffer *VAR_0)
{
 struct drm_rect VAR_1 = {
  .x1 = 0,
  .x2 = VAR_0->width,
  .y1 = 0,
  .y2 = VAR_0->height,
 };
 return FUNC_0(VAR_0, &VAR_1);
}
