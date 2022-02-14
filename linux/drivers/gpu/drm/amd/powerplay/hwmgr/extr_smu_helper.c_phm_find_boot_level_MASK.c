
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct vi_dpm_table {size_t count; TYPE_1__* dpm_level; } ;
struct TYPE_2__ {size_t value; } ;


 int VAR_0 ;

int FUNC_0(void *VAR_1,
  uint32_t VAR_2, uint32_t *VAR_3)
{
 int VAR_4 = -VAR_0;
 uint32_t VAR_5;
 struct vi_dpm_table *VAR_6 = (struct vi_dpm_table *)VAR_1;

 for (VAR_5 = 0; VAR_5 < VAR_6->count; VAR_5++) {
  if (VAR_2 == VAR_6->dpm_level[VAR_5].value) {
   *VAR_3 = VAR_5;
   VAR_4 = 0;
  }
 }

 return VAR_4;
}
