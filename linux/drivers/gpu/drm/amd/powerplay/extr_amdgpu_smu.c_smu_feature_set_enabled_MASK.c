
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
struct smu_feature {int feature_num; int mutex; int enabled; } ;
struct smu_context {struct smu_feature smu_feature; } ;
typedef enum smu_feature_mask { ____Placeholder_smu_feature_mask } smu_feature_mask ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct smu_context*,int) ;
 int FUNC_4 (struct smu_context*,unsigned long long,int) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int,int ) ;

int FUNC_7(struct smu_context *VAR_1, enum smu_feature_mask VAR_2,
       bool VAR_3)
{
 struct smu_feature *VAR_4 = &VAR_1->smu_feature;
 int VAR_5;
 uint64_t VAR_6 = 0;
 int VAR_7 = 0;

 VAR_5 = FUNC_3(VAR_1, VAR_2);
 if (VAR_5 < 0)
  return -VAR_0;

 FUNC_0(VAR_5 > VAR_4->feature_num);

 VAR_6 = 1ULL << VAR_5;

 FUNC_1(&VAR_4->mutex);
 VAR_7 = FUNC_4(VAR_1, VAR_6, VAR_3);
 if (VAR_7)
  goto failed;

 if (VAR_3)
  FUNC_6(VAR_5, VAR_4->enabled);
 else
  FUNC_5(VAR_5, VAR_4->enabled);

failed:
 FUNC_2(&VAR_4->mutex);

 return VAR_7;
}
