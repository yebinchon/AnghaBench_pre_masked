
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hci_uart {TYPE_2__* hdev; struct h5* priv; } ;
struct h5 {scalar_t__ state; unsigned char tx_win; void* sleep; TYPE_1__* rx_skb; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {unsigned char* data; } ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int FUNC_1 (unsigned char const*) ;
 scalar_t__ FUNC_2 (unsigned char const*) ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned char FUNC_3 (struct h5*) ;
 int FUNC_4 (struct hci_uart*,unsigned char const*,int) ;
 int FUNC_5 (struct hci_uart*) ;
 int FUNC_6 (struct hci_uart*) ;
 int FUNC_7 (struct hci_uart*) ;
 scalar_t__ FUNC_8 (unsigned char const*,unsigned char const*,int) ;

__attribute__((used)) static void FUNC_9(struct hci_uart *VAR_5)
{
 struct h5 *VAR_6 = VAR_5->priv;
 const unsigned char VAR_7[] = { 0x01, 0x7e };
 const unsigned char VAR_8[] = { 0x02, 0x7d };
 unsigned char VAR_9[3] = { 0x03, 0xfc };
 const unsigned char VAR_10[] = { 0x04, 0x7b };
 const unsigned char VAR_11[] = { 0x05, 0xfa };
 const unsigned char VAR_12[] = { 0x06, 0xf9 };
 const unsigned char VAR_13[] = { 0x07, 0x78 };
 const unsigned char *VAR_14 = VAR_6->rx_skb->data;
 const unsigned char *VAR_15 = &VAR_6->rx_skb->data[4];

 FUNC_0("%s", VAR_5->hdev->name);

 if (FUNC_2(VAR_14) != VAR_4)
  return;

 if (FUNC_1(VAR_14) < 2)
  return;

 VAR_9[2] = FUNC_3(VAR_6);

 if (FUNC_8(VAR_15, VAR_7, 2) == 0) {
  if (VAR_6->state == VAR_0)
   FUNC_5(VAR_5);
  FUNC_4(VAR_5, VAR_8, 2);
 } else if (FUNC_8(VAR_15, VAR_8, 2) == 0) {
  if (VAR_6->state == VAR_0)
   FUNC_5(VAR_5);
  VAR_6->state = VAR_2;
  FUNC_4(VAR_5, VAR_9, 3);
 } else if (FUNC_8(VAR_15, VAR_9, 2) == 0) {
  FUNC_4(VAR_5, VAR_10, 2);
  FUNC_4(VAR_5, VAR_9, 3);
 } else if (FUNC_8(VAR_15, VAR_10, 2) == 0) {
  if (FUNC_1(VAR_14) > 2)
   VAR_6->tx_win = (VAR_15[2] & 0x07);
  FUNC_0("Three-wire init complete. tx_win %u", VAR_6->tx_win);
  VAR_6->state = VAR_0;
  FUNC_6(VAR_5);
  return;
 } else if (FUNC_8(VAR_15, VAR_13, 2) == 0) {
  FUNC_0("Peer went to sleep");
  VAR_6->sleep = VAR_3;
  return;
 } else if (FUNC_8(VAR_15, VAR_12, 2) == 0) {
  FUNC_0("Peer woke up");
  VAR_6->sleep = VAR_1;
 } else if (FUNC_8(VAR_15, VAR_11, 2) == 0) {
  FUNC_0("Peer requested wakeup");
  FUNC_4(VAR_5, VAR_12, 2);
  VAR_6->sleep = VAR_1;
 } else {
  FUNC_0("Link Control: 0x%02hhx 0x%02hhx", VAR_15[0], VAR_15[1]);
  return;
 }

 FUNC_7(VAR_5);
}
