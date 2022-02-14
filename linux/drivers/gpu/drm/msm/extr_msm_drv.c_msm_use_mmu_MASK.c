
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_drm_private {scalar_t__ is_a2xx; } ;
struct drm_device {struct msm_drm_private* dev_private; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;

bool FUNC_1(struct drm_device *VAR_1)
{
 struct msm_drm_private *VAR_2 = VAR_1->dev_private;


 return VAR_2->is_a2xx || FUNC_0(&VAR_0);
}
