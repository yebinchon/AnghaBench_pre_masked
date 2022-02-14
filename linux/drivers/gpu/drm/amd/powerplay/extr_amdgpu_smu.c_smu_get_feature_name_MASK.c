
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_context {int dummy; } ;
typedef enum smu_feature_mask { ____Placeholder_smu_feature_mask } smu_feature_mask ;


 int VAR_0 ;
 char const** VAR_1 ;

const char *FUNC_0(struct smu_context *VAR_2, enum smu_feature_mask VAR_3)
{
 if (VAR_3 < 0 || VAR_3 >= VAR_0)
  return "unknown smu feature";
 return VAR_1[VAR_3];
}
