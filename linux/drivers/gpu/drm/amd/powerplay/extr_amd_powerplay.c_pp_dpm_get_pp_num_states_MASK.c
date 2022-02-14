
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pp_states_info {int nums; int * states; } ;
struct TYPE_2__ {int ui_label; int flags; } ;
struct pp_power_state {TYPE_1__ classification; } ;
struct pp_hwmgr {int num_ps; int ps_size; int smu_lock; scalar_t__ ps; int pm_en; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int FUNC_0 (struct pp_states_info*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(void *VAR_7,
  struct pp_states_info *VAR_8)
{
 struct pp_hwmgr *VAR_9 = VAR_7;
 int VAR_10;

 FUNC_0(VAR_8, 0, sizeof(*VAR_8));

 if (!VAR_9 || !VAR_9->pm_en ||!VAR_9->ps)
  return -VAR_0;

 FUNC_1(&VAR_9->smu_lock);

 VAR_8->nums = VAR_9->num_ps;

 for (VAR_10 = 0; VAR_10 < VAR_9->num_ps; VAR_10++) {
  struct pp_power_state *VAR_11 = (struct pp_power_state *)
    ((unsigned long)VAR_9->ps + VAR_10 * VAR_9->ps_size);
  switch (VAR_11->classification.ui_label) {
  case 129:
   VAR_8->states[VAR_10] = VAR_2;
   break;
  case 130:
   VAR_8->states[VAR_10] = VAR_1;
   break;
  case 128:
   VAR_8->states[VAR_10] = VAR_5;
   break;
  default:
   if (VAR_11->classification.flags & VAR_6)
    VAR_8->states[VAR_10] = VAR_4;
   else
    VAR_8->states[VAR_10] = VAR_3;
  }
 }
 FUNC_2(&VAR_9->smu_lock);
 return 0;
}
