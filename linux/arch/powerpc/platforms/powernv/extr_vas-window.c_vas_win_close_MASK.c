
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vas_window {int rxwin; scalar_t__ tx_win; int num_txwins; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct vas_window*) ;
 int FUNC_3 (struct vas_window*) ;
 int FUNC_4 (struct vas_window*) ;
 int FUNC_5 (struct vas_window*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct vas_window*) ;
 int FUNC_9 (struct vas_window*) ;
 int FUNC_10 (struct vas_window*) ;

int FUNC_11(struct vas_window *VAR_1)
{
 if (!VAR_1)
  return 0;

 if (!VAR_1->tx_win && FUNC_1(&VAR_1->num_txwins) != 0) {
  FUNC_6("Attempting to close an active Rx window!\n");
  FUNC_0(1);
  return -VAR_0;
 }

 FUNC_8(VAR_1);

 FUNC_2(VAR_1);

 FUNC_3(VAR_1);

 FUNC_9(VAR_1);

 FUNC_5(VAR_1);

 FUNC_4(VAR_1);


 if (VAR_1->tx_win)
  FUNC_7(VAR_1->rxwin);

 FUNC_10(VAR_1);

 return 0;
}
