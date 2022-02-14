
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct smu_context {int dummy; } ;
typedef enum amd_dpm_forced_level { ____Placeholder_amd_dpm_forced_level } amd_dpm_forced_level ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct smu_context*,int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_1(struct smu_context *VAR_6,
      enum amd_dpm_forced_level VAR_7,
      uint32_t *VAR_8,
      uint32_t *VAR_9,
      uint32_t *VAR_10)
{
 int VAR_11 = 0;
 uint32_t VAR_12 = 0;

 if (VAR_7 == VAR_1) {
  if (VAR_8)
   *VAR_8 = 0;
 } else if (VAR_7 == VAR_0) {
  if (VAR_9)
   *VAR_9 = 0;
 } else if (VAR_7 == VAR_2) {
  if(VAR_8) {
   VAR_11 = FUNC_0(VAR_6, VAR_4, &VAR_12);
   if (VAR_11)
    return VAR_11;
   *VAR_8 = VAR_12 - 1;
  }

  if(VAR_9) {
   VAR_11 = FUNC_0(VAR_6, VAR_3, &VAR_12);
   if (VAR_11)
    return VAR_11;
   *VAR_9 = VAR_12 - 1;
  }

  if(VAR_10) {
   VAR_11 = FUNC_0(VAR_6, VAR_5, &VAR_12);
   if (VAR_11)
    return VAR_11;
   *VAR_10 = VAR_12 - 1;
  }
 }

 return VAR_11;
}
