
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vas_window {int wcreds_max; } ;
struct vas_winctx {int pin_win; int fault_win; int data_stamp; int intr_disable; int notify_after_count; int notify_disable; int fifo_disable; int max_scope; int min_scope; int tc_mode; int dma_type; int pswid; int lnotify_tid; int lnotify_pid; int lnotify_lpid; int * rx_fifo; scalar_t__ user_win; int tx_word_mode; int rx_word_mode; scalar_t__ nx_win; int notify_early; int tx_wcred_mode; int rx_wcred_mode; int rej_no_credit; int wcreds_max; int rx_fifo_size; } ;
struct vas_rx_win_attr {int pin_win; int fault_win; int tc_mode; int pswid; int lnotify_tid; int lnotify_pid; int lnotify_lpid; int notify_early; int tx_wcred_mode; int rx_wcred_mode; int tx_win_ord_mode; int rx_win_ord_mode; int rej_no_credit; scalar_t__ user_win; scalar_t__ nx_win; int rx_fifo_size; int * rx_fifo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct vas_winctx*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct vas_window *VAR_3,
   struct vas_rx_win_attr *VAR_4,
   struct vas_winctx *VAR_5)
{
 FUNC_1(VAR_5, 0, sizeof(struct vas_winctx));

 VAR_5->rx_fifo = VAR_4->rx_fifo;
 VAR_5->rx_fifo_size = VAR_4->rx_fifo_size;
 VAR_5->wcreds_max = VAR_3->wcreds_max;
 VAR_5->pin_win = VAR_4->pin_win;

 VAR_5->nx_win = VAR_4->nx_win;
 VAR_5->fault_win = VAR_4->fault_win;
 VAR_5->user_win = VAR_4->user_win;
 VAR_5->rej_no_credit = VAR_4->rej_no_credit;
 VAR_5->rx_word_mode = VAR_4->rx_win_ord_mode;
 VAR_5->tx_word_mode = VAR_4->tx_win_ord_mode;
 VAR_5->rx_wcred_mode = VAR_4->rx_wcred_mode;
 VAR_5->tx_wcred_mode = VAR_4->tx_wcred_mode;
 VAR_5->notify_early = VAR_4->notify_early;

 if (VAR_5->nx_win) {
  VAR_5->data_stamp = 1;
  VAR_5->intr_disable = 1;
  VAR_5->pin_win = 1;

  FUNC_0(VAR_5->fault_win);
  FUNC_0(!VAR_5->rx_word_mode);
  FUNC_0(!VAR_5->tx_word_mode);
  FUNC_0(VAR_5->notify_after_count);
 } else if (VAR_5->fault_win) {
  VAR_5->notify_disable = 1;
 } else if (VAR_5->user_win) {
  VAR_5->fifo_disable = 1;
  VAR_5->intr_disable = 1;
  VAR_5->rx_fifo = ((void*)0);
 }

 VAR_5->lnotify_lpid = VAR_4->lnotify_lpid;
 VAR_5->lnotify_pid = VAR_4->lnotify_pid;
 VAR_5->lnotify_tid = VAR_4->lnotify_tid;
 VAR_5->pswid = VAR_4->pswid;
 VAR_5->dma_type = VAR_0;
 VAR_5->tc_mode = VAR_4->tc_mode;

 VAR_5->min_scope = VAR_1;
 VAR_5->max_scope = VAR_2;
}
