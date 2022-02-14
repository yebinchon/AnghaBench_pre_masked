
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hci_uart {struct h5* priv; } ;
struct h5 {int rx_pending; int rx_func; TYPE_1__* rx_skb; } ;
struct TYPE_2__ {unsigned char* data; } ;


 scalar_t__ FUNC_0 (unsigned char const*) ;
 int FUNC_1 (struct hci_uart*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct hci_uart *VAR_1, unsigned char VAR_2)
{
 struct h5 *VAR_3 = VAR_1->priv;
 const unsigned char *VAR_4 = VAR_3->rx_skb->data;

 if (FUNC_0(VAR_4)) {
  VAR_3->rx_func = VAR_0;
  VAR_3->rx_pending = 2;
 } else {
  FUNC_1(VAR_1);
 }

 return 0;
}
