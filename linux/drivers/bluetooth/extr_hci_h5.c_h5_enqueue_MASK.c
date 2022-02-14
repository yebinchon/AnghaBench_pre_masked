
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct hci_uart {struct h5* priv; } ;
struct h5 {scalar_t__ state; int unrel; int rel; } ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;



 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *,struct sk_buff*) ;

__attribute__((used)) static int FUNC_4(struct hci_uart *VAR_1, struct sk_buff *VAR_2)
{
 struct h5 *VAR_3 = VAR_1->priv;

 if (VAR_2->len > 0xfff) {
  FUNC_0("Packet too long (%u bytes)", VAR_2->len);
  FUNC_2(VAR_2);
  return 0;
 }

 if (VAR_3->state != VAR_0) {
  FUNC_0("Ignoring HCI data in non-active state");
  FUNC_2(VAR_2);
  return 0;
 }

 switch (FUNC_1(VAR_2)) {
 case 130:
 case 129:
  FUNC_3(&VAR_3->rel, VAR_2);
  break;

 case 128:
  FUNC_3(&VAR_3->unrel, VAR_2);
  break;

 default:
  FUNC_0("Unknown packet type %u", FUNC_1(VAR_2));
  FUNC_2(VAR_2);
  break;
 }

 return 0;
}
