
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_event_hdr {int evt; } ;
struct hci_dev {int dummy; } ;
struct btmtksdio_dev {int * evt_skb; int tx_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct btmtksdio_dev* FUNC_0 (struct hci_dev*) ;
 int FUNC_1 (struct hci_dev*,struct sk_buff*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (struct sk_buff*,int ) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(struct hci_dev *VAR_4, struct sk_buff *VAR_5)
{
 struct btmtksdio_dev *VAR_6 = FUNC_0(VAR_4);
 struct hci_event_hdr *VAR_7 = (void *)VAR_5->data;
 int VAR_8;





 if (VAR_7->evt == 0xe4)
  VAR_7->evt = VAR_3;




 if (FUNC_6(VAR_0, &VAR_6->tx_state)) {
  VAR_6->evt_skb = FUNC_3(VAR_5, VAR_2);
  if (!VAR_6->evt_skb) {
   VAR_8 = -VAR_1;
   goto err_out;
  }
 }

 VAR_8 = FUNC_1(VAR_4, VAR_5);
 if (VAR_8 < 0)
  goto err_free_skb;

 if (VAR_7->evt == VAR_3) {
  if (FUNC_5(VAR_0,
           &VAR_6->tx_state)) {

   FUNC_4();
   FUNC_7(&VAR_6->tx_state, VAR_0);
  }
 }

 return 0;

err_free_skb:
 FUNC_2(VAR_6->evt_skb);
 VAR_6->evt_skb = ((void*)0);

err_out:
 return VAR_8;
}
