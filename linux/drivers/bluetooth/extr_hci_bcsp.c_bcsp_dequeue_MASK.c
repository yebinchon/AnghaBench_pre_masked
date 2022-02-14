
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; int * data; } ;
struct hci_uart {struct bcsp_struct* priv; } ;
struct TYPE_2__ {scalar_t__ qlen; int lock; } ;
struct bcsp_struct {scalar_t__ txack_req; TYPE_1__ unack; int rel; int tbcsp; int unrel; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct bcsp_struct*,int *,int ,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int *,scalar_t__) ;
 struct sk_buff* FUNC_6 (int *) ;
 int FUNC_7 (int *,struct sk_buff*) ;
 int FUNC_8 (int *,unsigned long,int ) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static struct sk_buff *FUNC_10(struct hci_uart *VAR_5)
{
 struct bcsp_struct *VAR_6 = VAR_5->priv;
 unsigned long VAR_7;
 struct sk_buff *VAR_8;





 VAR_8 = FUNC_6(&VAR_6->unrel);
 if (VAR_8 != ((void*)0)) {
  struct sk_buff *VAR_9;

  VAR_9 = FUNC_2(VAR_6, VAR_8->data, VAR_8->len,
     FUNC_3(VAR_8));
  if (VAR_9) {
   FUNC_4(VAR_8);
   return VAR_9;
  } else {
   FUNC_7(&VAR_6->unrel, VAR_8);
   FUNC_0("Could not dequeue pkt because alloc_skb failed");
  }
 }






 FUNC_8(&VAR_6->unack.lock, VAR_7, VAR_3);

 if (VAR_6->unack.qlen < VAR_1) {
  VAR_8 = FUNC_6(&VAR_6->rel);
  if (VAR_8 != ((void*)0)) {
   struct sk_buff *VAR_10;

   VAR_10 = FUNC_2(VAR_6, VAR_8->data, VAR_8->len,
      FUNC_3(VAR_8));
   if (VAR_10) {
    FUNC_1(&VAR_6->unack, VAR_8);
    FUNC_5(&VAR_6->tbcsp, VAR_4 + VAR_2 / 4);
    FUNC_9(&VAR_6->unack.lock, VAR_7);
    return VAR_10;
   } else {
    FUNC_7(&VAR_6->rel, VAR_8);
    FUNC_0("Could not dequeue pkt because alloc_skb failed");
   }
  }
 }

 FUNC_9(&VAR_6->unack.lock, VAR_7);






 if (VAR_6->txack_req) {



  struct sk_buff *VAR_11 = FUNC_2(VAR_6, ((void*)0), 0, VAR_0);
  return VAR_11;
 }


 return ((void*)0);
}
