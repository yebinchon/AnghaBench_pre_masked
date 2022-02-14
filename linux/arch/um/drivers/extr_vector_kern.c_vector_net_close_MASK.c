
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vector_private {scalar_t__ rx_irq; scalar_t__ tx_irq; int opened; int in_error; int lock; TYPE_1__* fds; int * tx_queue; int * rx_queue; TYPE_1__* header_txbuffer; TYPE_1__* header_rxbuffer; TYPE_1__* transport_data; TYPE_1__* bpf; int tx_poll; int tl; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int rx_fd; int tx_fd; struct TYPE_2__* remote_addr; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 struct vector_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (scalar_t__,struct net_device*) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_0)
{
 struct vector_private *VAR_1 = FUNC_3(VAR_0);
 unsigned long VAR_2;

 FUNC_4(VAR_0);
 FUNC_0(&VAR_1->tl);

 if (VAR_1->fds == ((void*)0))
  return 0;


 if (VAR_1->rx_irq > 0) {
  FUNC_9(VAR_1->rx_irq, VAR_0);
  VAR_1->rx_irq = 0;
 }
 if (VAR_1->tx_irq > 0) {
  FUNC_9(VAR_1->tx_irq, VAR_0);
  VAR_1->tx_irq = 0;
 }
 FUNC_8(&VAR_1->tx_poll);
 if (VAR_1->fds->rx_fd > 0) {
  FUNC_5(VAR_1->fds->rx_fd);
  VAR_1->fds->rx_fd = -1;
 }
 if (VAR_1->fds->tx_fd > 0) {
  FUNC_5(VAR_1->fds->tx_fd);
  VAR_1->fds->tx_fd = -1;
 }
 FUNC_2(VAR_1->bpf);
 FUNC_2(VAR_1->fds->remote_addr);
 FUNC_2(VAR_1->transport_data);
 FUNC_2(VAR_1->header_rxbuffer);
 FUNC_2(VAR_1->header_txbuffer);
 if (VAR_1->rx_queue != ((void*)0))
  FUNC_1(VAR_1->rx_queue);
 if (VAR_1->tx_queue != ((void*)0))
  FUNC_1(VAR_1->tx_queue);
 FUNC_2(VAR_1->fds);
 VAR_1->fds = ((void*)0);
 FUNC_6(&VAR_1->lock, VAR_2);
 VAR_1->opened = 0;
 VAR_1->in_error = 0;
 FUNC_7(&VAR_1->lock, VAR_2);
 return 0;
}
