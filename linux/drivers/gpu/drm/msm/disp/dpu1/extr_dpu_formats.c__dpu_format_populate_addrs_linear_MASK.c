
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_gem_address_space {int dummy; } ;
struct drm_framebuffer {scalar_t__* pitches; } ;
struct dpu_hw_fmt_layout {unsigned int num_planes; scalar_t__* plane_pitch; int * plane_addr; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct drm_framebuffer*,struct msm_gem_address_space*,unsigned int) ;

__attribute__((used)) static int FUNC_2(
  struct msm_gem_address_space *VAR_2,
  struct drm_framebuffer *VAR_3,
  struct dpu_hw_fmt_layout *VAR_4)
{
 unsigned int VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_4->num_planes; ++VAR_5) {
  if (VAR_4->plane_pitch[VAR_5] > VAR_3->pitches[VAR_5]) {
   FUNC_0("plane %u expected pitch %u, fb %u\n",
    VAR_5, VAR_4->plane_pitch[VAR_5], VAR_3->pitches[VAR_5]);
   return -VAR_1;
  }
 }


 for (VAR_5 = 0; VAR_5 < VAR_4->num_planes; ++VAR_5) {
  if (VAR_2)
   VAR_4->plane_addr[VAR_5] =
    FUNC_1(VAR_3, VAR_2, VAR_5);
  if (!VAR_4->plane_addr[VAR_5]) {
   FUNC_0("failed to retrieve base addr\n");
   return -VAR_0;
  }
 }

 return 0;
}
