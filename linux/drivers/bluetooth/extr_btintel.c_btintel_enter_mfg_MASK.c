
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct hci_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct hci_dev*,int,int,int const*,int ) ;
 int FUNC_3 (struct hci_dev*,char*,int) ;
 int FUNC_4 (struct sk_buff*) ;

int FUNC_5(struct hci_dev *VAR_1)
{
 static const u8 VAR_2[] = { 0x01, 0x00 };
 struct sk_buff *VAR_3;

 VAR_3 = FUNC_2(VAR_1, 0xfc11, 2, VAR_2, VAR_0);
 if (FUNC_0(VAR_3)) {
  FUNC_3(VAR_1, "Entering manufacturer mode failed (%ld)",
      FUNC_1(VAR_3));
  return FUNC_1(VAR_3);
 }
 FUNC_4(VAR_3);

 return 0;
}
