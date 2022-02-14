
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct msm_gem_address_space {int dummy; } ;
struct drm_framebuffer {scalar_t__* offsets; int * obj; } ;


 scalar_t__ FUNC_0 (int ,struct msm_gem_address_space*) ;

uint32_t FUNC_1(struct drm_framebuffer *VAR_0,
  struct msm_gem_address_space *VAR_1, int VAR_2)
{
 if (!VAR_0->obj[VAR_2])
  return 0;
 return FUNC_0(VAR_0->obj[VAR_2], VAR_1) + VAR_0->offsets[VAR_2];
}
