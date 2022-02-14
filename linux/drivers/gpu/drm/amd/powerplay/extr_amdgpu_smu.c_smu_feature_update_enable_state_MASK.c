
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct smu_context {int pm_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct smu_context*,int ,int) ;

int FUNC_1(struct smu_context *VAR_4, uint64_t VAR_5, bool VAR_6)
{
 uint32_t VAR_7 = 0, VAR_8 = 0;
 int VAR_9 = 0;

 if (!VAR_4->pm_enabled)
  return VAR_9;

 VAR_7 = (VAR_5 >> 0 ) & 0xffffffff;
 VAR_8 = (VAR_5 >> 32) & 0xffffffff;

 if (VAR_6) {
  VAR_9 = FUNC_0(VAR_4, VAR_3,
        VAR_7);
  if (VAR_9)
   return VAR_9;
  VAR_9 = FUNC_0(VAR_4, VAR_2,
        VAR_8);
  if (VAR_9)
   return VAR_9;

 } else {
  VAR_9 = FUNC_0(VAR_4, VAR_1,
        VAR_7);
  if (VAR_9)
   return VAR_9;
  VAR_9 = FUNC_0(VAR_4, VAR_0,
        VAR_8);
  if (VAR_9)
   return VAR_9;

 }

 return VAR_9;
}
