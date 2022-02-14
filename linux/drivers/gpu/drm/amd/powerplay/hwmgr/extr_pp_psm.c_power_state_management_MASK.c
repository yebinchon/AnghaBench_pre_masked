
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_power_state {int hardware; } ;
struct pp_hwmgr {int ps_size; struct pp_power_state* request_ps; struct pp_power_state* current_ps; } ;


 int FUNC_0 (struct pp_power_state*,struct pp_power_state*,int ) ;
 int FUNC_1 (struct pp_hwmgr*,struct pp_power_state*,struct pp_power_state*) ;
 scalar_t__ FUNC_2 (struct pp_hwmgr*) ;
 scalar_t__ FUNC_3 (struct pp_hwmgr*,int *,int *,int*) ;
 int FUNC_4 (struct pp_hwmgr*,int *,int *) ;

__attribute__((used)) static void FUNC_5(struct pp_hwmgr *VAR_0,
      struct pp_power_state *VAR_1)
{
 struct pp_power_state *VAR_2;
 struct pp_power_state *VAR_3;
 bool VAR_4;

 if (VAR_1 != ((void*)0))
  VAR_3 = VAR_1;
 else
  VAR_3 = VAR_0->request_ps;

 VAR_2 = VAR_0->current_ps;

 FUNC_1(VAR_0, VAR_3, VAR_2);
 if (VAR_2 == ((void*)0) || (0 != FUNC_3(VAR_0,
   &VAR_2->hardware, &VAR_3->hardware, &VAR_4)))
  VAR_4 = 0;

 if (!VAR_4 || FUNC_2(VAR_0)) {
  FUNC_4(VAR_0, &VAR_2->hardware, &VAR_3->hardware);
  FUNC_0(VAR_0->current_ps, VAR_0->request_ps, VAR_0->ps_size);
 }
}
