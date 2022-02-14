
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct smu_feature {int mutex; int feature_num; int allowed; } ;
struct smu_context {int pm_enabled; struct smu_feature smu_feature; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,unsigned long*,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct smu_context*,int *,int) ;

int FUNC_5(struct smu_context *VAR_1)
{
 struct smu_feature *VAR_2 = &VAR_1->smu_feature;
 int VAR_3 = 0;
 uint32_t VAR_4[VAR_0/32];

 if (!VAR_1->pm_enabled)
  return VAR_3;
 FUNC_2(&VAR_2->mutex);
 FUNC_1(VAR_2->allowed, VAR_0);
 FUNC_3(&VAR_2->mutex);

 VAR_3 = FUNC_4(VAR_1, VAR_4,
          VAR_0/32);
 if (VAR_3)
  return VAR_3;

 FUNC_2(&VAR_2->mutex);
 FUNC_0(VAR_2->allowed, VAR_2->allowed,
        (unsigned long *)VAR_4,
        VAR_2->feature_num);
 FUNC_3(&VAR_2->mutex);

 return VAR_3;
}
