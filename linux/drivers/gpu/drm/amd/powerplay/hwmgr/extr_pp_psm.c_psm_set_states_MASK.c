
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_power_state {unsigned long id; } ;
struct pp_hwmgr {int num_ps; scalar_t__ ps_size; int request_ps; struct pp_power_state* ps; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct pp_power_state*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_1, unsigned long VAR_2)
{
 struct pp_power_state *VAR_3;
 int VAR_4;
 int VAR_5;

 VAR_4 = VAR_1->num_ps;

 VAR_3 = VAR_1->ps;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  if (VAR_3->id == VAR_2) {
   FUNC_0(VAR_1->request_ps, VAR_3, VAR_1->ps_size);
   return 0;
  }
  VAR_3 = (struct pp_power_state *)((unsigned long)VAR_3 + VAR_1->ps_size);
 }
 return -VAR_0;
}
