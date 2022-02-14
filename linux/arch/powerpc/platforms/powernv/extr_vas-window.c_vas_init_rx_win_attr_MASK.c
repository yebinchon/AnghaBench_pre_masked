
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vas_rx_win_attr {int pin_win; int nx_win; int fault_win; int intr_disable; int rx_wcred_mode; int tx_wcred_mode; int rx_win_ord_mode; int tx_win_ord_mode; int notify_disable; int user_win; } ;
typedef enum vas_cop_type { ____Placeholder_vas_cop_type } vas_cop_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct vas_rx_win_attr*,int ,int) ;

void FUNC_1(struct vas_rx_win_attr *VAR_4, enum vas_cop_type VAR_5)
{
 FUNC_0(VAR_4, 0, sizeof(*VAR_4));

 if (VAR_5 == VAR_0 || VAR_5 == VAR_1) {
  VAR_4->pin_win = 1;
  VAR_4->nx_win = 1;
  VAR_4->fault_win = 0;
  VAR_4->intr_disable = 1;
  VAR_4->rx_wcred_mode = 1;
  VAR_4->tx_wcred_mode = 1;
  VAR_4->rx_win_ord_mode = 1;
  VAR_4->tx_win_ord_mode = 1;
 } else if (VAR_5 == VAR_2) {
  VAR_4->pin_win = 1;
  VAR_4->fault_win = 1;
  VAR_4->notify_disable = 1;
  VAR_4->rx_wcred_mode = 1;
  VAR_4->tx_wcred_mode = 1;
  VAR_4->rx_win_ord_mode = 1;
  VAR_4->tx_win_ord_mode = 1;
 } else if (VAR_5 == VAR_3) {
  VAR_4->user_win = 1;
  VAR_4->intr_disable = 1;







 }
}
