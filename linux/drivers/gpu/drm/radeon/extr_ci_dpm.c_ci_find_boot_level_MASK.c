
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct ci_single_dpm_table {size_t count; TYPE_1__* dpm_levels; } ;
struct TYPE_2__ {size_t value; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct ci_single_dpm_table *VAR_1,
         u32 VAR_2, u32 *VAR_3)
{
 u32 VAR_4;
 int VAR_5 = -VAR_0;

 for(VAR_4 = 0; VAR_4 < VAR_1->count; VAR_4++) {
  if (VAR_2 == VAR_1->dpm_levels[VAR_4].value) {
   *VAR_3 = VAR_4;
   VAR_5 = 0;
  }
 }

 return VAR_5;
}
