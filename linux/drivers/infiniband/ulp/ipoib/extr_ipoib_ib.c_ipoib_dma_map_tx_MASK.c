
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct sk_buff {int data; } ;
struct ipoib_tx_buf {int * mapping; struct sk_buff* skb; } ;
struct ib_device {int dummy; } ;
typedef int skb_frag_t ;
struct TYPE_2__ {int nr_frags; int * frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ib_device*,int ,int ,int ,int ) ;
 int FUNC_1 (struct ib_device*,int ,scalar_t__,int ) ;
 int FUNC_2 (struct ib_device*,int ) ;
 int FUNC_3 (struct ib_device*,int ,int ,int ) ;
 int FUNC_4 (struct ib_device*,int ,scalar_t__,int ) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int const*) ;
 int FUNC_7 (int const*) ;
 scalar_t__ FUNC_8 (struct sk_buff*) ;
 TYPE_1__* FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (int ) ;

int FUNC_11(struct ib_device *VAR_2, struct ipoib_tx_buf *VAR_3)
{
 struct sk_buff *VAR_4 = VAR_3->skb;
 u64 *VAR_5 = VAR_3->mapping;
 int VAR_6;
 int VAR_7;

 if (FUNC_8(VAR_4)) {
  VAR_5[0] = FUNC_1(VAR_2, VAR_4->data, FUNC_8(VAR_4),
            VAR_0);
  if (FUNC_10(FUNC_2(VAR_2, VAR_5[0])))
   return -VAR_1;

  VAR_7 = 1;
 } else
  VAR_7 = 0;

 for (VAR_6 = 0; VAR_6 < FUNC_9(VAR_4)->nr_frags; ++VAR_6) {
  const skb_frag_t *VAR_8 = &FUNC_9(VAR_4)->frags[VAR_6];
  VAR_5[VAR_6 + VAR_7] = FUNC_0(VAR_2,
       FUNC_6(VAR_8),
       FUNC_5(VAR_8),
       FUNC_7(VAR_8),
       VAR_0);
  if (FUNC_10(FUNC_2(VAR_2, VAR_5[VAR_6 + VAR_7])))
   goto partial_error;
 }
 return 0;

partial_error:
 for (; VAR_6 > 0; --VAR_6) {
  const skb_frag_t *VAR_9 = &FUNC_9(VAR_4)->frags[VAR_6 - 1];

  FUNC_3(VAR_2, VAR_5[VAR_6 - !VAR_7], FUNC_7(VAR_9), VAR_0);
 }

 if (VAR_7)
  FUNC_4(VAR_2, VAR_5[0], FUNC_8(VAR_4), VAR_0);

 return -VAR_1;
}
