
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct solos_card {int tx_mask; unsigned long dma_alignment; unsigned char* dma_bounce; int tx_lock; scalar_t__ config_regs; int param_wq; TYPE_1__* dev; struct sk_buff** tx_skb; scalar_t__ using_dma; int tx_queue_lock; int * tx_queue; } ;
struct sk_buff {unsigned char* data; int len; } ;
struct pkt_hdr {int vci; int vpi; int size; } ;
struct atm_vcc {TYPE_2__* stats; } ;
struct TYPE_6__ {int dma_addr; struct atm_vcc* vcc; } ;
struct TYPE_5__ {int tx; } ;
struct TYPE_4__ {int dev; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct solos_card*,unsigned char) ;
 scalar_t__ FUNC_2 (unsigned char) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int,...) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int *,unsigned char*,int ,int ) ;
 int FUNC_7 (int *,int,int ,int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int,scalar_t__) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (unsigned char*,unsigned char*,int ) ;
 int FUNC_12 (int ,unsigned char*,int ) ;
 int FUNC_13 (struct sk_buff*) ;
 struct sk_buff* FUNC_14 (int *) ;
 int FUNC_15 (struct sk_buff*,int) ;
 int FUNC_16 (struct atm_vcc*,struct sk_buff*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,unsigned long) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *,unsigned long) ;
 int FUNC_21 (int *) ;

__attribute__((used)) static uint32_t FUNC_22(struct solos_card *VAR_4)
{
 uint32_t VAR_5, VAR_6;
 uint32_t VAR_7 = 0;
 struct sk_buff *VAR_8;
 struct atm_vcc *VAR_9;
 unsigned char VAR_10;
 unsigned long VAR_11;

 FUNC_18(&VAR_4->tx_lock, VAR_11);

 VAR_6 = FUNC_8(VAR_4->config_regs + VAR_2);







 VAR_5 = VAR_4->tx_mask & ~VAR_6;

 for (VAR_10 = 0; VAR_5; VAR_5 >>= 1, VAR_10++) {
  if (VAR_5 & 1) {
   struct sk_buff *VAR_12 = VAR_4->tx_skb[VAR_10];
   if (VAR_12) {
    FUNC_7(&VAR_4->dev->dev, FUNC_0(VAR_12)->dma_addr,
       VAR_12->len, VAR_1);
    VAR_4->tx_skb[VAR_10] = ((void*)0);
   }
   FUNC_17(&VAR_4->tx_queue_lock);
   VAR_8 = FUNC_14(&VAR_4->tx_queue[VAR_10]);
   if (!VAR_8)
    VAR_4->tx_mask &= ~(1 << VAR_10);
   FUNC_19(&VAR_4->tx_queue_lock);

   if (VAR_8 && !VAR_4->using_dma) {
    FUNC_12(FUNC_1(VAR_4, VAR_10), VAR_8->data, VAR_8->len);
    VAR_7 |= 1 << VAR_10;
    VAR_12 = VAR_8;
   } else if (VAR_8 && VAR_4->using_dma) {
    unsigned char *VAR_13 = VAR_8->data;
    if ((unsigned long)VAR_13 & VAR_4->dma_alignment) {
     VAR_13 = VAR_4->dma_bounce + (VAR_0 * VAR_10);
     FUNC_11(VAR_13, VAR_8->data, VAR_8->len);
    }
    FUNC_0(VAR_8)->dma_addr = FUNC_6(&VAR_4->dev->dev, VAR_13,
               VAR_8->len, VAR_1);
    VAR_4->tx_skb[VAR_10] = VAR_8;
    FUNC_9(FUNC_0(VAR_8)->dma_addr,
       VAR_4->config_regs + FUNC_2(VAR_10));
   }

   if (!VAR_12)
    continue;


   if (VAR_3) {
    struct pkt_hdr *VAR_14 = (void *)VAR_12->data;
    int VAR_15 = FUNC_10(VAR_14->size);

    FUNC_15(VAR_12, sizeof(*VAR_14));
    FUNC_4(&VAR_4->dev->dev, "Transmitted: port %d\n",
      VAR_10);
    FUNC_4(&VAR_4->dev->dev, "size: %d VPI: %d VCI: %d\n",
      VAR_15, FUNC_10(VAR_14->vpi),
      FUNC_10(VAR_14->vci));
    FUNC_13(VAR_12);
   }

   VAR_9 = FUNC_0(VAR_12)->vcc;

   if (VAR_9) {
    FUNC_3(&VAR_9->stats->tx);
    FUNC_16(VAR_9, VAR_12);
   } else {
    FUNC_5(VAR_12);
    FUNC_21(&VAR_4->param_wq);
   }
  }
 }

 if (VAR_7)
  FUNC_9(VAR_7, VAR_4->config_regs + VAR_2);

 FUNC_20(&VAR_4->tx_lock, VAR_11);
 return VAR_6;
}
