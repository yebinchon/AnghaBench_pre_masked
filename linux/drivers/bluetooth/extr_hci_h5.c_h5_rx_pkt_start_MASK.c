
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hci_uart {scalar_t__ hdev; struct h5* priv; } ;
struct h5 {int rx_pending; TYPE_1__* rx_skb; int rx_func; } ;
struct TYPE_2__ {void* dev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 TYPE_1__* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct h5*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_3(struct hci_uart *VAR_5, unsigned char VAR_6)
{
 struct h5 *VAR_7 = VAR_5->priv;

 if (VAR_6 == VAR_3)
  return 1;

 VAR_7->rx_func = VAR_4;
 VAR_7->rx_pending = 4;

 VAR_7->rx_skb = FUNC_1(VAR_2, VAR_1);
 if (!VAR_7->rx_skb) {
  FUNC_0("Can't allocate mem for new packet");
  FUNC_2(VAR_7);
  return -VAR_0;
 }

 VAR_7->rx_skb->dev = (void *)VAR_5->hdev;

 return 0;
}
