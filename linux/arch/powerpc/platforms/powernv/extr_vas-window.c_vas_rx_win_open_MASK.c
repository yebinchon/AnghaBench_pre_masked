
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vas_window {int tx_win; int cop; int pid; int wcreds_max; scalar_t__ user_win; int nx_win; } ;
struct vas_winctx {int dummy; } ;
struct vas_rx_win_attr {scalar_t__ user_win; scalar_t__ wcreds_max; int nx_win; } ;
struct vas_instance {int dummy; } ;
typedef enum vas_cop_type { ____Placeholder_vas_cop_type } vas_cop_type ;


 int VAR_0 ;
 struct vas_window* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct vas_window*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct vas_instance* FUNC_2 (int) ;
 int FUNC_3 (struct vas_window*,struct vas_rx_win_attr*,struct vas_winctx*) ;
 int FUNC_4 (struct vas_window*,struct vas_winctx*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int,struct vas_rx_win_attr*) ;
 int FUNC_7 (struct vas_instance*,struct vas_window*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int,int,struct vas_rx_win_attr*) ;
 struct vas_window* FUNC_10 (struct vas_instance*) ;

struct vas_window *FUNC_11(int VAR_3, enum vas_cop_type VAR_4,
   struct vas_rx_win_attr *VAR_5)
{
 struct vas_window *VAR_6;
 struct vas_winctx VAR_7;
 struct vas_instance *VAR_8;

 FUNC_9(VAR_2, VAR_3, VAR_4, VAR_5);

 if (!FUNC_6(VAR_4, VAR_5))
  return FUNC_0(-VAR_0);

 VAR_8 = FUNC_2(VAR_3);
 if (!VAR_8) {
  FUNC_5("vasid %d not found!\n", VAR_3);
  return FUNC_0(-VAR_0);
 }
 FUNC_5("Found instance %d\n", VAR_3);

 VAR_6 = FUNC_10(VAR_8);
 if (FUNC_1(VAR_6)) {
  FUNC_5("Unable to allocate memory for Rx window\n");
  return VAR_6;
 }

 VAR_6->tx_win = 0;
 VAR_6->nx_win = VAR_5->nx_win;
 VAR_6->user_win = VAR_5->user_win;
 VAR_6->cop = VAR_4;
 VAR_6->wcreds_max = VAR_5->wcreds_max ?: VAR_1;
 if (VAR_5->user_win)
  VAR_6->pid = FUNC_8(VAR_2);

 FUNC_3(VAR_6, VAR_5, &VAR_7);
 FUNC_4(VAR_6, &VAR_7);

 FUNC_7(VAR_8, VAR_6);

 return VAR_6;
}
