
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vector_queue {int head; TYPE_2__* dev; struct sk_buff** skbuff_vector; } ;
struct sk_buff {scalar_t__ len; } ;
struct TYPE_3__ {int tx_bytes; int tx_packets; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (TYPE_2__*,int,int) ;
 int FUNC_2 (struct vector_queue*,int) ;

__attribute__((used)) static int FUNC_3(struct vector_queue *VAR_0, int VAR_1)
{
 struct sk_buff *VAR_2;
 int VAR_3;
 int VAR_4 = 0;

 for (VAR_3 = VAR_0->head; VAR_3 < VAR_0->head + VAR_1; VAR_3++) {
  VAR_2 = *(VAR_0->skbuff_vector + VAR_3);



  VAR_4 += VAR_2->len;
  *(VAR_0->skbuff_vector + VAR_3) = ((void*)0);
  FUNC_0(VAR_2);
 }
 VAR_0->dev->stats.tx_bytes += VAR_4;
 VAR_0->dev->stats.tx_packets += VAR_1;
 FUNC_1(VAR_0->dev, VAR_1, VAR_4);
 return FUNC_2(VAR_0, VAR_1);
}
