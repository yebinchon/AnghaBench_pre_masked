
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vas_tx_win_attr {int rej_no_credit; int rx_wcred_mode; int tx_wcred_mode; int rx_win_ord_mode; int tx_win_ord_mode; int user_win; } ;
typedef enum vas_cop_type { ____Placeholder_vas_cop_type } vas_cop_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vas_tx_win_attr*,int ,int) ;

void FUNC_1(struct vas_tx_win_attr *VAR_3, enum vas_cop_type VAR_4)
{
 FUNC_0(VAR_3, 0, sizeof(*VAR_3));

 if (VAR_4 == VAR_0 || VAR_4 == VAR_1) {
  VAR_3->rej_no_credit = 0;
  VAR_3->rx_wcred_mode = 1;
  VAR_3->tx_wcred_mode = 1;
  VAR_3->rx_win_ord_mode = 1;
  VAR_3->tx_win_ord_mode = 1;
 } else if (VAR_4 == VAR_2) {
  VAR_3->user_win = 1;
 }
}
