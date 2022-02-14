
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct solos_card {int nr_ports; int buffer_size; scalar_t__ config_regs; int tlet; TYPE_2__* dev; struct sk_buff** rx_skb; scalar_t__* atmdev; scalar_t__ using_dma; int cli_queue_lock; int * cli_queue; } ;
struct sk_buff {scalar_t__ data; int len; int truesize; } ;
struct pkt_hdr {int vci; int vpi; int type; int size; } ;
struct atm_vcc {TYPE_1__* stats; int (* push ) (struct atm_vcc*,struct sk_buff*) ;} ;
struct TYPE_6__ {int dma_addr; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int rx; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;



 scalar_t__ FUNC_0 (struct solos_card*,int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;
 TYPE_3__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct atm_vcc*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int *) ;
 struct sk_buff* FUNC_5 (int ) ;
 int FUNC_6 (int *,char*,int,...) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (int *,char*,...) ;
 int FUNC_9 (int *,scalar_t__,int ,int ) ;
 int FUNC_10 (int *,int,int ,int ) ;
 struct atm_vcc* FUNC_11 (scalar_t__,int,int) ;
 int FUNC_12 (struct solos_card*) ;
 int FUNC_13 (int,scalar_t__) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct pkt_hdr*,scalar_t__,int) ;
 scalar_t__ FUNC_16 () ;
 struct sk_buff* FUNC_17 (int *,int) ;
 int FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (struct solos_card*,int,struct sk_buff*) ;
 int FUNC_20 (struct solos_card*,int,struct sk_buff*) ;
 int FUNC_21 (struct sk_buff*,int) ;
 struct pkt_hdr* FUNC_22 (struct sk_buff*,int) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *,struct sk_buff*) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (struct atm_vcc*,struct sk_buff*) ;
 int FUNC_28 (int *) ;

__attribute__((used)) static void FUNC_29(unsigned long VAR_4)
{
 struct solos_card *VAR_5 = (void *)VAR_4;
 uint32_t VAR_6;
 uint32_t VAR_7 = 0;
 int VAR_8;






 VAR_6 = FUNC_12(VAR_5);

 for (VAR_8 = 0; VAR_8 < VAR_5->nr_ports; VAR_8++) {
  if (VAR_6 & (0x10 << VAR_8)) {
   struct pkt_hdr VAR_9, *VAR_10;
   struct sk_buff *VAR_11;
   struct atm_vcc *VAR_12;
   int VAR_13;

   if (VAR_5->using_dma) {
    VAR_11 = VAR_5->rx_skb[VAR_8];
    VAR_5->rx_skb[VAR_8] = ((void*)0);

    FUNC_10(&VAR_5->dev->dev, FUNC_2(VAR_11)->dma_addr,
       VAR_2, VAR_0);

    VAR_10 = (void *)VAR_11->data;
    VAR_13 = FUNC_14(VAR_10->size);
    FUNC_22(VAR_11, VAR_13 + sizeof(*VAR_10));
    FUNC_21(VAR_11, sizeof(*VAR_10));
   } else {
    VAR_10 = &VAR_9;

    VAR_7 |= 0x10 << VAR_8;

    FUNC_15(VAR_10, FUNC_0(VAR_5, VAR_8), sizeof(*VAR_10));

    VAR_13 = FUNC_14(VAR_10->size);
    if (VAR_13 > (VAR_5->buffer_size - sizeof(*VAR_10))){
     FUNC_8(&VAR_5->dev->dev, "Invalid buffer size\n");
     continue;
    }






    VAR_11 = FUNC_17(((void*)0), VAR_13 + 1);
    if (!VAR_11) {
     if (FUNC_16())
      FUNC_8(&VAR_5->dev->dev, "Failed to allocate sk_buff for RX\n");
     continue;
    }

    FUNC_15(FUNC_22(VAR_11, VAR_13),
           FUNC_0(VAR_5, VAR_8) + sizeof(*VAR_10),
           VAR_13);
   }
   if (VAR_3) {
    FUNC_6(&VAR_5->dev->dev, "Received: port %d\n", VAR_8);
    FUNC_6(&VAR_5->dev->dev, "size: %d VPI: %d VCI: %d\n",
      VAR_13, FUNC_14(VAR_10->vpi),
      FUNC_14(VAR_10->vci));
    FUNC_18(VAR_11);
   }

   switch (FUNC_14(VAR_10->type)) {
   case 129:
    VAR_12 = FUNC_11(VAR_5->atmdev[VAR_8], FUNC_14(VAR_10->vpi),
            FUNC_14(VAR_10->vci));
    if (!VAR_12) {
     if (FUNC_16())
      FUNC_8(&VAR_5->dev->dev, "Received packet for unknown VPI.VCI %d.%d on port %d\n",
        FUNC_14(VAR_10->vpi), FUNC_14(VAR_10->vci),
        VAR_8);
     FUNC_7(VAR_11);
     break;
    }
    FUNC_3(VAR_12, VAR_11->truesize);
    VAR_12->push(VAR_12, VAR_11);
    FUNC_4(&VAR_12->stats->rx);
    break;

   case 128:
    if (FUNC_20(VAR_5, VAR_8, VAR_11) &&
        FUNC_16()) {
     FUNC_8(&VAR_5->dev->dev, "Bad status packet of %d bytes on port %d:\n", VAR_11->len, VAR_8);
     FUNC_18(VAR_11);
    }
    FUNC_7(VAR_11);
    break;

   case 130:
   default:
    if (FUNC_19(VAR_5, VAR_8, VAR_11))
     break;
    FUNC_25(&VAR_5->cli_queue_lock);
    if (FUNC_23(&VAR_5->cli_queue[VAR_8]) > 10) {
     if (FUNC_16())
      FUNC_8(&VAR_5->dev->dev, "Dropping console response on port %d\n",
        VAR_8);
     FUNC_7(VAR_11);
    } else
     FUNC_24(&VAR_5->cli_queue[VAR_8], VAR_11);
    FUNC_26(&VAR_5->cli_queue_lock);
    break;
   }
  }

  if (VAR_5->using_dma && VAR_5->atmdev[VAR_8] &&
      !VAR_5->rx_skb[VAR_8]) {



   struct sk_buff *VAR_14 = FUNC_5(VAR_2);
   if (VAR_14) {
    FUNC_2(VAR_14)->dma_addr =
     FUNC_9(&VAR_5->dev->dev, VAR_14->data,
             VAR_2, VAR_0);
    FUNC_13(FUNC_2(VAR_14)->dma_addr,
       VAR_5->config_regs + FUNC_1(VAR_8));
    VAR_5->rx_skb[VAR_8] = VAR_14;
   } else {
    if (FUNC_16())
     FUNC_8(&VAR_5->dev->dev, "Failed to allocate RX skb");


    FUNC_28(&VAR_5->tlet);
   }
  }
 }
 if (VAR_7)
  FUNC_13(VAR_7, VAR_5->config_regs + VAR_1);

 return;
}
