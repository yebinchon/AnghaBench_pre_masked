
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_hwmgr {unsigned int num_vce_state_tables; struct amd_vce_state* vce_states; int pm_en; } ;
struct amd_vce_state {int dummy; } ;



__attribute__((used)) static struct amd_vce_state*
FUNC_0(void *VAR_0, unsigned VAR_1)
{
 struct pp_hwmgr *VAR_2 = VAR_0;

 if (!VAR_2 || !VAR_2->pm_en)
  return ((void*)0);

 if (VAR_1 < VAR_2->num_vce_state_tables)
  return &VAR_2->vce_states[VAR_1];
 return ((void*)0);
}
