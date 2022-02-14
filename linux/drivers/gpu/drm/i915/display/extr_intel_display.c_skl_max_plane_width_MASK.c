
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_framebuffer {int modifier; TYPE_1__* format; } ;
struct TYPE_2__ {int* cpp; } ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(const struct drm_framebuffer *VAR_0,
          int VAR_1,
          unsigned int VAR_2)
{
 int VAR_3 = VAR_0->format->cpp[VAR_1];

 switch (VAR_0->modifier) {
 case 133:
 case 132:
  if (VAR_3 == 8)
   return 4096;
  else
   return 5120;
 case 130:
 case 128:

 case 131:
 case 129:
  if (VAR_3 == 8)
   return 2048;
  else
   return 4096;
 default:
  FUNC_0(VAR_0->modifier);
  return 2048;
 }
}
