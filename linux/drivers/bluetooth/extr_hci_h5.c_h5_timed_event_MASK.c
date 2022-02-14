
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int sync_req ;
struct timer_list {int dummy; } ;
struct sk_buff {int dummy; } ;
struct hci_uart {TYPE_1__* hdev; } ;
struct TYPE_4__ {int lock; int qlen; } ;
struct h5 {scalar_t__ state; scalar_t__ sleep; int tx_seq; TYPE_2__ unack; int rel; int timer; struct hci_uart* hu; } ;
typedef int conf_req ;
struct TYPE_3__ {int name; } ;


 int FUNC_0 (char*,struct hci_uart*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 struct sk_buff* FUNC_1 (TYPE_2__*) ;
 struct h5* FUNC_2 (int ,struct timer_list*,int ) ;
 struct h5* VAR_7 ;
 unsigned char FUNC_3 (struct h5*) ;
 int FUNC_4 (struct hci_uart*,unsigned char const*,int) ;
 int FUNC_5 (struct hci_uart*) ;
 scalar_t__ VAR_8 ;
 int FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (int *,struct sk_buff*) ;
 int FUNC_8 (int *,unsigned long,int ) ;
 int FUNC_9 (int *,unsigned long) ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_10(struct timer_list *VAR_10)
{
 const unsigned char VAR_11[] = { 0x01, 0x7e };
 unsigned char VAR_12[3] = { 0x03, 0xfc };
 struct h5 *VAR_13 = FUNC_2(VAR_13, VAR_10, VAR_9);
 struct hci_uart *VAR_14 = VAR_13->hu;
 struct sk_buff *VAR_15;
 unsigned long VAR_16;

 FUNC_0("%s", VAR_14->hdev->name);

 if (VAR_13->state == VAR_5)
  FUNC_4(VAR_14, VAR_11, sizeof(VAR_11));

 if (VAR_13->state == VAR_2) {
  VAR_12[2] = FUNC_3(VAR_13);
  FUNC_4(VAR_14, VAR_12, sizeof(VAR_12));
 }

 if (VAR_13->state != VAR_0) {
  FUNC_6(&VAR_13->timer, VAR_8 + VAR_4);
  goto wakeup;
 }

 if (VAR_13->sleep != VAR_1) {
  VAR_13->sleep = VAR_3;
  goto wakeup;
 }

 FUNC_0("hu %p retransmitting %u pkts", VAR_14, VAR_13->unack.qlen);

 FUNC_8(&VAR_13->unack.lock, VAR_16, VAR_6);

 while ((VAR_15 = FUNC_1(&VAR_13->unack)) != ((void*)0)) {
  VAR_13->tx_seq = (VAR_13->tx_seq - 1) & 0x07;
  FUNC_7(&VAR_13->rel, VAR_15);
 }

 FUNC_9(&VAR_13->unack.lock, VAR_16);

wakeup:
 FUNC_5(VAR_14);
}
