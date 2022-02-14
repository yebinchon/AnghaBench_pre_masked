
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct smu_context {int dummy; } ;
typedef enum amd_pp_sensors { ____Placeholder_amd_pp_sensors } amd_pp_sensors ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct smu_context*,int,void*,int*) ;
 int FUNC_1 (struct smu_context*,int ,int*) ;
 int FUNC_2 (struct smu_context*,int*) ;

__attribute__((used)) static int FUNC_3(struct smu_context *VAR_3,
     enum amd_pp_sensors VAR_4,
     void *VAR_5, uint32_t *VAR_6)
{
 int VAR_7 = 0;

 if(!VAR_5 || !VAR_6)
  return -VAR_0;

 switch (VAR_4) {
 case 131:
  VAR_7 = FUNC_1(VAR_3, VAR_2, (uint32_t *)VAR_5);
  *VAR_6 = 4;
  break;
 case 130:
  VAR_7 = FUNC_1(VAR_3, VAR_1, (uint32_t *)VAR_5);
  *VAR_6 = 4;
  break;
 case 128:
  VAR_7 = FUNC_2(VAR_3, (uint32_t *)VAR_5);
  *VAR_6 = 4;
  break;
 case 129:
  *(uint32_t *)VAR_5 = 0;
  *VAR_6 = 4;
  break;
 default:
  VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6);
  break;
 }

 if (VAR_7)
  *VAR_6 = 0;

 return VAR_7;
}
