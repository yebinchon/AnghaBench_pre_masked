
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct msm_gem_address_space {int dummy; } ;
struct TYPE_4__ {int id; } ;
struct drm_framebuffer {TYPE_2__ base; int * obj; TYPE_1__* format; } ;
struct TYPE_3__ {int num_planes; } ;


 int FUNC_0 (char*,int ,int,int ,int) ;
 int FUNC_1 (int ,struct msm_gem_address_space*,int *) ;

int FUNC_2(struct drm_framebuffer *VAR_0,
  struct msm_gem_address_space *VAR_1)
{
 int VAR_2, VAR_3, VAR_4 = VAR_0->format->num_planes;
 uint64_t VAR_5;

 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  VAR_2 = FUNC_1(VAR_0->obj[VAR_3], VAR_1, &VAR_5);
  FUNC_0("FB[%u]: iova[%d]: %08llx (%d)", VAR_0->base.id, VAR_3, VAR_5, VAR_2);
  if (VAR_2)
   return VAR_2;
 }

 return 0;
}
