
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_framebuffer {TYPE_1__* format; } ;
struct TYPE_2__ {int* cpp; } ;


 int FUNC_0 (struct drm_framebuffer*) ;

__attribute__((used)) static int FUNC_1(struct drm_framebuffer *VAR_0)
{
 int VAR_1 = FUNC_0(VAR_0);

 if (VAR_1)
  return VAR_1;
 return VAR_0->format->cpp[0];
}
