
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vas_window {TYPE_1__* rxwin; int wcreds_max; } ;
struct vas_winctx {int intr_disable; int data_stamp; scalar_t__ pswid; int max_scope; int min_scope; int tc_mode; int dma_type; int rx_win_id; int pidr; int lpid; scalar_t__ nx_win; int rsvd_txbuf_count; int tx_word_mode; int rx_word_mode; int tx_wcred_mode; int rx_wcred_mode; int rsvd_txbuf_enable; int rej_no_credit; int pin_win; int user_win; int wcreds_max; } ;
struct vas_tx_win_attr {int tc_mode; int pidr; int lpid; int rsvd_txbuf_count; int tx_win_ord_mode; int rx_win_ord_mode; int tx_wcred_mode; int rx_wcred_mode; int rsvd_txbuf_enable; int rej_no_credit; int pin_win; int user_win; } ;
struct TYPE_2__ {int winid; scalar_t__ nx_win; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vas_winctx*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct vas_window *VAR_3,
   struct vas_tx_win_attr *VAR_4,
   struct vas_winctx *VAR_5)
{
 FUNC_0(VAR_5, 0, sizeof(struct vas_winctx));

 VAR_5->wcreds_max = VAR_3->wcreds_max;

 VAR_5->user_win = VAR_4->user_win;
 VAR_5->nx_win = VAR_3->rxwin->nx_win;
 VAR_5->pin_win = VAR_4->pin_win;
 VAR_5->rej_no_credit = VAR_4->rej_no_credit;
 VAR_5->rsvd_txbuf_enable = VAR_4->rsvd_txbuf_enable;

 VAR_5->rx_wcred_mode = VAR_4->rx_wcred_mode;
 VAR_5->tx_wcred_mode = VAR_4->tx_wcred_mode;
 VAR_5->rx_word_mode = VAR_4->rx_win_ord_mode;
 VAR_5->tx_word_mode = VAR_4->tx_win_ord_mode;
 VAR_5->rsvd_txbuf_count = VAR_4->rsvd_txbuf_count;

 VAR_5->intr_disable = 1;
 if (VAR_5->nx_win)
  VAR_5->data_stamp = 1;

 VAR_5->lpid = VAR_4->lpid;
 VAR_5->pidr = VAR_4->pidr;
 VAR_5->rx_win_id = VAR_3->rxwin->winid;

 VAR_5->dma_type = VAR_0;
 VAR_5->tc_mode = VAR_4->tc_mode;
 VAR_5->min_scope = VAR_1;
 VAR_5->max_scope = VAR_2;

 VAR_5->pswid = 0;
}
