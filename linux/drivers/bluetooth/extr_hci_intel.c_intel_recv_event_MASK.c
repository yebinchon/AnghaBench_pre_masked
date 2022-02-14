
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int* data; int len; } ;
struct intel_data {int flags; } ;
struct hci_uart {struct intel_data* priv; } ;
struct hci_event_hdr {int evt; int plen; } ;
struct hci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct hci_uart* FUNC_0 (struct hci_dev*) ;
 int FUNC_1 (struct hci_dev*,struct sk_buff*) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(struct hci_dev *VAR_5, struct sk_buff *VAR_6)
{
 struct hci_uart *VAR_7 = FUNC_0(VAR_5);
 struct intel_data *VAR_8 = VAR_7->priv;
 struct hci_event_hdr *VAR_9;

 if (!FUNC_4(VAR_1, &VAR_8->flags) &&
     !FUNC_4(VAR_0, &VAR_8->flags))
  goto recv;

 VAR_9 = (void *)VAR_6->data;





 if (VAR_6->len == 7 && VAR_9->evt == 0xff && VAR_9->plen == 0x05 &&
     VAR_6->data[2] == 0x06) {
  if (VAR_6->data[3] != 0x00)
   FUNC_2(VAR_3, &VAR_8->flags);

  if (FUNC_3(VAR_2, &VAR_8->flags) &&
      FUNC_4(VAR_4, &VAR_8->flags))
   FUNC_5(&VAR_8->flags, VAR_2);





 } else if (VAR_6->len == 9 && VAR_9->evt == 0xff && VAR_9->plen == 0x07 &&
     VAR_6->data[2] == 0x02) {
  if (FUNC_3(VAR_0, &VAR_8->flags))
   FUNC_5(&VAR_8->flags, VAR_0);
 }
recv:
 return FUNC_1(VAR_5, VAR_6);
}
