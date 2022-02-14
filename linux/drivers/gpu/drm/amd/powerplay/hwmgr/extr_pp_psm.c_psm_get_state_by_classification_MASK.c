
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct pp_power_state {unsigned long id; TYPE_1__ classification; } ;
struct pp_hwmgr {int num_ps; scalar_t__ ps_size; struct pp_power_state* ps; } ;
typedef enum PP_StateClassificationFlag { ____Placeholder_PP_StateClassificationFlag } PP_StateClassificationFlag ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct pp_hwmgr *VAR_1,
     enum PP_StateClassificationFlag VAR_2,
     unsigned long *VAR_3)
{
 struct pp_power_state *VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_5 = VAR_1->num_ps;
 VAR_4 = VAR_1->ps;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  if (VAR_4->classification.flags & VAR_2) {
   *VAR_3 = VAR_4->id;
   return 0;
  }
  VAR_4 = (struct pp_power_state *)((unsigned long)VAR_4 + VAR_1->ps_size);
 }
 return -VAR_0;
}
