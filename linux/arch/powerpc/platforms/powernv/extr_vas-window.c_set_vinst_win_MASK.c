
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vas_window {int winid; size_t cop; int tx_win; int user_win; } ;
struct vas_instance {int mutex; struct vas_window** windows; struct vas_window** rxwin; } ;


 int FUNC_0 (struct vas_window*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct vas_instance *VAR_0,
   struct vas_window *VAR_1)
{
 int VAR_2 = VAR_1->winid;

 FUNC_1(&VAR_0->mutex);





 if (!VAR_1->user_win && !VAR_1->tx_win) {
  FUNC_0(VAR_0->rxwin[VAR_1->cop]);
  VAR_0->rxwin[VAR_1->cop] = VAR_1;
 }

 FUNC_0(VAR_0->windows[VAR_2] != ((void*)0));
 VAR_0->windows[VAR_2] = VAR_1;

 FUNC_2(&VAR_0->mutex);
}
