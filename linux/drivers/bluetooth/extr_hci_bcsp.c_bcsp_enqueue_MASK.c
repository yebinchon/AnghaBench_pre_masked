
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct hci_uart {struct bcsp_struct* priv; } ;
struct bcsp_struct {int unrel; int rel; } ;


 int FUNC_0 (char*) ;



 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *,struct sk_buff*) ;

__attribute__((used)) static int FUNC_4(struct hci_uart *VAR_0, struct sk_buff *VAR_1)
{
 struct bcsp_struct *VAR_2 = VAR_0->priv;

 if (VAR_1->len > 0xFFF) {
  FUNC_0("Packet too long");
  FUNC_2(VAR_1);
  return 0;
 }

 switch (FUNC_1(VAR_1)) {
 case 130:
 case 129:
  FUNC_3(&VAR_2->rel, VAR_1);
  break;

 case 128:
  FUNC_3(&VAR_2->unrel, VAR_1);
  break;

 default:
  FUNC_0("Unknown packet type");
  FUNC_2(VAR_1);
  break;
 }

 return 0;
}
