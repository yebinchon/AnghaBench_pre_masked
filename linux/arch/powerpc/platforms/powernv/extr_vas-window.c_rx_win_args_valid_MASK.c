
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vas_rx_win_attr {scalar_t__ rx_fifo_size; scalar_t__ wcreds_max; scalar_t__ intr_disable; scalar_t__ rx_fifo; scalar_t__ user_win; scalar_t__ notify_disable; scalar_t__ fault_win; scalar_t__ notify_early; scalar_t__ nx_win; } ;
typedef enum vas_cop_type { ____Placeholder_vas_cop_type } vas_cop_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static bool FUNC_1(enum vas_cop_type VAR_5,
   struct vas_rx_win_attr *VAR_6)
{
 FUNC_0("Rxattr: fault %d, notify %d, intr %d, early %d, fifo %d\n",
   VAR_6->fault_win, VAR_6->notify_disable,
   VAR_6->intr_disable, VAR_6->notify_early,
   VAR_6->rx_fifo_size);

 if (VAR_5 >= VAR_1)
  return 0;

 if (VAR_5 != VAR_0 &&
    VAR_6->rx_fifo_size < VAR_3)
  return 0;

 if (VAR_6->rx_fifo_size > VAR_2)
  return 0;

 if (VAR_6->wcreds_max > VAR_4)
  return 0;

 if (VAR_6->nx_win) {

  if (VAR_6->fault_win || VAR_6->user_win)
   return 0;




  if (VAR_6->notify_disable || !VAR_6->intr_disable ||
    VAR_6->notify_early)
   return 0;
 } else if (VAR_6->fault_win) {

  if (VAR_6->user_win)
   return 0;





  if (!VAR_6->notify_disable || VAR_6->intr_disable)
   return 0;

 } else if (VAR_6->user_win) {




  if (VAR_6->rx_fifo || VAR_6->rx_fifo_size || !VAR_6->intr_disable)
   return 0;
 } else {

  return 0;
 }

 return 1;
}
