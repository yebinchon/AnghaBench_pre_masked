
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; int tx_queue_len; int features; int needs_free_netdev; int broadcast; int type; int addr_len; int hard_header_len; int watchdog_timeo; int * header_ops; } ;


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
 int FUNC_0 (struct net_device*) ;
 int VAR_10 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct net_device*) ;

void FUNC_3(struct net_device *VAR_11)
{
 VAR_11->header_ops = &VAR_8;

 FUNC_0(VAR_11);

 VAR_11->watchdog_timeo = VAR_1;

 VAR_11->flags |= VAR_2 | VAR_3;

 VAR_11->hard_header_len = VAR_5;
 VAR_11->addr_len = VAR_4;
 VAR_11->type = VAR_0;
 VAR_11->tx_queue_len = VAR_9 * 2;
 VAR_11->features = (VAR_7 |
        VAR_6);
 FUNC_2(VAR_11);

 FUNC_1(VAR_11->broadcast, VAR_10, VAR_4);






 VAR_11->needs_free_netdev = 1;
}
