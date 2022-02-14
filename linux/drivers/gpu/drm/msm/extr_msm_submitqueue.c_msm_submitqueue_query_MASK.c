
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_gpu_submitqueue {int dummy; } ;
struct msm_file_private {int dummy; } ;
struct drm_msm_submitqueue_query {scalar_t__ param; int id; scalar_t__ pad; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct msm_gpu_submitqueue* FUNC_0 (struct msm_file_private*,int ) ;
 int FUNC_1 (struct msm_gpu_submitqueue*) ;
 int FUNC_2 (struct msm_gpu_submitqueue*,struct drm_msm_submitqueue_query*) ;

int FUNC_3(struct drm_device *VAR_3, struct msm_file_private *VAR_4,
  struct drm_msm_submitqueue_query *VAR_5)
{
 struct msm_gpu_submitqueue *VAR_6;
 int VAR_7 = -VAR_0;

 if (VAR_5->pad)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_4, VAR_5->id);
 if (!VAR_6)
  return -VAR_1;

 if (VAR_5->param == VAR_2)
  VAR_7 = FUNC_2(VAR_6, VAR_5);

 FUNC_1(VAR_6);

 return VAR_7;
}
