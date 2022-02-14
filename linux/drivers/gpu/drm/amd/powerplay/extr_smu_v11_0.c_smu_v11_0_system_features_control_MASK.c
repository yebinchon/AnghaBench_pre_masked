
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct smu_feature {int feature_num; int supported; int enabled; } ;
struct smu_context {scalar_t__ pm_enabled; struct smu_feature smu_feature; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned long*,int ) ;
 int FUNC_1 (struct smu_context*,int *,int) ;
 int FUNC_2 (struct smu_context*,int ) ;

__attribute__((used)) static int FUNC_3(struct smu_context *VAR_2,
          bool VAR_3)
{
 struct smu_feature *VAR_4 = &VAR_2->smu_feature;
 uint32_t VAR_5[2];
 int VAR_6 = 0;

 if (VAR_2->pm_enabled) {
  VAR_6 = FUNC_2(VAR_2, (VAR_3 ? VAR_1 :
          VAR_0));
  if (VAR_6)
   return VAR_6;
 }

 VAR_6 = FUNC_1(VAR_2, VAR_5, 2);
 if (VAR_6)
  return VAR_6;

 FUNC_0(VAR_4->enabled, (unsigned long *)&VAR_5,
      VAR_4->feature_num);
 FUNC_0(VAR_4->supported, (unsigned long *)&VAR_5,
      VAR_4->feature_num);

 return VAR_6;
}
