
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_framebuffer {TYPE_1__* format; } ;
struct TYPE_2__ {int num_planes; } ;


 int FUNC_0 (int,TYPE_1__*,int) ;

int FUNC_1(int VAR_0,
     const struct drm_framebuffer *VAR_1, int VAR_2)
{
 if (VAR_2 >= VAR_1->format->num_planes)
  return 0;

 return FUNC_0(VAR_0, VAR_1->format, VAR_2);
}
