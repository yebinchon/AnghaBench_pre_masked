
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_gpu {TYPE_1__* funcs; } ;
struct msm_drm_private {struct msm_gpu* gpu; } ;
struct drm_msm_param {scalar_t__ pipe; int value; int param; } ;
struct drm_file {int dummy; } ;
struct drm_device {struct msm_drm_private* dev_private; } ;
struct TYPE_2__ {int (* get_param ) (struct msm_gpu*,int ,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct msm_gpu*,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct drm_device *VAR_3, void *VAR_4,
  struct drm_file *VAR_5)
{
 struct msm_drm_private *VAR_6 = VAR_3->dev_private;
 struct drm_msm_param *VAR_7 = VAR_4;
 struct msm_gpu *VAR_8;




 if (VAR_7->pipe != VAR_2)
  return -VAR_0;

 VAR_8 = VAR_6->gpu;

 if (!VAR_8)
  return -VAR_1;

 return VAR_8->funcs->get_param(VAR_8, VAR_7->param, &VAR_7->value);
}
