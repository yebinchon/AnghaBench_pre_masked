
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ag71xx_ring {int dirty; int curr; TYPE_1__* buf; int order; } ;
struct ag71xx_desc {int ctrl; } ;
struct ag71xx {int restart_work; TYPE_3__* dev; scalar_t__ tx_hang_workaround; struct ag71xx_ring tx_ring; } ;
struct TYPE_6__ {int tx_bytes; int tx_packets; } ;
struct TYPE_7__ {TYPE_2__ stats; int name; } ;
struct TYPE_5__ {scalar_t__ len; struct sk_buff* skb; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct ag71xx*) ;
 int FUNC_3 (struct ag71xx_desc*) ;
 struct ag71xx_desc* FUNC_4 (struct ag71xx_ring*,unsigned int) ;
 int FUNC_5 (struct ag71xx*,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (TYPE_3__*,int,int) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (int *,int) ;

__attribute__((used)) static int FUNC_11(struct ag71xx *VAR_4, bool VAR_5)
{
 struct ag71xx_ring *VAR_6 = &VAR_4->tx_ring;
 bool VAR_7 = 0;
 int VAR_8 = FUNC_0(VAR_6->order) - 1;
 int VAR_9 = FUNC_0(VAR_6->order);
 int VAR_10 = 0;
 int VAR_11 = 0;
 int VAR_12 = 0;

 FUNC_1("%s: processing TX ring\n", VAR_4->dev->name);

 while (VAR_6->dirty + VAR_12 != VAR_6->curr) {
  unsigned int VAR_13 = (VAR_6->dirty + VAR_12) & VAR_8;
  struct ag71xx_desc *VAR_14 = FUNC_4(VAR_6, VAR_13);
  struct sk_buff *VAR_15 = VAR_6->buf[VAR_13].skb;

  if (!VAR_5 && !FUNC_3(VAR_14)) {
   if (VAR_4->tx_hang_workaround &&
       FUNC_2(VAR_4)) {
    FUNC_10(&VAR_4->restart_work, VAR_2 / 2);
    VAR_7 = 1;
   }
   break;
  }

  if (VAR_5)
   VAR_14->ctrl |= VAR_1;

  VAR_12++;
  if (!VAR_15)
   continue;

  FUNC_7(VAR_15);
  VAR_6->buf[VAR_13].skb = ((void*)0);

  VAR_11 += VAR_6->buf[VAR_13].len;

  VAR_10++;
  VAR_6->dirty += VAR_12;

  while (VAR_12 > 0) {
   FUNC_5(VAR_4, VAR_0, VAR_3);
   VAR_12--;
  }
 }

 FUNC_1("%s: %d packets sent out\n", VAR_4->dev->name, VAR_10);

 if (!VAR_10)
  return 0;

 VAR_4->dev->stats.tx_bytes += VAR_11;
 VAR_4->dev->stats.tx_packets += VAR_10;

 FUNC_8(VAR_4->dev, VAR_10, VAR_11);
 if ((VAR_6->curr - VAR_6->dirty) < (VAR_9 * 3) / 4)
  FUNC_9(VAR_4->dev);

 if (!VAR_7)
  FUNC_6(&VAR_4->restart_work);

 return VAR_10;
}
