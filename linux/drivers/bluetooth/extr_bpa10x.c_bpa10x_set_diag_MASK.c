
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct hci_dev {int flags; int name; } ;
typedef int req ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (struct hci_dev*,int,int,int const*,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct hci_dev *VAR_3, bool VAR_4)
{
 const u8 VAR_5[] = { 0x00, VAR_4 };
 struct sk_buff *VAR_6;

 FUNC_0("%s", VAR_3->name);

 if (!FUNC_5(VAR_2, &VAR_3->flags))
  return -VAR_0;


 VAR_6 = FUNC_3(VAR_3, 0xfc0e, sizeof(VAR_5), VAR_5, VAR_1);
 if (FUNC_1(VAR_6))
  return FUNC_2(VAR_6);

 FUNC_4(VAR_6);
 return 0;
}
