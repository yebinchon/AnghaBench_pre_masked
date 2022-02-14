
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_gem_address_space {int dummy; } ;
struct drm_framebuffer {int * obj; TYPE_1__* format; } ;
struct TYPE_2__ {int num_planes; } ;


 int FUNC_0 (int ,struct msm_gem_address_space*) ;

void FUNC_1(struct drm_framebuffer *VAR_0,
  struct msm_gem_address_space *VAR_1)
{
 int VAR_2, VAR_3 = VAR_0->format->num_planes;

 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++)
  FUNC_0(VAR_0->obj[VAR_2], VAR_1);
}
