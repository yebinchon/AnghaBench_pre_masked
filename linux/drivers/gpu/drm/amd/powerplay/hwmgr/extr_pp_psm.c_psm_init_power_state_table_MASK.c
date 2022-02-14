
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
struct pp_power_state {unsigned int id; TYPE_2__ classification; } ;
struct pp_hwmgr {unsigned int num_ps; int ps_size; struct pp_power_state* uvd_ps; struct pp_power_state* request_ps; struct pp_power_state* current_ps; struct pp_power_state* boot_ps; TYPE_1__* hwmgr_func; struct pp_power_state* ps; } ;
struct TYPE_3__ {unsigned int (* get_num_of_pp_table_entries ) (struct pp_hwmgr*) ;int (* get_power_state_size ) (struct pp_hwmgr*) ;int (* get_pp_table_entry ) (struct pp_hwmgr*,unsigned int,struct pp_power_state*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct pp_power_state* FUNC_0 (unsigned int,int,int ) ;
 int FUNC_1 (struct pp_power_state*) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (struct pp_power_state*,struct pp_power_state*,int) ;
 int FUNC_4 (char*) ;
 unsigned int FUNC_5 (struct pp_hwmgr*) ;
 int FUNC_6 (struct pp_hwmgr*) ;
 int FUNC_7 (struct pp_hwmgr*,unsigned int,struct pp_power_state*) ;

int FUNC_8(struct pp_hwmgr *VAR_4)
{
 int VAR_5;
 unsigned int VAR_6;
 unsigned int VAR_7;
 struct pp_power_state *VAR_8;
 int VAR_9;

 if (VAR_4->hwmgr_func->get_num_of_pp_table_entries == ((void*)0))
  return 0;

 if (VAR_4->hwmgr_func->get_power_state_size == ((void*)0))
  return 0;

 VAR_4->num_ps = VAR_7 = VAR_4->hwmgr_func->get_num_of_pp_table_entries(VAR_4);

 VAR_4->ps_size = VAR_9 = VAR_4->hwmgr_func->get_power_state_size(VAR_4) +
       sizeof(struct pp_power_state);

 if (VAR_7 == 0 || VAR_9 == 0) {
  FUNC_4("Please check whether power state management is supported on this asic\n");
  return 0;
 }

 VAR_4->ps = FUNC_0(VAR_7, VAR_9, VAR_1);
 if (VAR_4->ps == ((void*)0))
  return -VAR_0;

 VAR_4->request_ps = FUNC_2(VAR_9, VAR_1);
 if (VAR_4->request_ps == ((void*)0)) {
  FUNC_1(VAR_4->ps);
  VAR_4->ps = ((void*)0);
  return -VAR_0;
 }

 VAR_4->current_ps = FUNC_2(VAR_9, VAR_1);
 if (VAR_4->current_ps == ((void*)0)) {
  FUNC_1(VAR_4->request_ps);
  FUNC_1(VAR_4->ps);
  VAR_4->request_ps = ((void*)0);
  VAR_4->ps = ((void*)0);
  return -VAR_0;
 }

 VAR_8 = VAR_4->ps;

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  VAR_5 = VAR_4->hwmgr_func->get_pp_table_entry(VAR_4, VAR_6, VAR_8);

  if (VAR_8->classification.flags & VAR_2) {
   VAR_4->boot_ps = VAR_8;
   FUNC_3(VAR_4->current_ps, VAR_8, VAR_9);
   FUNC_3(VAR_4->request_ps, VAR_8, VAR_9);
  }

  VAR_8->id = VAR_6 + 1;

  if (VAR_8->classification.flags & VAR_3)
   VAR_4->uvd_ps = VAR_8;
  VAR_8 = (struct pp_power_state *)((unsigned long)VAR_8 + VAR_9);
 }

 return 0;
}
