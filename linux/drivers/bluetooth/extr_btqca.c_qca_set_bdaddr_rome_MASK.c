
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct hci_dev {int dummy; } ;
typedef int cmd ;
typedef int bdaddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct hci_dev*,int ,int,int*,int ,int ) ;
 int FUNC_3 (struct hci_dev*,char*,int) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int*,int const*,int) ;

int FUNC_6(struct hci_dev *VAR_4, const bdaddr_t *VAR_5)
{
 struct sk_buff *VAR_6;
 u8 VAR_7[9];
 int VAR_8;

 VAR_7[0] = VAR_1;
 VAR_7[1] = 0x02;
 VAR_7[2] = sizeof(bdaddr_t);
 FUNC_5(VAR_7 + 3, VAR_5, sizeof(bdaddr_t));
 VAR_6 = FUNC_2(VAR_4, VAR_0, sizeof(VAR_7), VAR_7,
    VAR_2, VAR_3);
 if (FUNC_0(VAR_6)) {
  VAR_8 = FUNC_1(VAR_6);
  FUNC_3(VAR_4, "QCA Change address command failed (%d)", VAR_8);
  return VAR_8;
 }

 FUNC_4(VAR_6);

 return 0;
}
