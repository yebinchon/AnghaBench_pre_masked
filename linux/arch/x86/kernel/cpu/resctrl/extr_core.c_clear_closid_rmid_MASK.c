
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resctrl_pqr_state {scalar_t__ cur_rmid; scalar_t__ cur_closid; scalar_t__ default_rmid; scalar_t__ default_closid; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct resctrl_pqr_state* FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(int VAR_2)
{
 struct resctrl_pqr_state *VAR_3 = FUNC_0(&VAR_1);

 VAR_3->default_closid = 0;
 VAR_3->default_rmid = 0;
 VAR_3->cur_closid = 0;
 VAR_3->cur_rmid = 0;
 FUNC_1(VAR_0, 0, 0);
}
