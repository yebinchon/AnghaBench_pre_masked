
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_drm_private {scalar_t__ gpu; } ;
struct drm_device {struct msm_drm_private* dev_private; } ;
typedef int DEFINE_MUTEX ;


 scalar_t__ FUNC_0 (struct drm_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct drm_device *VAR_0)
{
 static DEFINE_MUTEX(VAR_1);
 struct msm_drm_private *VAR_2 = VAR_0->dev_private;

 FUNC_1(&VAR_1);

 if (!VAR_2->gpu)
  VAR_2->gpu = FUNC_0(VAR_0);

 FUNC_2(&VAR_1);
}
