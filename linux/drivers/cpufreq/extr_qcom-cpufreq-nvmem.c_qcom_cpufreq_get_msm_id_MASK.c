
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum _msm_id { ____Placeholder__msm_id } _msm_id ;
typedef enum _msm8996_version { ____Placeholder__msm8996_version } _msm8996_version ;




 scalar_t__ FUNC_0 (int *) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 (int ,int ,size_t*) ;

__attribute__((used)) static enum _msm8996_version FUNC_2(void)
{
 size_t VAR_5;
 u32 *VAR_6;
 enum _msm8996_version VAR_7;

 VAR_6 = FUNC_1(VAR_4, VAR_2, &VAR_5);
 if (FUNC_0(VAR_6))
  return VAR_3;


 VAR_6++;

 switch ((enum _msm_id)*VAR_6) {
 case 128:
 case 130:
  VAR_7 = VAR_1;
  break;
 case 129:
 case 131:
  VAR_7 = VAR_0;
  break;
 default:
  VAR_7 = VAR_3;
 }

 return VAR_7;
}
