
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fwnet_packet_task {int enqueued; scalar_t__ outstanding_pkts; struct fwnet_device* dev; } ;
struct fwnet_device {int lock; TYPE_2__* netdev; } ;
struct TYPE_3__ {int tx_errors; int tx_dropped; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 int FUNC_0 (struct fwnet_device*) ;
 int FUNC_1 (struct fwnet_packet_task*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct fwnet_packet_task *VAR_0)
{
 struct fwnet_device *VAR_1 = VAR_0->dev;
 unsigned long VAR_2;
 bool VAR_3;

 FUNC_2(&VAR_1->lock, VAR_2);


 VAR_0->outstanding_pkts = 0;


 VAR_3 = VAR_0->enqueued;
 if (VAR_3)
  FUNC_0(VAR_1);

 VAR_1->netdev->stats.tx_dropped++;
 VAR_1->netdev->stats.tx_errors++;

 FUNC_3(&VAR_1->lock, VAR_2);

 if (VAR_3)
  FUNC_1(VAR_0);
}
