
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hfi1_pportdata {int current_egress_rate; int link_width_downgrade_supported; int link_width_downgrade_enabled; int link_width_active; int link_width_downgrade_rx_active; int link_width_downgrade_tx_active; int dd; } ;


 int FUNC_0 (struct hfi1_pportdata*) ;
 int FUNC_1 (int ,int *,int *) ;

void FUNC_2(struct hfi1_pportdata *VAR_0)
{
 u16 VAR_1, VAR_2;


 FUNC_1(VAR_0->dd, &VAR_1, &VAR_2);


 VAR_0->link_width_active = VAR_1;

 VAR_0->link_width_downgrade_tx_active = VAR_0->link_width_active;
 VAR_0->link_width_downgrade_rx_active = VAR_0->link_width_active;

 VAR_0->link_width_downgrade_enabled = VAR_0->link_width_downgrade_supported;

 VAR_0->current_egress_rate = FUNC_0(VAR_0);
}
