
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct hci_dev {int name; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (struct hci_dev*,int,int,int*,int ) ;
 int FUNC_4 (struct hci_dev*,char*,int ) ;
 int FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_6(struct hci_dev *VAR_1)
{
 struct sk_buff *VAR_2;
 u8 VAR_3 = 0x00;

 FUNC_0("%s", VAR_1->name);

 VAR_2 = FUNC_3(VAR_1, 0xfc3b, 1, &VAR_3, VAR_0);
 if (FUNC_1(VAR_2))
  FUNC_4(VAR_1, "BCM92035 command failed (%ld)", FUNC_2(VAR_2));
 else
  FUNC_5(VAR_2);

 return 0;
}
