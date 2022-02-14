
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct sk_buff {int dummy; } ;
struct ipoib_tx_buf {int * mapping; struct sk_buff* skb; } ;
struct ipoib_dev_priv {int ca; } ;
typedef int skb_frag_t ;
struct TYPE_2__ {int nr_frags; int * frags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,scalar_t__,int ) ;
 int FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 TYPE_1__* FUNC_4 (struct sk_buff*) ;

void FUNC_5(struct ipoib_dev_priv *VAR_1,
   struct ipoib_tx_buf *VAR_2)
{
 struct sk_buff *VAR_3 = VAR_2->skb;
 u64 *VAR_4 = VAR_2->mapping;
 int VAR_5;
 int VAR_6;

 if (FUNC_3(VAR_3)) {
  FUNC_1(VAR_1->ca, VAR_4[0], FUNC_3(VAR_3),
        VAR_0);
  VAR_6 = 1;
 } else
  VAR_6 = 0;

 for (VAR_5 = 0; VAR_5 < FUNC_4(VAR_3)->nr_frags; ++VAR_5) {
  const skb_frag_t *VAR_7 = &FUNC_4(VAR_3)->frags[VAR_5];

  FUNC_0(VAR_1->ca, VAR_4[VAR_5 + VAR_6],
      FUNC_2(VAR_7), VAR_0);
 }
}
