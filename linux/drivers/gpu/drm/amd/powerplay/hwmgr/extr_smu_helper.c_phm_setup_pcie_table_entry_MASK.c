
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct vi_dpm_table {TYPE_1__* dpm_level; } ;
struct TYPE_2__ {size_t value; size_t param1; int enabled; } ;



void FUNC_0(
 void *VAR_0,
 uint32_t VAR_1, uint32_t VAR_2,
 uint32_t VAR_3)
{
 struct vi_dpm_table *VAR_4 = (struct vi_dpm_table *)VAR_0;
 VAR_4->dpm_level[VAR_1].value = VAR_2;
 VAR_4->dpm_level[VAR_1].param1 = VAR_3;
 VAR_4->dpm_level[VAR_1].enabled = 1;
}
