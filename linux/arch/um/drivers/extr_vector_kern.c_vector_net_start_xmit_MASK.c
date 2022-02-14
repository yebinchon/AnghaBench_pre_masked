
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int tx_kicks; } ;
struct vector_private {scalar_t__ rx_irq; scalar_t__ tx_irq; int options; int tx_poll; TYPE_3__* tx_queue; TYPE_2__ estats; int coalesce; int tl; int dev; TYPE_1__* fds; scalar_t__ in_error; } ;
struct sk_buff {int len; } ;
struct net_device {int dummy; } ;
struct TYPE_7__ {int max_depth; } ;
struct TYPE_5__ {scalar_t__ rx_fd; scalar_t__ tx_fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int *,int ) ;
 struct vector_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_3__*,struct sk_buff*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (struct vector_private*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_4, struct net_device *VAR_5)
{
 struct vector_private *VAR_6 = FUNC_2(VAR_5);
 int VAR_7 = 0;

 if (VAR_6->in_error) {
  FUNC_0(VAR_6->fds->rx_fd, VAR_6->rx_irq);
  if ((VAR_6->fds->rx_fd != VAR_6->fds->tx_fd) && (VAR_6->tx_irq != 0))
   FUNC_0(VAR_6->fds->tx_fd, VAR_6->tx_irq);
  return VAR_0;
 }

 if ((VAR_6->options & VAR_3) == 0) {
  FUNC_9(VAR_6, VAR_4);
  return VAR_1;
 }





 FUNC_3(VAR_6->dev, VAR_4->len);
 VAR_7 = FUNC_7(VAR_6->tx_queue, VAR_4);





 if (VAR_7 >= VAR_6->tx_queue->max_depth - 1) {
  VAR_6->estats.tx_kicks++;
  FUNC_5(VAR_5);
  FUNC_8(VAR_6->tx_queue);
  return VAR_1;
 }
 if (FUNC_4()) {
  FUNC_1(&VAR_6->tl, VAR_6->coalesce);
  return VAR_1;
 }
 if (VAR_4->len < VAR_2) {
  VAR_6->estats.tx_kicks++;
  FUNC_8(VAR_6->tx_queue);
 } else
  FUNC_6(&VAR_6->tx_poll);
 return VAR_1;
}
