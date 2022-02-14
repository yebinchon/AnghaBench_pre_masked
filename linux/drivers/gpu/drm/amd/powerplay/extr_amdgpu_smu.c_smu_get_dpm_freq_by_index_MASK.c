
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct smu_context {int dummy; } ;
typedef enum smu_clk_type { ____Placeholder_smu_clk_type } smu_clk_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct smu_context*,int) ;
 int FUNC_1 (struct smu_context*,int) ;
 int FUNC_2 (struct smu_context*,int*) ;
 int FUNC_3 (struct smu_context*,int ,int) ;

int FUNC_4(struct smu_context *VAR_2, enum smu_clk_type VAR_3,
         uint16_t VAR_4, uint32_t *VAR_5)
{
 int VAR_6 = 0, VAR_7 = 0;
 uint32_t VAR_8;

 if (!VAR_5)
  return -VAR_0;

 if (!FUNC_0(VAR_2, VAR_3))
  return 0;

 VAR_7 = FUNC_1(VAR_2, VAR_3);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_8 = (uint32_t)(((VAR_7 & 0xffff) << 16) | (VAR_4 & 0xffff));

 VAR_6 = FUNC_3(VAR_2,VAR_1,
       VAR_8);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_2(VAR_2, &VAR_8);
 if (VAR_6)
  return VAR_6;



 *VAR_5 = VAR_8 & 0x7fffffff;

 return VAR_6;
}
