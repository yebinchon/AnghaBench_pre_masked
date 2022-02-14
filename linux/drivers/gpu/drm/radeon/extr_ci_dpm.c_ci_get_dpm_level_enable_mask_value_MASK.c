
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ci_single_dpm_table {int count; TYPE_1__* dpm_levels; } ;
struct TYPE_2__ {scalar_t__ enabled; } ;



__attribute__((used)) static u32 FUNC_0(struct ci_single_dpm_table *VAR_0)
{
 u32 VAR_1;
 u32 VAR_2 = 0;

 for (VAR_1 = VAR_0->count; VAR_1 > 0; VAR_1--) {
  VAR_2 = VAR_2 << 1;
  if (VAR_0->dpm_levels[VAR_1-1].enabled)
   VAR_2 |= 0x1;
  else
   VAR_2 &= 0xFFFFFFFE;
 }

 return VAR_2;
}
