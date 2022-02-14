
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hsc_channel {int tx_msgs_queue; int rx_msgs_queue; int free_msgs_list; int lock; int tx_wait; int rx_wait; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct hsc_channel *VAR_0)
{
 FUNC_1(&VAR_0->rx_wait);
 FUNC_1(&VAR_0->tx_wait);
 FUNC_2(&VAR_0->lock);
 FUNC_0(&VAR_0->free_msgs_list);
 FUNC_0(&VAR_0->rx_msgs_queue);
 FUNC_0(&VAR_0->tx_msgs_queue);
}
