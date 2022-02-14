
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_framebuffer {TYPE_1__* format; } ;
struct TYPE_2__ {int format; } ;




__attribute__((used)) static bool FUNC_0(const struct drm_framebuffer *VAR_0)
{
 if (!VAR_0)
  return 0;

 switch (VAR_0->format->format) {
 case 128:
  return 0;
 default:
  return 1;
 }
}
