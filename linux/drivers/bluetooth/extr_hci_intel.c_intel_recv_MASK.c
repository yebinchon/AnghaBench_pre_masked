
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_data {int * rx_skb; } ;
struct hci_uart {int hdev; int flags; struct intel_data* priv; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,int) ;
 int * FUNC_4 (int ,int *,void const*,int,int ,int ) ;
 int VAR_2 ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct hci_uart *VAR_3, const void *VAR_4, int VAR_5)
{
 struct intel_data *VAR_6 = VAR_3->priv;

 if (!FUNC_5(VAR_1, &VAR_3->flags))
  return -VAR_0;

 VAR_6->rx_skb = FUNC_4(VAR_3->hdev, VAR_6->rx_skb, VAR_4, VAR_5,
        VAR_2,
        FUNC_0(VAR_2));
 if (FUNC_1(VAR_6->rx_skb)) {
  int VAR_7 = FUNC_2(VAR_6->rx_skb);
  FUNC_3(VAR_3->hdev, "Frame reassembly failed (%d)", VAR_7);
  VAR_6->rx_skb = ((void*)0);
  return VAR_7;
 }

 return VAR_5;
}
