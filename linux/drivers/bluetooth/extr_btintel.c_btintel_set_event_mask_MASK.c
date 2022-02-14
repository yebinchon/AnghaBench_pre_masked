
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
 struct sk_buff* FUNC_2 (struct hci_dev*,int,int,int*,int ) ;
 int FUNC_3 (struct hci_dev*,char*,int) ;
 int FUNC_4 (struct sk_buff*) ;

int FUNC_5(struct hci_dev *VAR_1, bool VAR_2)
{
 u8 VAR_3[8] = { 0x87, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
 struct sk_buff *VAR_4;
 int VAR_5;

 if (VAR_2)
  VAR_3[1] |= 0x62;

 VAR_4 = FUNC_2(VAR_1, 0xfc52, 8, VAR_3, VAR_0);
 if (FUNC_0(VAR_4)) {
  VAR_5 = FUNC_1(VAR_4);
  FUNC_3(VAR_1, "Setting Intel event mask failed (%d)", VAR_5);
  return VAR_5;
 }
 FUNC_4(VAR_4);

 return 0;
}
