
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct smu_context {int dummy; } ;
typedef enum amd_dpm_forced_level { ____Placeholder_amd_dpm_forced_level } amd_dpm_forced_level ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct smu_context*,int ,int) ;
 int FUNC_1 (struct smu_context*,int) ;
 int FUNC_2 (struct smu_context*,int,int*,int*,int*) ;
 int FUNC_3 (struct smu_context*) ;

__attribute__((used)) static int FUNC_4(struct smu_context *VAR_3, enum amd_dpm_forced_level VAR_4)
{
 int VAR_5 = 0;
 uint32_t VAR_6, VAR_7, VAR_8;

 switch (VAR_4) {
 case 135:
  VAR_5 = FUNC_1(VAR_3, 1);
  break;
 case 134:
  VAR_5 = FUNC_1(VAR_3, 0);
  break;
 case 136:
 case 128:
  VAR_5 = FUNC_3(VAR_3);
  break;
 case 130:
 case 131:
 case 129:
  VAR_5 = FUNC_2(VAR_3, VAR_4,
       &VAR_6,
       &VAR_7,
       &VAR_8);
  if (VAR_5)
   return VAR_5;
  FUNC_0(VAR_3, VAR_1, 1 << VAR_6);
  FUNC_0(VAR_3, VAR_0, 1 << VAR_7);
  FUNC_0(VAR_3, VAR_2, 1 << VAR_8);
  break;
 case 133:
 case 132:
 default:
  break;
 }
 return VAR_5;
}
