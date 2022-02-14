
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {scalar_t__ data; } ;
struct hci_dev {int name; } ;
typedef int req ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (struct hci_dev*,int,int,int const*,int ) ;
 int FUNC_4 (struct hci_dev*,char*,char*) ;
 int FUNC_5 (struct hci_dev*,char*,scalar_t__) ;
 int FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_7(struct hci_dev *VAR_1)
{
 static const u8 VAR_2[] = { 0x07 };
 struct sk_buff *VAR_3;

 FUNC_0("%s", VAR_1->name);


 VAR_3 = FUNC_3(VAR_1, 0xfc0e, sizeof(VAR_2), VAR_2, VAR_0);
 if (FUNC_1(VAR_3))
  return FUNC_2(VAR_3);

 FUNC_4(VAR_1, "%s", (char *)(VAR_3->data + 1));

 FUNC_5(VAR_1, "%s", VAR_3->data + 1);

 FUNC_6(VAR_3);
 return 0;
}
