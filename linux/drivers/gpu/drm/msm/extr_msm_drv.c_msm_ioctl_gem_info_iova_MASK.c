
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct msm_drm_private {TYPE_1__* gpu; } ;
struct drm_gem_object {int dummy; } ;
struct drm_device {struct msm_drm_private* dev_private; } ;
struct TYPE_2__ {int aspace; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_gem_object*,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct drm_device *VAR_1,
  struct drm_gem_object *VAR_2, uint64_t *VAR_3)
{
 struct msm_drm_private *VAR_4 = VAR_1->dev_private;

 if (!VAR_4->gpu)
  return -VAR_0;





 return FUNC_0(VAR_2, VAR_4->gpu->aspace, VAR_3);
}
