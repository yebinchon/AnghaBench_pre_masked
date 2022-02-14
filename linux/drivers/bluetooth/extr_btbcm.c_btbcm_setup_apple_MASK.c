
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {char** data; } ;
struct hci_dev {int quirks; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct hci_dev*,char*,char*,...) ;
 struct sk_buff* FUNC_2 (struct hci_dev*) ;
 struct sk_buff* FUNC_3 (struct hci_dev*) ;
 struct sk_buff* FUNC_4 (struct hci_dev*) ;
 struct sk_buff* FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct hci_dev*) ;
 int FUNC_7 (char**) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (int ,int *) ;

int FUNC_10(struct hci_dev *VAR_1)
{
 struct sk_buff *VAR_2;
 int VAR_3;


 VAR_3 = FUNC_6(VAR_1);
 if (VAR_3)
  return VAR_3;


 VAR_2 = FUNC_5(VAR_1);
 if (!FUNC_0(VAR_2)) {
  FUNC_1(VAR_1, "BCM: chip id %u build %4.4u",
       VAR_2->data[1], FUNC_7(VAR_2->data + 5));
  FUNC_8(VAR_2);
 }


 VAR_2 = FUNC_4(VAR_1);
 if (!FUNC_0(VAR_2)) {
  FUNC_1(VAR_1, "BCM: product %4.4x:%4.4x",
       FUNC_7(VAR_2->data + 1),
       FUNC_7(VAR_2->data + 3));
  FUNC_8(VAR_2);
 }


 VAR_2 = FUNC_2(VAR_1);
 if (!FUNC_0(VAR_2)) {
  FUNC_1(VAR_1, "BCM: features 0x%2.2x", VAR_2->data[1]);
  FUNC_8(VAR_2);
 }


 VAR_2 = FUNC_3(VAR_1);
 if (!FUNC_0(VAR_2)) {
  FUNC_1(VAR_1, "%s", (char *)(VAR_2->data + 1));
  FUNC_8(VAR_2);
 }

 FUNC_9(VAR_0, &VAR_1->quirks);

 return 0;
}
