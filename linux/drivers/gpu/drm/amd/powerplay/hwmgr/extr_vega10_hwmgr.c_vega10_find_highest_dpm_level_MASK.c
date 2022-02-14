
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vega10_single_dpm_table {scalar_t__ count; TYPE_1__* dpm_levels; } ;
struct TYPE_2__ {scalar_t__ enabled; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static uint32_t FUNC_1(
  struct vega10_single_dpm_table *VAR_1)
{
 uint32_t VAR_2 = 0;

 if (VAR_1->count <= VAR_0) {
  for (VAR_2 = VAR_1->count; VAR_2 > 0; VAR_2--) {
   if (VAR_1->dpm_levels[VAR_2 - 1].enabled)
    return VAR_2 - 1;
  }
 } else {
  FUNC_0("DPM Table Has Too Many Entries!");
  return VAR_0 - 1;
 }

 return VAR_2;
}
