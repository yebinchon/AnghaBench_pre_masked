
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vas_window {int winid; size_t cop; int tx_win; int user_win; struct vas_instance* vinst; } ;
struct vas_instance {int mutex; struct vas_window** windows; int ** rxwin; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct vas_window *VAR_0)
{
 int VAR_1 = VAR_0->winid;
 struct vas_instance *VAR_2 = VAR_0->vinst;

 FUNC_1(&VAR_2->mutex);

 if (!VAR_0->user_win && !VAR_0->tx_win) {
  FUNC_0(!VAR_2->rxwin[VAR_0->cop]);
  VAR_2->rxwin[VAR_0->cop] = ((void*)0);
 }

 FUNC_0(VAR_2->windows[VAR_1] != VAR_0);
 VAR_2->windows[VAR_1] = ((void*)0);

 FUNC_2(&VAR_2->mutex);
}
