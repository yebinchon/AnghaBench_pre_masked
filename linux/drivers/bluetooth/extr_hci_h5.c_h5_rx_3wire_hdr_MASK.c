
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hci_uart {TYPE_2__* hdev; struct h5* priv; } ;
struct h5 {scalar_t__ tx_ack; scalar_t__ state; int rx_pending; int rx_func; TYPE_1__* rx_skb; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {unsigned char* data; } ;


 int FUNC_0 (char*,int ,scalar_t__,int ,int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (unsigned char const*) ;
 int FUNC_3 (unsigned char const*) ;
 int FUNC_4 (unsigned char const*) ;
 scalar_t__ FUNC_5 (unsigned char const*) ;
 scalar_t__ FUNC_6 (unsigned char const*) ;
 scalar_t__ FUNC_7 (unsigned char const*) ;
 scalar_t__ VAR_1 ;
 int FUNC_8 (struct h5*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_9(struct hci_uart *VAR_3, unsigned char VAR_4)
{
 struct h5 *VAR_5 = VAR_3->priv;
 const unsigned char *VAR_6 = VAR_5->rx_skb->data;

 FUNC_0("%s rx: seq %u ack %u crc %u rel %u type %u len %u",
        VAR_3->hdev->name, FUNC_7(VAR_6), FUNC_2(VAR_6),
        FUNC_3(VAR_6), FUNC_6(VAR_6), FUNC_5(VAR_6),
        FUNC_4(VAR_6));

 if (((VAR_6[0] + VAR_6[1] + VAR_6[2] + VAR_6[3]) & 0xff) != 0xff) {
  FUNC_1("Invalid header checksum");
  FUNC_8(VAR_5);
  return 0;
 }

 if (FUNC_6(VAR_6) && FUNC_7(VAR_6) != VAR_5->tx_ack) {
  FUNC_1("Out-of-order packet arrived (%u != %u)",
         FUNC_7(VAR_6), VAR_5->tx_ack);
  FUNC_8(VAR_5);
  return 0;
 }

 if (VAR_5->state != VAR_0 &&
     FUNC_5(VAR_6) != VAR_1) {
  FUNC_1("Non-link packet received in non-active state");
  FUNC_8(VAR_5);
  return 0;
 }

 VAR_5->rx_func = VAR_2;
 VAR_5->rx_pending = FUNC_4(VAR_6);

 return 0;
}
