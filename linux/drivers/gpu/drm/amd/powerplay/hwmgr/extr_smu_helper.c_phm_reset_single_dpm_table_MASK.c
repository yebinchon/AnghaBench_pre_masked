
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vi_dpm_table {int count; TYPE_1__* dpm_level; } ;
struct TYPE_2__ {int enabled; } ;



int FUNC_0(void *VAR_0,
    uint32_t VAR_1, int VAR_2)
{
 int VAR_3;

 struct vi_dpm_table *VAR_4 = (struct vi_dpm_table *)VAR_0;

 VAR_4->count = VAR_1 > VAR_2 ? VAR_2 : VAR_1;

 for (VAR_3 = 0; VAR_3 < VAR_4->count; VAR_3++)
  VAR_4->dpm_level[VAR_3].enabled = 0;

 return 0;
}
