
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_fence_context {int spinlock; int event; int context; int name; struct drm_device* dev; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 struct msm_fence_context* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 struct msm_fence_context* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char const*,int) ;

struct msm_fence_context *
FUNC_6(struct drm_device *VAR_2, const char *VAR_3)
{
 struct msm_fence_context *VAR_4;

 VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_4->dev = VAR_2;
 FUNC_5(VAR_4->name, VAR_3, sizeof(VAR_4->name));
 VAR_4->context = FUNC_1(1);
 FUNC_2(&VAR_4->event);
 FUNC_4(&VAR_4->spinlock);

 return VAR_4;
}
