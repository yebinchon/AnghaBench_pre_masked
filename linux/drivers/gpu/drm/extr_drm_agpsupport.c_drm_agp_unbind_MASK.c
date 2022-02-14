
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {TYPE_1__* agp; } ;
struct drm_agp_mem {scalar_t__ bound; int memory; } ;
struct drm_agp_binding {int handle; } ;
struct TYPE_2__ {int acquired; } ;


 int VAR_0 ;
 struct drm_agp_mem* FUNC_0 (struct drm_device*,int ) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct drm_device *VAR_1, struct drm_agp_binding *VAR_2)
{
 struct drm_agp_mem *VAR_3;
 int VAR_4;

 if (!VAR_1->agp || !VAR_1->agp->acquired)
  return -VAR_0;
 VAR_3 = FUNC_0(VAR_1, VAR_2->handle);
 if (!VAR_3 || !VAR_3->bound)
  return -VAR_0;
 VAR_4 = FUNC_1(VAR_3->memory);
 if (VAR_4 == 0)
  VAR_3->bound = 0;
 return VAR_4;
}
