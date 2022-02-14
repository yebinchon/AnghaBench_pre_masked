
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40iw_vsi_pestat {int stats_timer; } ;
struct i40iw_sc_vsi {struct i40iw_vsi_pestat* pestat; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ) ;

void FUNC_3(struct i40iw_sc_vsi *VAR_3)
{
 struct i40iw_vsi_pestat *VAR_4 = VAR_3->pestat;

 FUNC_2(&VAR_4->stats_timer, VAR_1, 0);
 FUNC_0(&VAR_4->stats_timer,
    VAR_2 + FUNC_1(VAR_0));
}
