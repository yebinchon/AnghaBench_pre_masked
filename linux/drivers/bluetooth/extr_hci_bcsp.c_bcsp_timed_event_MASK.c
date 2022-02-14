
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct sk_buff {int dummy; } ;
struct hci_uart {int dummy; } ;
struct TYPE_2__ {int lock; int qlen; } ;
struct bcsp_struct {int msgq_txseq; TYPE_1__ unack; int rel; struct hci_uart* hu; } ;


 int FUNC_0 (char*,struct hci_uart*,int ) ;
 int VAR_0 ;
 struct sk_buff* FUNC_1 (TYPE_1__*) ;
 struct bcsp_struct* VAR_1 ;
 struct bcsp_struct* FUNC_2 (int ,struct timer_list*,int ) ;
 int FUNC_3 (struct hci_uart*) ;
 int FUNC_4 (int *,struct sk_buff*) ;
 int FUNC_5 (int *,unsigned long,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_7(struct timer_list *VAR_3)
{
 struct bcsp_struct *VAR_4 = FUNC_2(VAR_4, VAR_3, VAR_2);
 struct hci_uart *VAR_5 = VAR_4->hu;
 struct sk_buff *VAR_6;
 unsigned long VAR_7;

 FUNC_0("hu %p retransmitting %u pkts", VAR_5, VAR_4->unack.qlen);

 FUNC_5(&VAR_4->unack.lock, VAR_7, VAR_0);

 while ((VAR_6 = FUNC_1(&VAR_4->unack)) != ((void*)0)) {
  VAR_4->msgq_txseq = (VAR_4->msgq_txseq - 1) & 0x07;
  FUNC_4(&VAR_4->rel, VAR_6);
 }

 FUNC_6(&VAR_4->unack.lock, VAR_7);

 FUNC_3(VAR_5);
}
