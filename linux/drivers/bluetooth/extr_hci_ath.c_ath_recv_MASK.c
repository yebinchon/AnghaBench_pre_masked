
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_uart {int hdev; struct ath_struct* priv; } ;
struct ath_struct {int * rx_skb; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int ,char*,int) ;
 int * FUNC_4 (int ,int *,void const*,int,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct hci_uart *VAR_1, const void *VAR_2, int VAR_3)
{
 struct ath_struct *VAR_4 = VAR_1->priv;

 VAR_4->rx_skb = FUNC_4(VAR_1->hdev, VAR_4->rx_skb, VAR_2, VAR_3,
      VAR_0, FUNC_0(VAR_0));
 if (FUNC_1(VAR_4->rx_skb)) {
  int VAR_5 = FUNC_2(VAR_4->rx_skb);
  FUNC_3(VAR_1->hdev, "Frame reassembly failed (%d)", VAR_5);
  VAR_4->rx_skb = ((void*)0);
  return VAR_5;
 }

 return VAR_3;
}
