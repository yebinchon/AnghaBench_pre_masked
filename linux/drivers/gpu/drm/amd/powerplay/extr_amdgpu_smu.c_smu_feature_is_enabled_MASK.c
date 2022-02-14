
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_feature {int feature_num; int mutex; int enabled; } ;
struct smu_context {struct smu_feature smu_feature; struct amdgpu_device* adev; } ;
struct amdgpu_device {int flags; } ;
typedef enum smu_feature_mask { ____Placeholder_smu_feature_mask } smu_feature_mask ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct smu_context*,int) ;
 int FUNC_4 (int,int ) ;

int FUNC_5(struct smu_context *VAR_1, enum smu_feature_mask VAR_2)
{
 struct amdgpu_device *VAR_3 = VAR_1->adev;
 struct smu_feature *VAR_4 = &VAR_1->smu_feature;
 int VAR_5;
 int VAR_6 = 0;

 if (VAR_3->flags & VAR_0)
  return 1;

 VAR_5 = FUNC_3(VAR_1, VAR_2);
 if (VAR_5 < 0)
  return 0;

 FUNC_0(VAR_5 > VAR_4->feature_num);

 FUNC_1(&VAR_4->mutex);
 VAR_6 = FUNC_4(VAR_5, VAR_4->enabled);
 FUNC_2(&VAR_4->mutex);

 return VAR_6;
}
