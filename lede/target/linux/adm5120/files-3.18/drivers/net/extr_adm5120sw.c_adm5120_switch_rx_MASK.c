
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; scalar_t__ data; int ip_summed; int protocol; struct net_device* dev; } ;
struct TYPE_2__ {int rx_bytes; int rx_packets; int rx_crc_errors; int rx_length_errors; int rx_errors; } ;
struct net_device {TYPE_1__ stats; int last_rx; } ;
struct dma_desc {int buf1; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,...) ;
 struct net_device** VAR_4 ;
 int FUNC_1 () ;
 int VAR_5 ;
 int FUNC_2 (struct dma_desc*) ;
 unsigned int FUNC_3 (struct dma_desc*) ;
 scalar_t__ FUNC_4 (struct dma_desc*) ;
 int VAR_6 ;
 int FUNC_5 (unsigned long,int ) ;
 int FUNC_6 (struct sk_buff*,struct net_device*) ;
 int VAR_7 ;
 int FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct sk_buff*) ;
 struct dma_desc* VAR_8 ;
 struct sk_buff** VAR_9 ;
 int FUNC_10 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_11(int VAR_10)
{
 unsigned int VAR_11 = 0;

 FUNC_0("rx start, limit=%d, cur_rxl=%u, dirty_rxl=%u\n",
    VAR_10, VAR_5, VAR_6);

 while (VAR_11 < VAR_10) {
  int VAR_12 = VAR_5 % VAR_3;
  struct dma_desc *VAR_13 = &VAR_8[VAR_12];
  struct net_device *VAR_14;
  unsigned int VAR_15;

  if (VAR_13->buf1 & VAR_1)
   break;

  if (VAR_6 + VAR_3 == VAR_5)
   break;

  VAR_15 = FUNC_3(VAR_13);
  VAR_14 = VAR_4[VAR_15];

  FUNC_0("rx descriptor %u, desc=%p, skb=%p\n", VAR_12, VAR_13,
    VAR_9[VAR_12]);

  if ((VAR_14) && FUNC_8(VAR_14)) {
   struct sk_buff *VAR_16 = VAR_9[VAR_12];
   int VAR_17;

   VAR_17 = FUNC_2(VAR_13);
   VAR_17 -= VAR_2;

   if ((VAR_17 == 0) || FUNC_4(VAR_13)) {
    VAR_14->stats.rx_errors++;
    if (VAR_17 == 0)
     VAR_14->stats.rx_length_errors++;
    if (FUNC_4(VAR_13))
     VAR_14->stats.rx_crc_errors++;
    FUNC_0("rx error, recycling skb %u\n", VAR_12);
   } else {
    FUNC_10(VAR_16, VAR_17);

    VAR_16->dev = VAR_14;
    VAR_16->protocol = FUNC_6(VAR_16, VAR_14);
    VAR_16->ip_summed = VAR_0;

    FUNC_5((unsigned long)VAR_16->data,
     VAR_16->len);




    FUNC_9(VAR_16);


    VAR_14->last_rx = VAR_7;
    VAR_14->stats.rx_packets++;
    VAR_14->stats.rx_bytes += VAR_17;

    VAR_9[VAR_12] = ((void*)0);
    VAR_11++;
   }
  } else {
   FUNC_0("no rx device, recycling skb %u\n", VAR_12);
  }

  VAR_5++;
  if (VAR_5 - VAR_6 > VAR_3 / 4)
   FUNC_1();
 }

 FUNC_1();

 FUNC_0("rx finished, cur_rxl=%u, dirty_rxl=%u, processed %d\n",
    VAR_5, VAR_6, VAR_11);

 return VAR_11;
}
