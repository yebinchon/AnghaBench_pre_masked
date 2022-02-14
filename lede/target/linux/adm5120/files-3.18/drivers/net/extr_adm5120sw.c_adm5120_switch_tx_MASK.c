
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {TYPE_2__* dev; scalar_t__ len; } ;
struct dma_desc {int buf1; } ;
struct TYPE_3__ {int tx_packets; int tx_bytes; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*) ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_7 ;
 struct dma_desc* VAR_8 ;
 struct sk_buff** VAR_9 ;

__attribute__((used)) static void FUNC_5(void)
{
 unsigned int VAR_10;

 FUNC_3(&VAR_7);
 VAR_10 = VAR_6 % VAR_3;
 while (VAR_6 != VAR_5) {
  struct dma_desc *VAR_11 = &VAR_8[VAR_10];
  struct sk_buff *VAR_12 = VAR_9[VAR_10];

  if (VAR_11->buf1 & VAR_0)
   break;

  if (FUNC_1(VAR_12->dev)) {
   VAR_12->dev->stats.tx_bytes += VAR_12->len;
   VAR_12->dev->stats.tx_packets++;
  }

  FUNC_0(VAR_12);
  VAR_9[VAR_10] = ((void*)0);
  VAR_10 = (++VAR_6) % VAR_3;
 }

 if ((VAR_5 - VAR_6) < VAR_2 - 4) {
  int VAR_13;
  for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
   if (!VAR_4[VAR_13])
    continue;
   FUNC_2(VAR_4[VAR_13]);
  }
 }
 FUNC_4(&VAR_7);
}
