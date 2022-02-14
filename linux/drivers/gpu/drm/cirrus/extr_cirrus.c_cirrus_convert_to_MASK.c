
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_framebuffer {int* pitches; int width; TYPE_1__* format; } ;
struct TYPE_2__ {int* cpp; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct drm_framebuffer *VAR_1)
{
 if (VAR_1->format->cpp[0] == 4 && VAR_1->pitches[0] > VAR_0) {
  if (VAR_1->width * 3 <= VAR_0)

   return 3;
  else

   return 2;
 }
 return 0;
}
