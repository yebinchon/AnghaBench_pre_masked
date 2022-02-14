
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct stepping_info {char stepping; char substepping; } ;
struct intel_fw_info {scalar_t__ dmc_id; char substepping; char stepping; int offset; } ;


 int VAR_0 ;

__attribute__((used)) static u32 FUNC_0(const struct intel_fw_info *VAR_1,
         unsigned int VAR_2,
         const struct stepping_info *VAR_3,
         u8 VAR_4)
{
 u32 VAR_5 = VAR_0;
 unsigned int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  if (VAR_4 > 1 && VAR_1[VAR_6].dmc_id != 0)
   continue;

  if (VAR_1[VAR_6].substepping == '*' &&
      VAR_3->stepping == VAR_1[VAR_6].stepping) {
   VAR_5 = VAR_1[VAR_6].offset;
   break;
  }

  if (VAR_3->stepping == VAR_1[VAR_6].stepping &&
      VAR_3->substepping == VAR_1[VAR_6].substepping) {
   VAR_5 = VAR_1[VAR_6].offset;
   break;
  }

  if (VAR_1[VAR_6].stepping == '*' &&
      VAR_1[VAR_6].substepping == '*') {







   VAR_5 = VAR_1[VAR_6].offset;
  }
 }

 return VAR_5;
}
