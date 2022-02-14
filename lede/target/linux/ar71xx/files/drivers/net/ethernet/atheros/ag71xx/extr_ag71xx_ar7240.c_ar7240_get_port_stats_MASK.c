
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct switch_port_stats {int tx_bytes; int rx_bytes; } ;
struct switch_dev {int dummy; } ;
struct ar7240sw {int stats_lock; TYPE_1__* port_stats; } ;
struct TYPE_2__ {int tx_byte; int rx_good_byte; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ar7240sw*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct ar7240sw* FUNC_3 (struct switch_dev*) ;

__attribute__((used)) static int
FUNC_4(struct switch_dev *VAR_2, int VAR_3,
        struct switch_port_stats *VAR_4)
{
 struct ar7240sw *VAR_5 = FUNC_3(VAR_2);

 if (VAR_3 >= VAR_0)
  return -VAR_1;

 FUNC_0(VAR_5);

 FUNC_1(&VAR_5->stats_lock);
 VAR_4->rx_bytes = VAR_5->port_stats[VAR_3].rx_good_byte;
 VAR_4->tx_bytes = VAR_5->port_stats[VAR_3].tx_byte;
 FUNC_2(&VAR_5->stats_lock);

 return 0;
}
