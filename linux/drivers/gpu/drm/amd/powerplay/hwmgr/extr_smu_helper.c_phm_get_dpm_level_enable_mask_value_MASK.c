
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vi_dpm_table {int count; TYPE_1__* dpm_level; } ;
typedef int int32_t ;
struct TYPE_2__ {scalar_t__ enabled; } ;



int32_t FUNC_0(void *VAR_0)
{
 int32_t VAR_1;
 int32_t VAR_2 = 0;
 struct vi_dpm_table *VAR_3 = (struct vi_dpm_table *)VAR_0;

 for (VAR_1 = VAR_3->count; VAR_1 > 0; VAR_1--) {
  VAR_2 = VAR_2 << 1;
  if (VAR_3->dpm_level[VAR_1 - 1].enabled)
   VAR_2 |= 0x1;
  else
   VAR_2 &= 0xFFFFFFFE;
 }

 return VAR_2;
}
