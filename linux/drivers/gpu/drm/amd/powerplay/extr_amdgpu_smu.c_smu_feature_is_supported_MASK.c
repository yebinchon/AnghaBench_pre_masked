
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_feature {int feature_num; int mutex; int supported; } ;
struct smu_context {struct smu_feature smu_feature; } ;
typedef enum smu_feature_mask { ____Placeholder_smu_feature_mask } smu_feature_mask ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct smu_context*,int) ;
 int FUNC_4 (int,int ) ;

int FUNC_5(struct smu_context *VAR_0, enum smu_feature_mask VAR_1)
{
 struct smu_feature *VAR_2 = &VAR_0->smu_feature;
 int VAR_3;
 int VAR_4 = 0;

 VAR_3 = FUNC_3(VAR_0, VAR_1);
 if (VAR_3 < 0)
  return 0;

 FUNC_0(VAR_3 > VAR_2->feature_num);

 FUNC_1(&VAR_2->mutex);
 VAR_4 = FUNC_4(VAR_3, VAR_2->supported);
 FUNC_2(&VAR_2->mutex);

 return VAR_4;
}
