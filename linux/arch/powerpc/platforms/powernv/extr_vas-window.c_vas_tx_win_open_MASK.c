
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vas_window {int cop; int tx_win; struct vas_window* paste_kaddr; int user_win; int wcreds_max; int pid; int nx_win; struct vas_window* rxwin; } ;
struct vas_winctx {int dummy; } ;
struct vas_tx_win_attr {scalar_t__ wcreds_max; int user_win; int pid; int pswid; } ;
struct vas_instance {int dummy; } ;
typedef enum vas_cop_type { ____Placeholder_vas_cop_type } vas_cop_type ;


 int VAR_0 ;
 struct vas_window* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct vas_window*) ;
 int FUNC_2 (struct vas_window*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int*,int *) ;
 struct vas_instance* FUNC_4 (int) ;
 struct vas_window* FUNC_5 (struct vas_instance*,int,int ) ;
 int FUNC_6 (struct vas_window*,struct vas_tx_win_attr*,struct vas_winctx*) ;
 int FUNC_7 (struct vas_window*,struct vas_winctx*) ;
 struct vas_window* FUNC_8 (struct vas_window*) ;
 int FUNC_9 (char*,int,...) ;
 int FUNC_10 (struct vas_window*) ;
 int FUNC_11 () ;
 int FUNC_12 (struct vas_instance*,struct vas_window*) ;
 int FUNC_13 (int ,int,int,struct vas_tx_win_attr*) ;
 int FUNC_14 (int,struct vas_tx_win_attr*) ;
 struct vas_window* FUNC_15 (struct vas_instance*) ;
 int FUNC_16 (struct vas_window*) ;

struct vas_window *FUNC_17(int VAR_3, enum vas_cop_type VAR_4,
   struct vas_tx_win_attr *VAR_5)
{
 int VAR_6;
 struct vas_window *VAR_7;
 struct vas_window *VAR_8;
 struct vas_winctx VAR_9;
 struct vas_instance *VAR_10;

 FUNC_13(VAR_2, VAR_3, VAR_4, VAR_5);

 if (!FUNC_14(VAR_4, VAR_5))
  return FUNC_0(-VAR_0);






 if (VAR_3 == -1 && VAR_5->pswid)
  FUNC_3(VAR_5->pswid, &VAR_3, ((void*)0));

 VAR_10 = FUNC_4(VAR_3);
 if (!VAR_10) {
  FUNC_9("vasid %d not found!\n", VAR_3);
  return FUNC_0(-VAR_0);
 }

 VAR_8 = FUNC_5(VAR_10, VAR_4, VAR_5->pswid);
 if (FUNC_1(VAR_8)) {
  FUNC_9("No RxWin for vasid %d, cop %d\n", VAR_3, VAR_4);
  return VAR_8;
 }

 VAR_7 = FUNC_15(VAR_10);
 if (FUNC_1(VAR_7)) {
  VAR_6 = FUNC_2(VAR_7);
  goto put_rxwin;
 }

 VAR_7->cop = VAR_4;
 VAR_7->tx_win = 1;
 VAR_7->rxwin = VAR_8;
 VAR_7->nx_win = VAR_7->rxwin->nx_win;
 VAR_7->pid = VAR_5->pid;
 VAR_7->user_win = VAR_5->user_win;
 VAR_7->wcreds_max = VAR_5->wcreds_max ?: VAR_1;

 FUNC_6(VAR_7, VAR_5, &VAR_9);

 FUNC_7(VAR_7, &VAR_9);
 if (!VAR_7->user_win) {
  VAR_7->paste_kaddr = FUNC_8(VAR_7);
  if (FUNC_1(VAR_7->paste_kaddr)) {
   VAR_6 = FUNC_2(VAR_7->paste_kaddr);
   goto free_window;
  }
 } else {




  VAR_6 = FUNC_11();
  if (VAR_6)
   goto free_window;
 }

 FUNC_12(VAR_10, VAR_7);

 return VAR_7;

free_window:
 FUNC_16(VAR_7);

put_rxwin:
 FUNC_10(VAR_8);
 return FUNC_0(VAR_6);

}
