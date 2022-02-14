
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40iw_vsi_pestat {int stats_timer; } ;
struct i40iw_sc_vsi {struct i40iw_vsi_pestat* pestat; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct i40iw_sc_vsi *VAR_0)
{
 struct i40iw_vsi_pestat *VAR_1 = VAR_0->pestat;

 FUNC_0(&VAR_1->stats_timer);
}
