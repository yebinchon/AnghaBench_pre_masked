
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {char** data; } ;
struct hci_dev {int dummy; } ;


 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct hci_dev*,char*,char*) ;
 struct sk_buff* FUNC_3 (struct hci_dev*) ;
 struct sk_buff* FUNC_4 (struct hci_dev*) ;
 struct sk_buff* FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_7(struct hci_dev *VAR_0)
{
 struct sk_buff *VAR_1;


 VAR_1 = FUNC_5(VAR_0);
 if (FUNC_0(VAR_1))
  return FUNC_1(VAR_1);

 FUNC_2(VAR_0, "BCM: chip id %u", VAR_1->data[1]);
 FUNC_6(VAR_1);


 VAR_1 = FUNC_3(VAR_0);
 if (FUNC_0(VAR_1))
  return FUNC_1(VAR_1);

 FUNC_2(VAR_0, "BCM: features 0x%2.2x", VAR_1->data[1]);
 FUNC_6(VAR_1);


 VAR_1 = FUNC_4(VAR_0);
 if (FUNC_0(VAR_1))
  return FUNC_1(VAR_1);

 FUNC_2(VAR_0, "%s", (char *)(VAR_1->data + 1));
 FUNC_6(VAR_1);

 return 0;
}
