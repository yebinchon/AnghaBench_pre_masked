
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
struct vas_window {int dummy; } ;
struct vas_winctx {int lpid; int pidr; int irq_port; int pswid; int data_stamp; int dma_type; int fifo_disable; int wcreds_max; int rx_fifo_size; int rx_win_id; int notify_disable; int intr_disable; int notify_early; int notify_os_intr_reg; int lnotify_pid; int lnotify_lpid; int lnotify_tid; int min_scope; int max_scope; int rej_no_credit; int pin_win; int tx_wcred_mode; int rx_wcred_mode; int tx_word_mode; int rx_word_mode; int fault_win; int nx_win; int rx_fifo; int user_win; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 unsigned long long FUNC_0 (int ,unsigned long long,int) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int FUNC_1 (int ) ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 unsigned long long FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct vas_window*,struct vas_winctx*) ;
 int FUNC_5 (struct vas_window*,int ) ;
 int FUNC_6 (struct vas_window*) ;
 int FUNC_7 (struct vas_window*,int ,unsigned long long) ;

int FUNC_8(struct vas_window *VAR_65, struct vas_winctx *VAR_66)
{
 u64 VAR_67;
 int VAR_68;

 FUNC_6(VAR_65);

 VAR_67 = 0ULL;
 VAR_67 = FUNC_0(VAR_42, VAR_67, VAR_66->lpid);
 FUNC_7(VAR_65, FUNC_1(VAR_13), VAR_67);

 VAR_67 = 0ULL;
 VAR_67 = FUNC_0(VAR_49, VAR_67, VAR_66->pidr);
 FUNC_7(VAR_65, FUNC_1(VAR_20), VAR_67);

 FUNC_5(VAR_65, VAR_66->user_win);

 VAR_67 = 0ULL;
 VAR_67 = FUNC_0(VAR_30, VAR_67, 0);
 FUNC_7(VAR_65, FUNC_1(VAR_1), VAR_67);


 FUNC_7(VAR_65, FUNC_1(VAR_19), 0ULL);

 VAR_67 = 0ULL;
 VAR_67 = FUNC_0(VAR_31, VAR_67, VAR_66->irq_port);
 FUNC_7(VAR_65, FUNC_1(VAR_2), VAR_67);

 VAR_67 = 0ULL;
 VAR_67 = FUNC_0(VAR_50, VAR_67, VAR_66->pswid);
 FUNC_7(VAR_65, FUNC_1(VAR_21), VAR_67);

 FUNC_7(VAR_65, FUNC_1(VAR_22), 0ULL);
 FUNC_7(VAR_65, FUNC_1(VAR_23), 0ULL);
 FUNC_7(VAR_65, FUNC_1(VAR_24), 0ULL);
 VAR_67 = FUNC_2(VAR_66->rx_fifo);
 VAR_67 = FUNC_0(VAR_48, VAR_67, 0);
 FUNC_7(VAR_65, FUNC_1(VAR_5), VAR_67);

 VAR_67 = 0ULL;
 VAR_67 = FUNC_0(VAR_33, VAR_67, VAR_66->data_stamp);
 FUNC_7(VAR_65, FUNC_1(VAR_3), VAR_67);

 VAR_67 = 0ULL;
 VAR_67 = FUNC_0(VAR_35, VAR_67, VAR_66->dma_type);
 VAR_67 = FUNC_0(VAR_34, VAR_67, VAR_66->fifo_disable);
 FUNC_7(VAR_65, FUNC_1(VAR_4), VAR_67);

 FUNC_7(VAR_65, FUNC_1(VAR_14), 0ULL);
 FUNC_7(VAR_65, FUNC_1(VAR_0), 0ULL);
 FUNC_7(VAR_65, FUNC_1(VAR_7), 0ULL);

 VAR_67 = 0ULL;
 VAR_67 = FUNC_0(VAR_43, VAR_67, VAR_66->wcreds_max);
 FUNC_7(VAR_65, FUNC_1(VAR_16), VAR_67);

 VAR_67 = 0ULL;
 VAR_67 = FUNC_0(VAR_52, VAR_67, VAR_66->wcreds_max);
 FUNC_7(VAR_65, FUNC_1(VAR_28), VAR_67);

 FUNC_7(VAR_65, FUNC_1(VAR_17), 0ULL);
 FUNC_7(VAR_65, FUNC_1(VAR_29), 0ULL);

 VAR_68 = VAR_66->rx_fifo_size / 1024;

 VAR_67 = 0ULL;
 VAR_67 = FUNC_0(VAR_36, VAR_67, FUNC_3(VAR_68));
 FUNC_7(VAR_65, FUNC_1(VAR_6), VAR_67);






 FUNC_7(VAR_65, FUNC_1(VAR_64), 0ULL);

 FUNC_4(VAR_65, VAR_66);


 VAR_67 = 0ULL;
 VAR_67 = FUNC_0(VAR_44, VAR_67, VAR_66->rx_win_id);
 FUNC_7(VAR_65, FUNC_1(VAR_15), VAR_67);

 FUNC_7(VAR_65, FUNC_1(VAR_25), 0ULL);

 VAR_67 = 0ULL;
 VAR_67 = FUNC_0(VAR_45, VAR_67, VAR_66->notify_disable);
 VAR_67 = FUNC_0(VAR_32, VAR_67, VAR_66->intr_disable);
 VAR_67 = FUNC_0(VAR_46, VAR_67, VAR_66->notify_early);
 VAR_67 = FUNC_0(VAR_47, VAR_67, VAR_66->notify_os_intr_reg);
 FUNC_7(VAR_65, FUNC_1(VAR_8), VAR_67);

 VAR_67 = 0ULL;
 VAR_67 = FUNC_0(VAR_40, VAR_67, VAR_66->lnotify_pid);
 FUNC_7(VAR_65, FUNC_1(VAR_10), VAR_67);

 VAR_67 = 0ULL;
 VAR_67 = FUNC_0(VAR_37, VAR_67, VAR_66->lnotify_lpid);
 FUNC_7(VAR_65, FUNC_1(VAR_9), VAR_67);

 VAR_67 = 0ULL;
 VAR_67 = FUNC_0(VAR_41, VAR_67, VAR_66->lnotify_tid);
 FUNC_7(VAR_65, FUNC_1(VAR_12), VAR_67);

 VAR_67 = 0ULL;
 VAR_67 = FUNC_0(VAR_39, VAR_67, VAR_66->min_scope);
 VAR_67 = FUNC_0(VAR_38, VAR_67, VAR_66->max_scope);
 FUNC_7(VAR_65, FUNC_1(VAR_11), VAR_67);



 FUNC_7(VAR_65, FUNC_1(VAR_26), 0ULL);
 FUNC_7(VAR_65, FUNC_1(VAR_18), 0ULL);
 FUNC_7(VAR_65, FUNC_1(VAR_27), 0ULL);


 VAR_67 = 0ULL;
 VAR_67 = FUNC_0(VAR_51, VAR_67, 1);
 FUNC_7(VAR_65, FUNC_1(VAR_63), VAR_67);


 VAR_67 = 0ULL;
 VAR_67 = FUNC_0(VAR_57, VAR_67, VAR_66->rej_no_credit);
 VAR_67 = FUNC_0(VAR_56, VAR_67, VAR_66->pin_win);
 VAR_67 = FUNC_0(VAR_60, VAR_67, VAR_66->tx_wcred_mode);
 VAR_67 = FUNC_0(VAR_58, VAR_67, VAR_66->rx_wcred_mode);
 VAR_67 = FUNC_0(VAR_61, VAR_67, VAR_66->tx_word_mode);
 VAR_67 = FUNC_0(VAR_59, VAR_67, VAR_66->rx_word_mode);
 VAR_67 = FUNC_0(VAR_53, VAR_67, VAR_66->fault_win);
 VAR_67 = FUNC_0(VAR_54, VAR_67, VAR_66->nx_win);
 VAR_67 = FUNC_0(VAR_55, VAR_67, 1);
 FUNC_7(VAR_65, FUNC_1(VAR_62), VAR_67);

 return 0;
}
