
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int watchdog_timeo; int flags; int * ethtool_ops; int tx_queue_len; int type; int hard_header_len; int addr_len; int features; int * netdev_ops; int * header_ops; } ;


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

__attribute__((used)) static void FUNC_0(struct net_device *VAR_11)
{
 VAR_11->header_ops = &VAR_9;
 VAR_11->netdev_ops = &VAR_10;
 VAR_11->watchdog_timeo = 2 * VAR_4;
 VAR_11->flags = VAR_5 | VAR_6;
 VAR_11->features = VAR_7;
 VAR_11->addr_len = VAR_1;
 VAR_11->hard_header_len = VAR_2;
 VAR_11->type = VAR_0;
 VAR_11->tx_queue_len = VAR_3;
 VAR_11->ethtool_ops = &VAR_8;
}
