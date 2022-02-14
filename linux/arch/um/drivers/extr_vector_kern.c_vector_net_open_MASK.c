
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vector_private {int opened; int options; int tl; int unit; TYPE_2__* fds; int bpf; void* tx_irq; void* rx_irq; int * header_txbuffer; int header_size; int parsed; void* tx_queue; int * header_rxbuffer; int rx_header_size; TYPE_1__* rx_queue; int lock; } ;
struct vector_device {int opened; } ;
struct net_device {int dev_addr; int name; void* irq; } ;
struct TYPE_4__ {int rx_fd; int tx_fd; } ;
struct TYPE_3__ {int queue_depth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct vector_private*) ;
 void* FUNC_2 (struct vector_private*,int ,int ,int ) ;
 struct vector_device* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_14 ;
 void* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct net_device*,char*,int) ;
 struct vector_private* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (void*,int ,int ,int ,int ,int ,struct net_device*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ) ;
 TYPE_2__* FUNC_14 (int ,int ) ;
 int FUNC_15 (struct net_device*) ;
 int FUNC_16 (struct vector_private*) ;
 int FUNC_17 (struct vector_private*) ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static int FUNC_18(struct net_device *VAR_17)
{
 struct vector_private *VAR_18 = FUNC_7(VAR_17);
 unsigned long VAR_19;
 int VAR_20 = -VAR_0;
 struct vector_device *VAR_21;

 FUNC_9(&VAR_18->lock, VAR_19);
 if (VAR_18->opened) {
  FUNC_10(&VAR_18->lock, VAR_19);
  return -VAR_2;
 }
 VAR_18->opened = 1;
 FUNC_10(&VAR_18->lock, VAR_19);

 VAR_18->fds = FUNC_14(VAR_18->unit, VAR_18->parsed);

 if (VAR_18->fds == ((void*)0))
  goto out_close;

 if (FUNC_1(VAR_18) < 0)
  goto out_close;

 if ((VAR_18->options & VAR_12) > 0) {
  VAR_18->rx_queue = FUNC_2(
   VAR_18,
   FUNC_4(VAR_18->parsed),
   VAR_18->rx_header_size,
   VAR_7
  );
  VAR_18->rx_queue->queue_depth = FUNC_4(VAR_18->parsed);
 } else {
  VAR_18->header_rxbuffer = FUNC_5(
   VAR_18->rx_header_size,
   VAR_3
  );
  if (VAR_18->header_rxbuffer == ((void*)0))
   goto out_close;
 }
 if ((VAR_18->options & VAR_13) > 0) {
  VAR_18->tx_queue = FUNC_2(
   VAR_18,
   FUNC_4(VAR_18->parsed),
   VAR_18->header_size,
   VAR_7
  );
 } else {
  VAR_18->header_txbuffer = FUNC_5(VAR_18->header_size, VAR_3);
  if (VAR_18->header_txbuffer == ((void*)0))
   goto out_close;
 }


 VAR_20 = FUNC_11(
  VAR_14 + VAR_8, VAR_18->fds->rx_fd,
   VAR_5, VAR_15,
   VAR_4, VAR_17->name, VAR_17);
 if (VAR_20 != 0) {
  FUNC_6(VAR_17, "vector_open: failed to get rx irq(%d)\n", VAR_20);
  VAR_20 = -VAR_1;
  goto out_close;
 }
 VAR_18->rx_irq = VAR_14 + VAR_8;
 VAR_17->irq = VAR_14 + VAR_8;
 VAR_14 = (VAR_14 + 1) % VAR_10;


 if ((VAR_18->options & VAR_13) > 0) {
  VAR_20 = FUNC_11(
   VAR_14 + VAR_8, VAR_18->fds->tx_fd,
    VAR_6, VAR_16,
    VAR_4, VAR_17->name, VAR_17);
  if (VAR_20 != 0) {
   FUNC_6(VAR_17,
    "vector_open: failed to get tx irq(%d)\n", VAR_20);
   VAR_20 = -VAR_1;
   goto out_close;
  }
  VAR_18->tx_irq = VAR_14 + VAR_8;
  VAR_14 = (VAR_14 + 1) % VAR_10;
 }

 if ((VAR_18->options & VAR_11) != 0) {
  if (!FUNC_12(VAR_18->fds->rx_fd))
   VAR_18->options |= VAR_9;
 }
 if ((VAR_18->options & VAR_9) != 0)
  VAR_18->bpf = FUNC_13(VAR_18->fds->rx_fd, VAR_17->dev_addr);

 FUNC_8(VAR_17);






 FUNC_17(VAR_18);

 FUNC_16(VAR_18);
 VAR_21 = FUNC_3(VAR_18->unit);
 VAR_21->opened = 1;

 if ((VAR_18->options & VAR_13) != 0)
  FUNC_0(&VAR_18->tl);
 return 0;
out_close:
 FUNC_15(VAR_17);
 return VAR_20;
}
