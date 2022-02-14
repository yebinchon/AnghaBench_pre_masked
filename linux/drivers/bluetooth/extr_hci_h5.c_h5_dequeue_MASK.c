
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {unsigned char const* data; int len; } ;
struct hci_uart {struct h5* priv; } ;
struct TYPE_2__ {scalar_t__ qlen; int lock; } ;
struct h5 {scalar_t__ sleep; scalar_t__ tx_win; int flags; TYPE_1__ unack; int rel; int timer; int unrel; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_1__*,struct sk_buff*) ;
 struct sk_buff* FUNC_3 (struct hci_uart*,int ,unsigned char const*,int) ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ VAR_8 ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int *,scalar_t__) ;
 struct sk_buff* FUNC_7 (int *) ;
 int FUNC_8 (int *,struct sk_buff*) ;
 int FUNC_9 (int *,unsigned long,int ) ;
 int FUNC_10 (int *,unsigned long) ;
 scalar_t__ FUNC_11 (int ,int *) ;

__attribute__((used)) static struct sk_buff *FUNC_12(struct hci_uart *VAR_9)
{
 struct h5 *VAR_10 = VAR_9->priv;
 unsigned long VAR_11;
 struct sk_buff *VAR_12, *VAR_13;

 if (VAR_10->sleep != VAR_1) {
  const unsigned char VAR_14[] = { 0x05, 0xfa };

  if (VAR_10->sleep == VAR_3)
   return ((void*)0);

  VAR_10->sleep = VAR_3;
  FUNC_0("Sending wakeup request");

  FUNC_6(&VAR_10->timer, VAR_8 + VAR_6 / 100);
  return FUNC_3(VAR_9, VAR_5, VAR_14, 2);
 }

 VAR_12 = FUNC_7(&VAR_10->unrel);
 if (VAR_12) {
  VAR_13 = FUNC_3(VAR_9, FUNC_4(VAR_12),
          VAR_12->data, VAR_12->len);
  if (VAR_13) {
   FUNC_5(VAR_12);
   return VAR_13;
  }

  FUNC_8(&VAR_10->unrel, VAR_12);
  FUNC_1("Could not dequeue pkt because alloc_skb failed");
 }

 FUNC_9(&VAR_10->unack.lock, VAR_11, VAR_7);

 if (VAR_10->unack.qlen >= VAR_10->tx_win)
  goto unlock;

 VAR_12 = FUNC_7(&VAR_10->rel);
 if (VAR_12) {
  VAR_13 = FUNC_3(VAR_9, FUNC_4(VAR_12),
          VAR_12->data, VAR_12->len);
  if (VAR_13) {
   FUNC_2(&VAR_10->unack, VAR_12);
   FUNC_6(&VAR_10->timer, VAR_8 + VAR_0);
   FUNC_10(&VAR_10->unack.lock, VAR_11);
   return VAR_13;
  }

  FUNC_8(&VAR_10->rel, VAR_12);
  FUNC_1("Could not dequeue pkt because alloc_skb failed");
 }

unlock:
 FUNC_10(&VAR_10->unack.lock, VAR_11);

 if (FUNC_11(VAR_2, &VAR_10->flags))
  return FUNC_3(VAR_9, VAR_4, ((void*)0), 0);

 return ((void*)0);
}
