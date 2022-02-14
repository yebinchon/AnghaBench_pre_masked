
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct smu_context {int dummy; } ;
typedef enum smu_clk_type { ____Placeholder_smu_clk_type } smu_clk_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct smu_context*,int) ;
 int FUNC_1 (struct smu_context*,int) ;
 int FUNC_2 (struct smu_context*,int ,int) ;

int FUNC_3(struct smu_context *VAR_3, enum smu_clk_type VAR_4,
       uint32_t VAR_5, uint32_t VAR_6)
{
 int VAR_7 = 0, VAR_8 = 0;
 uint32_t VAR_9;

 if (VAR_5 <= 0 && VAR_6 <= 0)
  return -VAR_0;

 if (!FUNC_0(VAR_3, VAR_4))
  return 0;

 VAR_8 = FUNC_1(VAR_3, VAR_4);
 if (VAR_8 < 0)
  return VAR_8;

 if (VAR_6 > 0) {
  VAR_9 = (uint32_t)((VAR_8 << 16) | (VAR_6 & 0xffff));
  VAR_7 = FUNC_2(VAR_3, VAR_1,
        VAR_9);
  if (VAR_7)
   return VAR_7;
 }

 if (VAR_5 > 0) {
  VAR_9 = (uint32_t)((VAR_8 << 16) | (VAR_5 & 0xffff));
  VAR_7 = FUNC_2(VAR_3, VAR_2,
        VAR_9);
  if (VAR_7)
   return VAR_7;
 }


 return VAR_7;
}
