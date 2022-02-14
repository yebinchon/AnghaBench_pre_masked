
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_file_private {int dummy; } ;
struct msm_drm_private {struct msm_file_private* lastctx; } ;
struct drm_file {struct msm_file_private* driver_priv; } ;
struct drm_device {int struct_mutex; struct msm_drm_private* dev_private; } ;


 int FUNC_0 (struct msm_file_private*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct drm_device *VAR_0, struct drm_file *VAR_1)
{
 struct msm_drm_private *VAR_2 = VAR_0->dev_private;
 struct msm_file_private *VAR_3 = VAR_1->driver_priv;

 FUNC_1(&VAR_0->struct_mutex);
 if (VAR_3 == VAR_2->lastctx)
  VAR_2->lastctx = ((void*)0);
 FUNC_2(&VAR_0->struct_mutex);

 FUNC_0(VAR_3);
}
